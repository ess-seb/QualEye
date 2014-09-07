#include "StdAfx.h"
#include "MScale.h"
#include <string>
#include <stdio.h>
#include <math.h>
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

using std::string;


int MScale::x1, MScale::x2, MScale::y1, MScale::y2, MScale::counter;
double MScale::len, MScale::scale, MScale::line_l;

string unit;

MScale::MScale(void)
{
	scale = 1;
	unit = "px";
	len = 0;
}

double MScale::getScale(void)
{
	return scale;
}

double MScale::getPixels(void)
{
	return line_l;
}


string MScale::getUnit(void)
{
	return unit;
}

double MScale::pxToReal(double pxs)
{
	return pxs/scale;
}

double MScale::realToPx(double rel)
{
	return rel*scale;
}

double MScale::px2ToReal(double pxs)
{
	return pxs/(scale*scale);
}

double MScale::real2ToPx(double rel)
{
	return rel*(scale*scale);
}

void MScale::mouse(int e, int x, int y, int flags, void* p)
 {
	x2=x;
	y2=y;
	if (e==1)
	{
		counter++;
		if (counter==1)
		{
			x1=x;
			y1=y;
		}
		else if (counter==2)
		{
			double odc = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
			line_l = sqrt( odc );
			scale = line_l / len;
		}

	}
 }


void MScale::setManualScale(double scale_ex, string unit_ex)
{
	unit = unit_ex;
	scale = scale_ex;
}

void MScale::startManualMeasuring(double l, string unit_ex, IplImage* ext_image)
		{
			len = l;
			counter = 0;
			scale = 0;
			unit = unit_ex;

			CvFont* font = new CvFont();
			cvInitFont( font, CV_FONT_HERSHEY_PLAIN, 1, 1, 0, 1, 8 );

				frame_s = ext_image;
				
				IplImage* frame_tmp;

				cvNamedWindow("Manual Scale", 0);
				cvResizeWindow( "Manual Scale", frame_s->width, frame_s->height);
				frame_tmp = cvCloneImage(frame_s);
				//cvFlip( frame_s, frame_s, 0);
				
				double odl_txt;
				double line_ltmp;
				string text;
				string text_sq;

				char buff[10];

				int decims, signs;

				cvSetMouseCallback("Manual Scale", MScale::mouse);

				while (scale == 0)
				{
					text = "Mark: ";

					text +=  _gcvt( len, 4, buff );
					text += unit;
					text += " on the image.";




					//cvFlip( frame_s, frame_s, 0);
					cvPutText( frame_s, text.c_str() , cvPoint(10,20), font, cvScalar(130,130,0) );

					if (counter == 1)
					{
						frame_s = cvCloneImage(frame_tmp);
						cvLine( frame_s, cvPoint(x2,y2), cvPoint(x1, y1), cvScalar(255,255,0), 1,8,0 );
						odl_txt = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
						line_ltmp = sqrt(odl_txt);
						
						text = "Skala: ";

						text +=  _gcvt( len, 4, buff );
						text += unit;
						text += " = ";
						text += _gcvt( line_ltmp, 4, buff ); 
						text += "px";




						//cvFlip( frame_s, frame_s, 0);
						cvPutText( frame_s, text.c_str() , cvPoint(10,20), font, cvScalar(130,130,0) );
						
					}
					
					cvShowImage("Manual Scale", frame_s);
					cvWaitKey(30);
				}

				cvDestroyAllWindows();
				counter = 0;
			
		}




