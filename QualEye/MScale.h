#pragma once
#include <stdio.h>
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <string>

using std::string;

class MScale
{

	private: static double scale, len, line_l;
	private: CvCapture* cap_s;
	private: IplImage* frame_s;
	private: static int x1, x2, y1, y2, counter;

	public: MScale(void);

	public: void startManualMeasuring(double l, string unit_ex, IplImage* ext_image);
	private: static void mouse(int event, int x, int y, int flags, void* p);
	public:		
				
				double getScale(void);
				string getUnit(void);
				double getPixels(void);

				 double pxToReal(double pxs);
				 double realToPx(double rel);
				 double px2ToReal(double pxs);
				 double real2ToPx(double rel);

				 void setManualScale(double scale_ex, string unit_ex);
				 

};


