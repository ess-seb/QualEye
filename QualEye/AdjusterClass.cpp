#include "StdAfx.h"
#include <string>
#include <windows.h>

#include "AdjusterClass.h"
#include "BloberClass.h"
#include "MScale.h"

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

	int p1;
	int group_threshold;
	int gRadious = 3;
	int gShape = 1;


	int bMinArea_int;
	int bMaxArea_int;

	double bMinArea;
	double bMaxArea;

	bool filterHistogramEqual_enabled = false;
	bool filterResizer_enabled = true;
	double filterResizer_size = 50.0;



	static IplImage* imgSource;
	IplImage* imgOutput = 0;

	IplImage* imgSrcGray = 0;
	IplImage* imgSrcTrash = 0;

	BloberClass* myBlober;
	MScale* myPScaler;

using std::string;

gfxProcessor::gfxProcessor(BloberClass* bcobj, MScale* myPScaler_ex)
{
	myBlober = bcobj;
	p1= 100;
	group_threshold=100;
	bMinArea_int = 80.0; //mm2
	bMaxArea_int = 320; //mm2
	myPScaler = myPScaler_ex;
}

void gfxProcessor::setFilterHistogramEqual_enabled(bool enabled_ex)
{
	filterHistogramEqual_enabled = enabled_ex;
}

void gfxProcessor::setFilterResizer_enabled(bool enabled_ex)
{
	filterResizer_enabled = enabled_ex;
}

void gfxProcessor::setFilterResizer_size(double percent_ex)
{
	filterResizer_size = percent_ex;
}

IplImage* gfxProcessor::makePreFiltering(IplImage* img_ex)
{
	IplImage* imgF = img_ex;
	if (filterResizer_enabled)
	{
		imgF = filterResizer(img_ex, filterResizer_size);
	}
	if (filterHistogramEqual_enabled)
	{
		filterEqualHistogram(imgF);
	}
	return imgF;
}

void gfxProcessor::showPreFiltering(IplImage* imgToPre)
{
	cvNamedWindow("Prefiltering preview", CV_WINDOW_AUTOSIZE);
	int c;
	string txt = string("Press Esc to close preview window");


	while(true)
	{
		addText(imgToPre, txt);
		cvShowImage("Prefiltering preview", imgToPre );
		c = cvWaitKey(50);
		if( c == 27 ) break;
	}

	cvDestroyAllWindows();
}

void gfxProcessor::filterEqualHistogram(IplImage* img_ex)
{
	IplImage* outR = cvCreateImage( cvGetSize(img_ex), IPL_DEPTH_8U, 1 );
	IplImage* outG = cvCreateImage( cvGetSize(img_ex), IPL_DEPTH_8U, 1 );
	IplImage* outB = cvCreateImage( cvGetSize(img_ex), IPL_DEPTH_8U, 1 );

	cvSetImageCOI(img_ex,1);
	cvCopy(img_ex, outB);
	cvSetImageCOI(img_ex,2);
	cvCopy(img_ex, outG);
	cvSetImageCOI(img_ex,3);
	cvCopy(img_ex, outR);
	cvSetImageCOI(img_ex,0);

	cvEqualizeHist( outB, outB );
	cvEqualizeHist( outG, outG );
	cvEqualizeHist( outR, outR );

	cvMerge(outB,outG,outR,NULL,img_ex);

	cvReleaseImage(&outB);
	cvReleaseImage(&outG);
	cvReleaseImage(&outR);
}

IplImage* gfxProcessor::filterResizer(IplImage* img_ex, double percent_ex)
{
	CvSize newImgSize;
	newImgSize.width = (int)img_ex->width*(percent_ex/100);
	newImgSize.height = (int)img_ex->height*(percent_ex/100);
	IplImage* outerImg = cvCreateImage( newImgSize, IPL_DEPTH_8U, 3 );
	cvResize(img_ex, outerImg, CV_INTER_LINEAR);
	return outerImg;
}

//size calibrator

void gfxProcessor::setupImage(IplImage* ex_imgSource)
{
	char outWinName[] = "Output image";

	imgSource = ex_imgSource;
	IplImage* imgSrcTxt = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,3);
	imgOutput = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,3);

	cvNamedWindow(outWinName, CV_WINDOW_AUTOSIZE);
	cvCreateTrackbar( "Threshold", outWinName, &p1, 255, makeAdjustIS);
	cvCreateTrackbar( "Min", outWinName, &bMinArea_int, 1000, makeAdjustIS);
	cvCreateTrackbar( "Max", outWinName, &bMaxArea_int, 1000, makeAdjustIS);

	// Call to update the view
	while(true)
	{
		int c;

		makeAdjustIS(0);
		myBlober->configBlober(bMinArea, bMaxArea);
		myBlober->blobThemAll(imgSrcTrash);
		cvMerge( imgSrcTrash, imgSrcTrash, imgSrcTrash, NULL, imgOutput);
		myBlober->showThemAll(imgOutput);
		myBlober->textThemAll(imgOutput);
		cvCopy(imgSource, imgSrcTxt);

		addText(imgSrcTxt, "Press Esc to finish calibration");
		cvShowImage( outWinName, imgOutput);
		

		c = cvWaitKey(500);


		cvReleaseImage(&imgSrcGray);
		cvReleaseImage(&imgSrcTrash);
		//cvReleaseImage(&imgSrcTxt);

		if( c == 27 )
			break;

	}

	cvDestroyAllWindows();
}

void gfxProcessor::makeAdjustIS(int xxxo)
{
			imgSrcGray = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,1);
			cvCvtColor(imgSource, imgSrcGray, CV_BGR2GRAY);

			imgSrcTrash = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,1);
			cvThreshold( imgSrcGray, imgSrcTrash, p1, 255, CV_THRESH_BINARY );
			

			bMinArea = myPScaler->real2ToPx((double) bMinArea_int);
			bMaxArea = myPScaler->real2ToPx((double) bMaxArea_int);

}


//Group finder calibrator

void gfxProcessor::setupGroupFinder(IplImage* ex_imgSource)
{
	char outWinName[] = "Group finder";

	imgSource = ex_imgSource;
	IplImage* imgSrcTxt = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,3);
	imgOutput = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,3);

	cvNamedWindow(outWinName, CV_WINDOW_AUTOSIZE);
	cvCreateTrackbar( "Radious", outWinName, &gRadious, 100, makeAdjustGroup);
	cvCreateTrackbar( "Shape", outWinName, &gShape, 2, makeAdjustGroup);

	while(true)
	{
		int c;

		makeAdjustGroup(0);
		myBlober->configBlober(bMinArea, bMaxArea);
		myBlober->blobThemAll(imgSrcTrash);
		cvMerge( imgSrcTrash, imgSrcTrash, imgSrcTrash, NULL, imgOutput);
		myBlober->showThemAll(imgOutput);
		myBlober->textThemAll(imgOutput);
		cvCopy(imgSource, imgSrcTxt);

		addText(imgSrcTxt, "Press Esc to finish calibration");
		cvShowImage( outWinName, imgOutput);


		c = cvWaitKey(500);


		cvReleaseImage(&imgSrcGray);
		cvReleaseImage(&imgSrcTrash);
		//cvReleaseImage(&imgSrcTxt);

		if( c == 27 )
			break;

	}

	cvDestroyAllWindows();
}

void gfxProcessor::makeAdjustGroup(int xxxo)
{

	imgSrcGray = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,1);
	cvCvtColor(imgSource, imgSrcGray, CV_BGR2GRAY);

	imgSrcTrash = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,1);
	cvThreshold( imgSrcGray, imgSrcTrash, p1, 255, CV_THRESH_BINARY );

	if (gRadious<=1) gRadious = 2;
	cvDilate(imgSrcTrash, imgSrcTrash, cvCreateStructuringElementEx(gRadious,gRadious,1,1,gShape),1);

}

void gfxProcessor::addText(IplImage* imgIn, string txt)
{
	CvFont* font = new CvFont();
	cvInitFont( font, CV_FONT_HERSHEY_PLAIN, 1, 1, 0, 1, 8 );

	cvPutText( imgIn, txt.c_str(), cvPoint(10,20), font, cvScalar(220,220,0) );
}

//utilities for process

void gfxProcessor::prepareImage(IplImage* srcImg, IplImage* outImg)
{
	cvCvtColor(srcImg, outImg, CV_BGR2GRAY);
	cvThreshold( outImg, outImg, p1, 255, CV_THRESH_BINARY );
}

double getBMinAreaPx()
{
	return bMinArea;
}

double getBMaxAreaPx()
{
	return bMaxArea;
}



CBlobResult gfxProcessor::rejecktGroups(CBlobResult blobresult_ex, IplImage* img_ex)
{
	CBlobResult blobresult_out = CBlobResult();
	CBlob blob;

	for (int bid=0; bid<blobresult_ex.GetNumBlobs(); bid++)
	{

		blobresult_ex.GetNthBlob(CBlobGetArea(), bid, blob);

		IplImage* myBlobImage = cvCreateImage(cvGetSize(img_ex), IPL_DEPTH_8U, 1);
		
		cvRectangle(myBlobImage,cvPoint(0,0),cvPoint(img_ex->width-1,img_ex->height-1), CV_RGB(255,255,255),-1);

		

		blob.FillBlob(myBlobImage, CV_RGB(190,190,190));

		cvDilate(myBlobImage, myBlobImage, cvCreateStructuringElementEx(gRadious,gRadious,1,1,gShape),1);

		CBlobResult blobsAfterEroding = CBlobResult( myBlobImage, NULL, 255 );

		blobsAfterEroding.Filter( blobsAfterEroding, B_EXCLUDE, CBlobGetArea(), B_LESS, bMinArea);

		char buf[10];
		_gcvt(blobsAfterEroding.GetNumBlobs(), 1, buf);
		addText(myBlobImage, string(buf));


		if (blobsAfterEroding.GetNumBlobs()<2)
		{
			CBlob blobToFill;
			for (int uu=0; blobsAfterEroding.GetNumBlobs()>uu; uu++)
			{
				blobsAfterEroding.GetNthBlob(CBlobGetArea(), uu, blobToFill);
				blob.FillBlob(myBlobImage, CV_RGB(0,0,0));
			}


			blobresult_out.AddBlob(&blob);
		}


		cvNamedWindow("Test123");
		cvShowImage( "Test123", myBlobImage);
		int c=0;
		while(true)
		{
			c = cvWaitKey(500);
			if( c == 32 ) break;
		}

		cvDestroyWindow("Test123");
		cvReleaseImage(&myBlobImage);

		
	}



	return blobresult_out;
}


gfxProcessor::~gfxProcessor(void)
{
}
