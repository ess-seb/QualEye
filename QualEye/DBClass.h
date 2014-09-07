#pragma once

#include <string>
	
#include <blob.h>
#include <BlobResult.h>
#include <BlobLibraryConfiguration.h>

#include "MScale.h"

using std::string;

class DBClass
{
	public:
		DBClass();
		void DBClass::InsertSth(CBlobResult blobs);
		int DBClass::getLastProbeNum(void);
		//************************************
		// Method:    connectDB
		// FullName:  DBClass::connectDB
		// Access:    public 
		// Returns:   bool
		// Qualifier:
		// Parameter: string server
		// Parameter: string user
		// Parameter: string pass
		//************************************
		bool DBClass::connectMySql(string server, string user, string pass);
		virtual ~DBClass(void);
		bool DBClass::setDB(string db_name);
		bool DBClass::createNewDB();
		bool DBClass::disconnectMySql();
		void insertProbe(CBlobResult blobresult_ex, MScale* myScaler_ex, string file_path_ex);

};
