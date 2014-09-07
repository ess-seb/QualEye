#include "StdAfx.h"


#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <Math.h>
#include <string>
#include <vector>
#include <Windows.h>
#include <vcclr.h>

#include "FilesGetterClass.h"
#include "AdjusterClass.h"



using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace std;
using std::string;

gfxProcessor* myFGgfx;
int active_source = SOURCE_FILE_FOLDER;
CvCapture* myCapture;

int fileNumber = 0;
vector<string> filesVectorList;
bool foldeNthLeft = true;

FilesGetterClass::FilesGetterClass(gfxProcessor* gfx_ex)
{
	myFGgfx = gfx_ex;
}

FilesGetterClass::~FilesGetterClass(void)
{
	
}

IplImage* FilesGetterClass::GetImage(void)
{
	IplImage* mySrcImg;

	switch (active_source)
	{
	case SOURCE_FILE_FOLDER:
		mySrcImg = getImageFromFile();
		break;
	case SOURCE_FOLDER:
		mySrcImg = getImageFromFolder();
		break;
	case SOURCE_CAMERA_D90:
		mySrcImg = getImageFromCamera();
		break;
	case SOURCE_WEBCAM:
		mySrcImg = getImageFromWebcam();
		break;
	}

	return myFGgfx->makePreFiltering(mySrcImg);
	
}

IplImage* FilesGetterClass::getImageFromFile()
{
	IplImage* image;
	image = cvLoadImage(pathFile.c_str());
	return image;
};

IplImage* FilesGetterClass::getImageFromFolder()
{
	IplImage* image;
	if (filesVectorList.size()>0)
	{
		string file_dir = filesVectorList[filesVectorList.size()-1];
		filesVectorList.pop_back();
		image = cvLoadImage(file_dir.c_str());
		fileNumber++;
	}
	else
	{
		foldeNthLeft = true;
	}
	
	return image;
};

IplImage* FilesGetterClass::getImageFromCamera()
{
	IplImage* image;
	image = cvQueryFrame( myCapture );
	return image;
};

IplImage* FilesGetterClass::getImageFromWebcam()
{
	IplImage* image;
	image = cvLoadImage(pathFile.c_str());
	return myFGgfx->makePreFiltering(image);
};

void FilesGetterClass::setSource(int n_source)
{
	active_source = n_source;
}

void FilesGetterClass::connectWebcam(int wc_n)
{
	myCapture = cvCreateCameraCapture(wc_n);
	cvSetCaptureProperty( myCapture, CV_CAP_PROP_FPS, 15);
}

void FilesGetterClass::setFolderPath(string folder_ex)
{
	pathFolder = folder_ex;
}

array<String^>^ FilesGetterClass::refreshFolder()
{
	fileNumber = 0;
	array<String^>^ filesFromFolderS = Directory::GetFiles(gcnew String(pathFolder.c_str()), gcnew String("*.jpg"));
	for(int kk=0; kk<filesFromFolderS->Length; kk++)
	{
		string newEntry;
		sysstrToNstr(filesFromFolderS[kk], newEntry);
		filesVectorList.push_back(newEntry);
	}
	if (filesVectorList.size()>0) foldeNthLeft=false;
	return filesFromFolderS;
}

bool FilesGetterClass::sysstrToNstr( String^ source, string &target )
{
	pin_ptr<const wchar_t> wch = PtrToStringChars( source );
	int len = (( source->Length+1) * 2);
	char *ch = new char[ len ];
	bool result = wcstombs( ch, wch, len ) != -1;
	target = ch;
	delete ch;
	return result;
}

void FilesGetterClass::setFilePath(string file_ex)
{
	pathFile = file_ex;
}

string FilesGetterClass::getFolderPath()
{
	return pathFolder;
}

string FilesGetterClass::getFilePath()
{
	return pathFile;
}