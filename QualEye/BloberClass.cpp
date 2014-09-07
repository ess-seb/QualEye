#include "StdAfx.h"
#include "BloberClass.h"

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <Math.h>
#include <string>

#include <iostream>




#include <blob.h>
#include <BlobResult.h>
//#include <BlobExtraction.h>
#include <BlobLibraryConfiguration.h>

static IplImage* image_resized;
static IplImage* image2_blobs;

	CBlobResult blobsResult;
	
	double min_blob;
	double max_blob;

	CBlob *myBlob;
	MScale *myBScaler;

	CBlobGetElongation get_elongation;
	CBlobGetMinorAxisLength get_minor_axe;
	CBlobGetBreadth get_breadth;
	CBlobGetLength get_length;

using std::string;

BloberClass::BloberClass(double bMinArea, double bMaxArea, MScale* myBScaler_ex)
{
	myBScaler = myBScaler_ex;
	 min_blob = bMinArea;
	 max_blob = bMaxArea;
}

void BloberClass::configBlober(double bMinArea, double bMaxArea)
{
	min_blob = bMinArea;
	max_blob = bMaxArea;
}

void BloberClass::setBlobResult(CBlobResult blobResult_ex)
{
	blobsResult = blobResult_ex;
}

CBlobResult BloberClass::blobThemAll(IplImage* input_img)
{

	// find blobs in image
	blobsResult = CBlobResult( input_img, NULL, 255 );
	blobsResult.Filter( blobsResult, B_EXCLUDE, CBlobGetArea(), B_LESS, min_blob);
	blobsResult.Filter( blobsResult, B_EXCLUDE, CBlobGetArea(), B_GREATER, max_blob);
	
	return blobsResult;
}

void BloberClass::showThemAll(IplImage* output_img)
{

	for (int i = 0; i < blobsResult.GetNumBlobs(); i++ )
	{
		myBlob = blobsResult.GetBlob(i);
		myBlob->FillBlob( output_img, CV_RGB(255,230,0));
	}

	CBlob blobWithMinArea;
	CBlob blobWithMaxArea;

	blobsResult.GetNthBlob( CBlobGetArea(), 0, blobWithMaxArea );
	blobsResult.GetNthBlob( CBlobGetArea(), blobsResult.GetNumBlobs() - 1, blobWithMinArea );
	
	blobWithMaxArea.FillBlob( output_img, CV_RGB( 255, 0, 0 ));
	blobWithMinArea.FillBlob( output_img, CV_RGB( 50, 150, 255 ));
}


void BloberClass::textThemAll(IplImage* output_img)
{
	CvFont* font = new CvFont();
	cvInitFont( font, CV_FONT_HERSHEY_PLAIN, 0.6, 0.6, 0, 1, 8 );
	CvFont* fontB = new CvFont();
	cvInitFont( fontB, CV_FONT_HERSHEY_PLAIN, 1, 1, 0, 1, 8 );

	char area_buf[10];
	char elong_buf[10];
	char breadth_buf[10];
	char minorAxe_buf[10];
	char lenght_buf[10];
	char id_buf[10];
	char scale_buf[10];

	for (int i = 0; i < blobsResult.GetNumBlobs(); i++ )
	{
		myBlob = blobsResult.GetBlob(i);

		double area = myBScaler->px2ToReal(myBlob->Area());
		double elong = myBScaler->pxToReal(get_elongation(*myBlob));
		double minorAxe = myBScaler->pxToReal(get_minor_axe(*myBlob));
		double breadth = myBScaler->pxToReal(get_breadth(*myBlob));
		double lenght = myBScaler->pxToReal(get_length(*myBlob));
		int idb = myBlob->GetID(); 

		_gcvt( area,4, area_buf);
		_gcvt( elong, 4, elong_buf);
		_gcvt( breadth, 4, breadth_buf);
		_gcvt( lenght, 4, lenght_buf);
		_gcvt( minorAxe, 4, minorAxe_buf);
		_gcvt( idb, 5, id_buf);

		_gcvt( myBScaler->getScale(), 5, scale_buf);

		cvPutText( output_img, ("A:" + string(area_buf)).c_str(), cvPoint(myBlob->MaxX()+4,myBlob->MinY()), font, cvScalar(220,220,0) );
		cvPutText( output_img, ("EL:" + string(elong_buf)).c_str(), cvPoint(myBlob->MaxX()+4,myBlob->MinY()+7), font, cvScalar(220,0,0) );
		cvPutText( output_img, ("B:" + string(breadth_buf)).c_str(), cvPoint(myBlob->MaxX()+4,myBlob->MinY()+14), font, cvScalar(220,0,220) );
		cvPutText( output_img, ("L:" + string(lenght_buf)).c_str(), cvPoint(myBlob->MaxX()+4,myBlob->MinY()+21), font, cvScalar(0,0,220) );
		cvPutText( output_img, ("MA:" + string(minorAxe_buf)).c_str(), cvPoint(myBlob->MaxX()+4,myBlob->MinY()+28), font, cvScalar(0,220,220) );
		cvPutText( output_img, id_buf, cvPoint(myBlob->MaxX()+4,myBlob->MinY()-7), font, cvScalar(0,0,0) );
		cvPutText( output_img, scale_buf, cvPoint(10,10), fontB, cvScalar(130,255,130) );
	}

	CBlob blobWithMinArea;
	CBlob blobWithMaxArea;

	blobsResult.GetNthBlob( CBlobGetArea(), 0, blobWithMaxArea );
	blobsResult.GetNthBlob( CBlobGetArea(), blobsResult.GetNumBlobs() - 1, blobWithMinArea );

	blobWithMaxArea.FillBlob( output_img, CV_RGB( 255, 0, 0 ));
	blobWithMinArea.FillBlob( output_img, CV_RGB( 50, 150, 255 ));

	delete font;
}

CBlobResult BloberClass::getBlobResult()
{
	return blobsResult;
}



BloberClass::~BloberClass(void)
{
	cvDestroyAllWindows();
}
