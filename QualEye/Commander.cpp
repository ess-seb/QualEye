#include "StdAfx.h"
#include "Commander.h"
#include "DBClass.h"
#include "PhotoDevice.h"
#include <Windows.h>
#include "AdjusterClass.h"
#include "MScale.h"

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>



using std::string;


Commander::Commander()
{

	myDB = new DBClass;
	myScaler = new MScale;
	myBlober = new BloberClass(10,1000,myScaler);
	

	myGfxProcessor = new gfxProcessor(myBlober, myScaler);
	myFGetter = new FilesGetterClass(myGfxProcessor);
		
	PhotoDevice* PD = new PhotoDevice();
	if (PD->test(false)) //dll
	{
		//MessageBox(NULL,"Oh yes!", NULL, NULL);
	}

	

	//myBlober = new BloberClass(myFGetter->GetImage());
}


//	######################
//	##                  ##
//	##   Misc func.     ##
//	##                  ##
//	######################

bool Commander::sysstrToNstr( String^ source, string &target )  //string converter
{
	pin_ptr<const wchar_t> wch = PtrToStringChars( source );
	int len = (( source->Length+1) * 2);
	char *ch = new char[ len ];
	bool result = wcstombs( ch, wch, len ) != -1;
	target = ch;
	delete ch;
	return result;
}

string Commander::getScale()
{
	char scale_buf[10];
	return _gcvt( myScaler->getScale(), 5, scale_buf);
}

string Commander::getPixels()
{
	char pixels_buf[10];
	return _gcvt( myScaler->getPixels(), 5, pixels_buf);
}

string Commander::getUnit()
{
	return myScaler->getUnit();
}

void Commander::setFolder(String^ folder_ex)
{
	string nSfolder;
	sysstrToNstr(folder_ex, nSfolder);
	myFGetter->setFolderPath(nSfolder);
}

void Commander::setFile(String^ file_ex)
{
	string nSfile;
	sysstrToNstr(file_ex, nSfile);
	myFGetter->setFilePath(nSfile);
}

string Commander::getFolderPath()
{
	return myFGetter->getFolderPath();
}

string Commander::getFilePath()
{
	return myFGetter->getFilePath();
}

void Commander::setSource(int source_ex)
{
	myFGetter->setSource(source_ex);
}

bool Commander::connectWebcam()
{
	myFGetter->connectWebcam(0);
	return true;
}

array<String^>^ Commander::refreshFolder()
{
	return myFGetter->refreshFolder();
}


//	######################
//	##                  ##
//	##   Image func.    ##
//	##                  ##
//	######################

void Commander::showFiltersPreview()
{
	myGfxProcessor->showPreFiltering(myFGetter->GetImage());
}
void Commander::setFilterHistogramEqual(bool enabled_ex)
{
	myGfxProcessor->setFilterHistogramEqual_enabled(enabled_ex);
}

void Commander::setSizerEnabled(bool enabled_ex)
{
	myGfxProcessor->setFilterResizer_enabled(enabled_ex);
}

void Commander::configSizer(String^ percent_ex)
{
	string nStrPec;
	sysstrToNstr(percent_ex, nStrPec);
	double percent_size = atof(nStrPec.c_str());
	myGfxProcessor->setFilterResizer_size(percent_size);
}

void Commander::setScaleByManualMeasuring(String^ realDi, String^ unitS )
{
	string unit;
	string nStrRdi;
	sysstrToNstr(realDi, nStrRdi);
	sysstrToNstr(unitS, unit);
	double rdi = atof(nStrRdi.c_str());
	myScaler->startManualMeasuring(rdi, unit, myFGetter->GetImage());
}

void Commander::setManualScale(String^ scaleSS, String^ unitSS )
{
	string unit;
	string nStrScl;
	sysstrToNstr(scaleSS, nStrScl);
	sysstrToNstr(unitSS, unit);
	double scl = atof(nStrScl.c_str());
	myScaler->setManualScale(scl, unit);
}

void Commander::setupImage(void)
{
	myGfxProcessor->setupImage(myFGetter->GetImage());
}

void Commander::setupGroupFinder(void)
{
	myGfxProcessor->setupGroupFinder(myFGetter->GetImage());
}


void Commander::makeSingleProbe()
{

	int c=0;
	CBlobResult blobResultToDB;
	cvNamedWindow("Preview", CV_WINDOW_AUTOSIZE);

	IplImage* imgSource = myFGetter->GetImage();
	
	IplImage* imgSrcTxt = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,3);
	IplImage* imgOutput = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U,3);
	IplImage* imgForBlober = cvCreateImage(cvGetSize(imgSource), IPL_DEPTH_8U, 1);

	myGfxProcessor->prepareImage(imgSource,imgForBlober);

	myBlober->blobThemAll(imgForBlober);

	CBlobResult tmpBlobResult = myBlober->getBlobResult();
	blobResultToDB = myGfxProcessor->rejecktGroups(tmpBlobResult, imgForBlober);

	myBlober->setBlobResult(blobResultToDB);
	myBlober->showThemAll(imgSource);
	myBlober->textThemAll(imgSource);

	myGfxProcessor->addText(imgSource, "Press Esc to close preview window");
	cvShowImage( "Preview", imgSource);


	while(true)
	{
		

		c = cvWaitKey(500);
		if( c == 27 ) break;

	}

	cvReleaseImage(&imgForBlober);
	cvReleaseImage(&imgSource);

	cvDestroyAllWindows();
}







//	######################
//	##                  ##
//	##   DB func.       ##
//	##                  ##
//	######################

bool Commander::connectDB(String^ server, String^ user, String^ pass)
{
	string server_ns;
	string user_ns;
	string pass_ns;

	sysstrToNstr( server, server_ns );
	sysstrToNstr( user, user_ns );
	sysstrToNstr( pass, pass_ns );
	
	if (myDB->connectMySql(server_ns, user_ns, pass_ns))
	{
		if (myDB->setDB("qualeye_no_1"))
		{
			return true;
		}
		else
		{
			if (myDB->createNewDB())
			{
				if (myDB->setDB("qualeye_no_1"))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	
}


bool Commander::disconnectDB()
{
	return myDB->disconnectMySql();
}


bool Commander::startProcess(void)
{
	//myBlober = new BloberClass;

	return true;
}

bool Commander::stopProcess(void)
{
	return true;
}

void setThreshPointer(int* pTh)
{

}


Commander::~Commander(void)
{
	delete myBlober;
	delete myDB;
	delete myFGetter;
	delete myScaler;
}
