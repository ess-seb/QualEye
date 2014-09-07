#pragma once

#include "DBClass.h"
#include "BloberClass.h"
#include "AdjusterClass.h"
#include <string>
#include <vector>

using namespace System;


#define SOURCE_FILE_FOLDER 0
#define SOURCE_FOLDER 1
#define SOURCE_WEBCAM 2
#define SOURCE_CAMERA_D90 3

class FilesGetterClass
{
public:


		FilesGetterClass(gfxProcessor* gfx_ex);
		virtual ~FilesGetterClass(void);

		IplImage* GetImage(void);	
		void setFolderPath(string folder_ex);
		void setFilePath(string file_ex);
		string getFolderPath();
		string getFilePath();
		void setSource(int n_source);
		IplImage* getImageFromFile();
		IplImage* getImageFromFolder();
		IplImage* getImageFromCamera();
		IplImage* getImageFromWebcam();
		array<String^>^ refreshFolder();
		bool sysstrToNstr( System::String^ source, string &target ) /*string converter */;
		void connectWebcam(int wc_n);
private: 
		IplImage* image;
		string pathFolder;
		string pathFile;
};