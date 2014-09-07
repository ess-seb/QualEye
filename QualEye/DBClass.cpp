#include "StdAfx.h"
#include "DBClass.h"

#include <windows.h>

#include <stdlib.h>
#include <iostream>
#include <string>
	
#include <blob.h>
#include <BlobResult.h>
#include <BlobLibraryConfiguration.h>
#include "MScale.h"

#include "mysql_connection.h"
	
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using std::string;

sql::Driver *driver;
sql::Connection *con;
sql::Statement *stmt;
sql::ResultSet *res;

DBClass::DBClass()
{

}

void DBClass::InsertSth(CBlobResult blobs )
{
	CBlob blob;
	for(int iii=0; iii<blobs.GetNumBlobs(); iii++)
	{
		blob = blobs.GetBlob(iii);
		 res = stmt->executeQuery("INSERT INTO blobs (id_m, roi_x, roi_y, roi_w, roi_h, sf_h, sf_v, pow, len) VALUES ('test test')");
					 
		  while (res->next()) 
		  {

		  }	
	}
}


int DBClass::getLastProbeNum(void)
{
	string str_output;
	stmt = con->createStatement();
	res = stmt->executeQuery("SELECT MAX(id) AS 'maxProbe' FROM probes ");
			 
	res->first();
	str_output = res->getString("maxProbe");
	return (int) str_output.c_str();
			  
}

void DBClass::insertProbe(CBlobResult blobresult_ex, MScale* myScaler_ex, string file_path_ex)
{
	try
	{

		
		CBlobGetMinorAxisLength get_minor_axe;
		CBlobGetMajorAxisLength get_major_axe;
		CBlobGetBreadth get_breadth;
		CBlobGetLength get_length;

		CBlob blob;
		char buf[100];
		
		sql::PreparedStatement* prepStmt;
		
		for(int iii=0; iii<blobresult_ex.GetNumBlobs(); iii++)
		{
			blob = blobresult_ex.GetBlob(iii);

			/*_gcvt(iii, 1, buf);
			string id_m = buf;

			_gcvt(blob.m_boundingBox.x, 1, buf);
			string roi_x = buf;

			_gcvt(blob.m_boundingBox.y, 1, buf);
			string roi_y = buf;

			_gcvt(blob.m_boundingBox.width, 1, buf);
			string roi_w = buf;
			
			_gcvt(blob.m_boundingBox.height, 1, buf);
			string roi_h = buf;

			_gcvt(myScaler_ex->pxToReal(get_length(blob)), 10, buf);
			string len = buf;

			_gcvt(myScaler_ex->pxToReal(get_breadth(blob)), 10, buf);
			string bre = buf;

			_gcvt(myScaler_ex->pxToReal(get_minor_axe(blob)), 10, buf);
			string min_axe = buf;

			_gcvt(myScaler_ex->pxToReal(get_major_axe(blob)), 10, buf);
			string maj_axe = buf;

			_gcvt(myScaler_ex->px2ToReal(blob.Area()), 10, buf);
			string pow = buf;*/

			
			prepStmt = con->prepareStatement("INSERT INTO blobs (id_m, roi_x, roi_y, roi_w, roi_h, min_axe, maj_axe, pow, len, bre) VALUES ('?, ?, ?, ?, ?, ?, ?, ?, ?, ?')");

			prepStmt->setInt(1, iii);
			prepStmt->setInt(2, blob.GetBoundingBox().x);
			prepStmt->setInt(3, blob.GetBoundingBox().y);
			prepStmt->setInt(4, blob.GetBoundingBox().width);
			prepStmt->setInt(5, blob.GetBoundingBox().height);
			prepStmt->setDouble(6, myScaler_ex->pxToReal(get_minor_axe(blob)));
			prepStmt->setDouble(7, myScaler_ex->pxToReal(get_major_axe(blob)));
			prepStmt->setDouble(8, myScaler_ex->pxToReal(blob.Area()));
			prepStmt->setDouble(9, myScaler_ex->pxToReal(get_length(blob)));
			prepStmt->setDouble(10, myScaler_ex->pxToReal(get_breadth(blob)));


			while (res->next()) 
			{

			}	
		}
	}
	catch (sql::SQLException &e) 
	{
		const char* ermsg = e.what();
		MessageBox(NULL,ermsg, NULL, NULL);
	}
	//if (err) MessageBox(NULL,"MySQL DB Connected", NULL, NULL);
	

}

bool DBClass::connectMySql(string server, string user, string pass)
{
	bool err = true;
	try 
	{
		driver = get_driver_instance();
		con = driver->connect(server, user, pass);
	} 
	catch (sql::SQLException &e) 
	{
		err = false;
		const char* ermsg = e.what();
		MessageBox(NULL,ermsg, NULL, NULL);
	}
	//if (err) MessageBox(NULL,"MySQL DB Connected", NULL, NULL);
	return err;
}

bool DBClass::disconnectMySql()
{
	con->close();
	return true;
}

bool DBClass::setDB(string db_name)
{
	bool err = true;
	try
	{
		con->setSchema(db_name);
	}
	catch (sql::SQLException &e) 
	{
		err = false;
		const char* ermsg = e.what();
		MessageBox(NULL,ermsg, NULL, NULL);
	}
	//if (err) MessageBox(NULL,"MySQL DB Connected", NULL, NULL);
	return err;
}


bool DBClass::createNewDB()
{
	bool err = true;
	try
	{
		stmt = con->createStatement();

		stmt->execute("CREATE DATABASE `qualeye_no_1`");

		stmt->execute("CREATE TABLE `qualeye_no_1`.`probs` (`id_pp` mediumint(9) NOT NULL AUTO_INCREMENT,`file_path` text,`date` datetime NOT NULL,`scale_ratio` double NOT NULL,PRIMARY KEY (`id_pp`)) ENGINE=InnoDB DEFAULT CHARSET=latin1");

		stmt->execute("CREATE TABLE `qualeye_no_1`.`blobs` (`id_b` mediumint(9) NOT NULL AUTO_INCREMENT,`id_p` mediumint(9) NOT NULL,`roi_x` double NOT NULL,`roi_y` double NOT NULL,`roi_w` double NOT NULL,`roi_h` double NOT NULL,`sf_h` double NOT NULL,`sf_v` double NOT NULL,`area` double NOT NULL,`len` double NOT NULL,PRIMARY KEY (`id_b`),KEY `probs_vs_blobs` (`id_p`),CONSTRAINT `probs_vs_blobs` FOREIGN KEY (`id_p`) REFERENCES `probs` (`id_pp`) ON DELETE NO ACTION ON UPDATE NO ACTION) ENGINE=InnoDB DEFAULT CHARSET=latin1");

	}
	catch (sql::SQLException &e) 
	{
		err = false;
		const char* ermsg = e.what();
		MessageBox(NULL,ermsg, NULL, NULL);
	}
	//if (err) MessageBox(NULL,"MySQL DB Connected", NULL, NULL);
	return err;
}


DBClass::~DBClass(void)
{
	delete res;
	delete stmt;
	delete con;
}
	