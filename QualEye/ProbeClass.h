#pragma once

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <Math.h>


#include <blob.h>
#include <BlobResult.h>
//#include <BlobExtraction.h>
#include <BlobLibraryConfiguration.h>
#include <string>


class ProbeClass
{
public:
	CBlobResult blobs;
	int probe_no;
	std::string image_file;

	ProbeClass(CBlobResult blobs, int probe_no, std::string image_file);
	virtual ~ProbeClass(void);



};
