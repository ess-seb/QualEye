#include "StdAfx.h"
#include "ProbeClass.h"

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <Math.h>


#include <blob.h>
#include <BlobResult.h>
//#include <BlobExtraction.h>
#include <BlobLibraryConfiguration.h>
#include <string>

using std::string;

	


ProbeClass::ProbeClass(CBlobResult blobs, int probe_no, string image_file)
{
	this->blobs = blobs;
	this->probe_no = probe_no;
	this->image_file = image_file;
}

ProbeClass::~ProbeClass(void)
{
}
