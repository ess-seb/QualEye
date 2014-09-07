#pragma once

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>


#include <blob.h>
#include <BlobResult.h>
#include "MScale.h"

//#include <BlobExtraction.h>
//#include <BlobLibraryConfiguration.h>

class BloberClass
{
	public:

		BloberClass(double bMinArea, double bMaxArea, MScale* myBScaler);
		~BloberClass(void);
		
		CBlobResult blobThemAll(IplImage* input_img);
		void configBlober(double bMinArea, double bMaxArea);
		void showThemAll( IplImage* output_img);
		CBlobResult getBlobResult();

		
		static IplImage* blobuj(IplImage* input_img, CBlobResult blobs);
		void textThemAll( IplImage* output_img);
		void setBlobResult(CBlobResult blobResult_ex);
private: 
		IplImage* image;
		IplImage* image2;
		IplImage* image3;
		IplImage* cam_img;
		IplImage* image2_grey;
		
		IplImage* image2_canny;
		IplImage* image2_m;
		IplImage* image2_grey32;

		CvCapture* cap;
		
};
