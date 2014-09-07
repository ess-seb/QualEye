#pragma once

#include "BloberClass.h"

#include "StdAfx.h"
#include <string>

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

using std::string;

class gfxProcessor
{
public:
	gfxProcessor(BloberClass* bcobj, MScale* myPScaler_ex);
	virtual ~gfxProcessor(void);
	static void makeAdjustIS(int xxxo);
	void setupImage(IplImage* ex_imgSource);
	void addText(IplImage* imgIn, string txt);
	
	void showPreFiltering(IplImage* imgToPre);
	IplImage* makePreFiltering(IplImage* img_ex);
	
	void setFilterResizer_size(double percent_ex);
	void setFilterResizer_enabled(bool enabled_ex);
	void setFilterHistogramEqual_enabled(bool enabled_ex);

	void setupGroupFinder(IplImage* ex_imgSource);

	void prepareImage(IplImage* srcImg, IplImage* outImg);
	CBlobResult rejecktGroups(CBlobResult blobresult_ex, IplImage* img);

	double getBMinAreaPx();
	double getBMaxAreaPx();

private:
	void filterEqualHistogram(IplImage* img_ext);
	IplImage*  filterResizer(IplImage* img_ex, double percent_ex);
	static void makeAdjustGroup(int xxxo);
	

};
