#pragma once

#include "DBClass.h"
#include "BloberClass.h"
#include "FilesGetterClass.h"
#include "MScale.h"
#include "FotonClass.h"
#include "AdjusterClass.h"


#include <stdlib.h>
#include <vcclr.h>
#include <string>

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

using namespace System;

class Commander
{
	public:
		BloberClass* myBlober;
		DBClass* myDB;
		FilesGetterClass* myFGetter;
		FotonClass* myFoton;
		gfxProcessor* myGfxProcessor;
		MScale* myScaler;

		Commander(void);

		
		virtual ~Commander(void);
		bool connectDB(String^ server, String^ user, String^ pass);
		bool sysstrToNstr( String^ source, string &target ); /*string converter */
		bool disconnectDB();
		bool startProcess(void);
		bool stopProcess(void);
		void setupImage(void);
		void setScaleByManualMeasuring(String^ realDi, String^ unit);
		void setManualScale(String^ scaleSS, String^ unitSS );
		string getScale();
		string getUnit();
		string getPixels();
		void setFolder(String^ folder_ex);
		void setFile(String^ file_ex);
		string getFolderPath();
		string getFilePath();

		//###### FILTERS
		void showFiltersPreview();

		void setFilterHistogramEqual(bool enabled_ex);
		void configSizer(String^ percent_ex);
		void setSizerEnabled(bool enabled_ex);
		void setSource(int source_ex);
		bool connectWebcam();
		array<String^>^ refreshFolder();
		void setupGroupFinder(void);
		void makeSingleProbe();
};