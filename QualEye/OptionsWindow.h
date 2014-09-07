#pragma once

#include <string>
#include <iostream>
#include "Commander.h"
#include "FilesGetterClass.h"

namespace QualEye {



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using std::string;

using namespace Runtime::InteropServices;


	/// <summary>
	/// Summary for OptionsWindow
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class OptionsWindow : public System::Windows::Forms::Form
	{
		
	public: Commander* spock;
	private: bool sourceCam;
			 bool sourceSF;
			 bool sourceWeb;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::ListBox^  filesList;

	private: System::Windows::Forms::Button^  button6;

			 bool sourceFolder;

	public:	OptionsWindow(Commander* com)
		{
			InitializeComponent();
			spock = com;
			spock->setFolder(folderBrowserDialog->SelectedPath);
			spock->setFile(openFileDialog->FileName);
			
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OptionsWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^  tabsOptions;
	private: System::Windows::Forms::TabPage^  tabScale;



	private: System::Windows::Forms::TabPage^  tabDB;
	private: System::Windows::Forms::TextBox^  textBoxHost;




	private: System::Windows::Forms::TextBox^  textBoxUser;

	private: System::Windows::Forms::MaskedTextBox^  textBoxPass;


	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label_dbstatus;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::TabPage^  tabBlobs;

	private: System::Windows::Forms::NumericUpDown^  maxBlobABoxThresh;
	private: System::Windows::Forms::NumericUpDown^  minBlobABoxThresh;






	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::TextBox^  realTextBox;




	private: System::Windows::Forms::Label^  label10;




	private: System::Windows::Forms::Button^  setScaleButton;
	public: System::Windows::Forms::TextBox^  unitTextBox;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  labbb;
	private: System::Windows::Forms::TextBox^  unitTextBox2;
	private: System::Windows::Forms::TextBox^  SRtextBox;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  buttonApplyManualScale;

	private: System::Windows::Forms::TabPage^  tabImage;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  filterHistogramEqualCHBox;


	private: System::Windows::Forms::GroupBox^  Status;
	private: System::Windows::Forms::Label^  unitLabel;

	private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  scaleRatioLabel;

	private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TabPage^  tabProbbing;

private: System::Windows::Forms::Label^  vsdLabel;







private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label16;


private: System::Windows::Forms::Button^  openFolderButton;












private: System::Windows::Forms::Label^  folderPathLabel;
private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog;




private: System::Windows::Forms::TabControl^  tabControl1;
private: System::Windows::Forms::TabPage^  tabPage2;

private: System::Windows::Forms::Button^  startSingleButton;
private: System::Windows::Forms::Label^  filePathLabel;

private: System::Windows::Forms::Button^  openFileButton;
private: System::Windows::Forms::TabPage^  tabPage1;




private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Label^  label18;


private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label19;






private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::GroupBox^  groupBox14;

private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::GroupBox^  groupBox15;
private: System::Windows::Forms::TabPage^  tabDataSource;
private: System::Windows::Forms::ImageList^  imageList1;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Button^  connectCameraButton;






private: System::Windows::Forms::GroupBox^  groupBox16;
private: System::Windows::Forms::RadioButton^  srcWEBcbox_s_probing;

private: System::Windows::Forms::RadioButton^  srcCAMcbox_s_probing;

private: System::Windows::Forms::RadioButton^  srcSFcbox_s_probing;



private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::GroupBox^  groupBox17;
private: System::Windows::Forms::RadioButton^  srcWEBcbox_c_probing;

private: System::Windows::Forms::RadioButton^  srcCAMcbox_c_probing;

private: System::Windows::Forms::RadioButton^  srcFOLDERcbox_c_probing;

private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::GroupBox^  groupBox18;
private: System::Windows::Forms::RadioButton^  srcWEBcbox_scale;

private: System::Windows::Forms::RadioButton^  srcCAMcbox_scale;

private: System::Windows::Forms::RadioButton^  srcSFcbox_scale;

private: System::Windows::Forms::CheckBox^  sizeCheckBox;


private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::GroupBox^  groupBox19;
private: System::Windows::Forms::RadioButton^  srcWEBcbox_blobs;

private: System::Windows::Forms::RadioButton^  srcCAMcbox_blobs;



private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton3;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::GroupBox^  groupBox20;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::GroupBox^  groupResize;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  sizeLabel;
private: System::Windows::Forms::TextBox^  sizeBox;


private: System::Windows::Forms::GroupBox^  groupBox21;
private: System::Windows::Forms::Button^  showFiltersPreview;
private: System::Windows::Forms::GroupBox^  groupBox22;
private: System::Windows::Forms::RadioButton^  srcWEBcbox_image;

private: System::Windows::Forms::RadioButton^  srcCAMcbox_image;

private: System::Windows::Forms::RadioButton^  srcSFcbox_image;

private: System::Windows::Forms::GroupBox^  groupBox23;
private: System::Windows::Forms::RadioButton^  srcSFcbox_blobs;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::CheckBox^  checkBox1;




	private: System::ComponentModel::IContainer^  components;
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionsWindow::typeid));
			this->vsdLabel = (gcnew System::Windows::Forms::Label());
			this->tabsOptions = (gcnew System::Windows::Forms::TabControl());
			this->tabDataSource = (gcnew System::Windows::Forms::TabPage());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->connectCameraButton = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->openFileButton = (gcnew System::Windows::Forms::Button());
			this->filePathLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->filesList = (gcnew System::Windows::Forms::ListBox());
			this->openFolderButton = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->folderPathLabel = (gcnew System::Windows::Forms::Label());
			this->tabDB = (gcnew System::Windows::Forms::TabPage());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_dbstatus = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxUser = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxHost = (gcnew System::Windows::Forms::TextBox());
			this->tabImage = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox22 = (gcnew System::Windows::Forms::GroupBox());
			this->srcWEBcbox_image = (gcnew System::Windows::Forms::RadioButton());
			this->srcCAMcbox_image = (gcnew System::Windows::Forms::RadioButton());
			this->srcSFcbox_image = (gcnew System::Windows::Forms::RadioButton());
			this->showFiltersPreview = (gcnew System::Windows::Forms::Button());
			this->groupBox21 = (gcnew System::Windows::Forms::GroupBox());
			this->filterHistogramEqualCHBox = (gcnew System::Windows::Forms::CheckBox());
			this->groupResize = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->sizeLabel = (gcnew System::Windows::Forms::Label());
			this->sizeBox = (gcnew System::Windows::Forms::TextBox());
			this->sizeCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->tabScale = (gcnew System::Windows::Forms::TabPage());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->srcWEBcbox_scale = (gcnew System::Windows::Forms::RadioButton());
			this->srcCAMcbox_scale = (gcnew System::Windows::Forms::RadioButton());
			this->srcSFcbox_scale = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->Status = (gcnew System::Windows::Forms::GroupBox());
			this->unitLabel = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->scaleRatioLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->SRtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonApplyManualScale = (gcnew System::Windows::Forms::Button());
			this->labbb = (gcnew System::Windows::Forms::Label());
			this->unitTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->unitTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->realTextBox = (gcnew System::Windows::Forms::TextBox());
			this->setScaleButton = (gcnew System::Windows::Forms::Button());
			this->tabBlobs = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox20 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maxBlobABoxThresh = (gcnew System::Windows::Forms::NumericUpDown());
			this->minBlobABoxThresh = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
			this->srcWEBcbox_blobs = (gcnew System::Windows::Forms::RadioButton());
			this->srcCAMcbox_blobs = (gcnew System::Windows::Forms::RadioButton());
			this->srcSFcbox_blobs = (gcnew System::Windows::Forms::RadioButton());
			this->tabProbbing = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox23 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->startSingleButton = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->srcWEBcbox_s_probing = (gcnew System::Windows::Forms::RadioButton());
			this->srcCAMcbox_s_probing = (gcnew System::Windows::Forms::RadioButton());
			this->srcSFcbox_s_probing = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->srcWEBcbox_c_probing = (gcnew System::Windows::Forms::RadioButton());
			this->srcCAMcbox_c_probing = (gcnew System::Windows::Forms::RadioButton());
			this->srcFOLDERcbox_c_probing = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->tabsOptions->SuspendLayout();
			this->tabDataSource->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->tabDB->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabImage->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox22->SuspendLayout();
			this->groupBox21->SuspendLayout();
			this->groupResize->SuspendLayout();
			this->tabScale->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->Status->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabBlobs->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox20->SuspendLayout();
			this->groupBox15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->maxBlobABoxThresh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->minBlobABoxThresh))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->groupBox19->SuspendLayout();
			this->tabProbbing->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// vsdLabel
			// 
			this->vsdLabel->AutoSize = true;
			this->vsdLabel->Location = System::Drawing::Point(9, 82);
			this->vsdLabel->Name = L"vsdLabel";
			this->vsdLabel->Size = System::Drawing::Size(14, 13);
			this->vsdLabel->TabIndex = 8;
			this->vsdLabel->Text = L"#";
			// 
			// tabsOptions
			// 
			this->tabsOptions->Controls->Add(this->tabDataSource);
			this->tabsOptions->Controls->Add(this->tabDB);
			this->tabsOptions->Controls->Add(this->tabImage);
			this->tabsOptions->Controls->Add(this->tabScale);
			this->tabsOptions->Controls->Add(this->tabBlobs);
			this->tabsOptions->Controls->Add(this->tabProbbing);
			this->tabsOptions->ImageList = this->imageList1;
			this->tabsOptions->Location = System::Drawing::Point(12, 12);
			this->tabsOptions->Name = L"tabsOptions";
			this->tabsOptions->SelectedIndex = 0;
			this->tabsOptions->Size = System::Drawing::Size(571, 381);
			this->tabsOptions->TabIndex = 1;
			// 
			// tabDataSource
			// 
			this->tabDataSource->BackColor = System::Drawing::Color::Transparent;
			this->tabDataSource->Controls->Add(this->groupBox13);
			this->tabDataSource->Controls->Add(this->groupBox6);
			this->tabDataSource->Controls->Add(this->groupBox7);
			this->tabDataSource->Controls->Add(this->groupBox12);
			this->tabDataSource->ImageKey = L"source";
			this->tabDataSource->Location = System::Drawing::Point(4, 23);
			this->tabDataSource->Name = L"tabDataSource";
			this->tabDataSource->Size = System::Drawing::Size(563, 354);
			this->tabDataSource->TabIndex = 5;
			this->tabDataSource->Text = L"Source";
			this->tabDataSource->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->label20);
			this->groupBox13->Controls->Add(this->label21);
			this->groupBox13->Controls->Add(this->connectCameraButton);
			this->groupBox13->Location = System::Drawing::Point(16, 18);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(266, 98);
			this->groupBox13->TabIndex = 10;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Webcam / Camcorder";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(55, 64);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(92, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"DISCONNECTED";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(17, 64);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 13);
			this->label21->TabIndex = 8;
			this->label21->Text = L"Status:";
			// 
			// connectCameraButton
			// 
			this->connectCameraButton->ImageKey = L"webcam";
			this->connectCameraButton->ImageList = this->imageList1;
			this->connectCameraButton->Location = System::Drawing::Point(17, 19);
			this->connectCameraButton->Name = L"connectCameraButton";
			this->connectCameraButton->Size = System::Drawing::Size(130, 35);
			this->connectCameraButton->TabIndex = 0;
			this->connectCameraButton->Text = L"Connect";
			this->connectCameraButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->connectCameraButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->connectCameraButton->UseVisualStyleBackColor = true;
			this->connectCameraButton->Click += gcnew System::EventHandler(this, &OptionsWindow::connectWebcamButton_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"source");
			this->imageList1->Images->SetKeyName(1, L"database");
			this->imageList1->Images->SetKeyName(2, L"scale");
			this->imageList1->Images->SetKeyName(3, L"image");
			this->imageList1->Images->SetKeyName(4, L"probbing");
			this->imageList1->Images->SetKeyName(5, L"singleMode");
			this->imageList1->Images->SetKeyName(6, L"contMode");
			this->imageList1->Images->SetKeyName(7, L"webcam");
			this->imageList1->Images->SetKeyName(8, L"webcamDis");
			this->imageList1->Images->SetKeyName(9, L"camera");
			this->imageList1->Images->SetKeyName(10, L"cameraDis");
			this->imageList1->Images->SetKeyName(11, L"folder");
			this->imageList1->Images->SetKeyName(12, L"databaseConnect");
			this->imageList1->Images->SetKeyName(13, L"disconnect");
			this->imageList1->Images->SetKeyName(14, L"file");
			this->imageList1->Images->SetKeyName(15, L"ok");
			this->imageList1->Images->SetKeyName(16, L"cross");
			this->imageList1->Images->SetKeyName(17, L"connect");
			this->imageList1->Images->SetKeyName(18, L"calibrate");
			this->imageList1->Images->SetKeyName(19, L"disk");
			this->imageList1->Images->SetKeyName(20, L"imageEdit");
			this->imageList1->Images->SetKeyName(21, L"applicationEdit");
			this->imageList1->Images->SetKeyName(22, L"accept");
			this->imageList1->Images->SetKeyName(23, L"delete");
			this->imageList1->Images->SetKeyName(24, L"blobEdit");
			this->imageList1->Images->SetKeyName(25, L"blob");
			this->imageList1->Images->SetKeyName(26, L"gear");
			this->imageList1->Images->SetKeyName(27, L"gearGo");
			this->imageList1->Images->SetKeyName(28, L"GearStop");
			this->imageList1->Images->SetKeyName(29, L"gearSingle");
			this->imageList1->Images->SetKeyName(30, L"auto");
			this->imageList1->Images->SetKeyName(31, L"clock");
			this->imageList1->Images->SetKeyName(32, L"images");
			this->imageList1->Images->SetKeyName(33, L"size");
			this->imageList1->Images->SetKeyName(34, L"files");
			this->imageList1->Images->SetKeyName(35, L"exploreFolder");
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->openFileButton);
			this->groupBox6->Controls->Add(this->filePathLabel);
			this->groupBox6->Location = System::Drawing::Point(292, 18);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(254, 98);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Single file";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"File:";
			// 
			// openFileButton
			// 
			this->openFileButton->ImageKey = L"file";
			this->openFileButton->ImageList = this->imageList1;
			this->openFileButton->Location = System::Drawing::Point(15, 19);
			this->openFileButton->Name = L"openFileButton";
			this->openFileButton->Size = System::Drawing::Size(132, 35);
			this->openFileButton->TabIndex = 0;
			this->openFileButton->Text = L"Open image";
			this->openFileButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->openFileButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->openFileButton->UseVisualStyleBackColor = true;
			this->openFileButton->Click += gcnew System::EventHandler(this, &OptionsWindow::openFileButton_Click);
			// 
			// filePathLabel
			// 
			this->filePathLabel->AutoSize = true;
			this->filePathLabel->Location = System::Drawing::Point(44, 65);
			this->filePathLabel->Name = L"filePathLabel";
			this->filePathLabel->Size = System::Drawing::Size(54, 13);
			this->filePathLabel->TabIndex = 4;
			this->filePathLabel->Text = L"File Name";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->button3);
			this->groupBox7->Location = System::Drawing::Point(16, 122);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(266, 98);
			this->groupBox7->TabIndex = 9;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Camera";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(55, 64);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(92, 13);
			this->label18->TabIndex = 9;
			this->label18->Text = L"DISCONNECTED";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(17, 64);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 13);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Status:";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->ImageKey = L"camera";
			this->button3->ImageList = this->imageList1;
			this->button3->Location = System::Drawing::Point(17, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 35);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Connect";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->button6);
			this->groupBox12->Controls->Add(this->label28);
			this->groupBox12->Controls->Add(this->filesList);
			this->groupBox12->Controls->Add(this->openFolderButton);
			this->groupBox12->Controls->Add(this->label19);
			this->groupBox12->Controls->Add(this->folderPathLabel);
			this->groupBox12->Location = System::Drawing::Point(292, 122);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(254, 221);
			this->groupBox12->TabIndex = 6;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Folder";
			// 
			// button6
			// 
			this->button6->ImageKey = L"contMode";
			this->button6->ImageList = this->imageList1;
			this->button6->Location = System::Drawing::Point(218, 114);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 23);
			this->button6->TabIndex = 12;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &OptionsWindow::button6_Click_1);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label28->ImageKey = L"files";
			this->label28->ImageList = this->imageList1;
			this->label28->Location = System::Drawing::Point(12, 88);
			this->label28->Name = L"label28";
			this->label28->Padding = System::Windows::Forms::Padding(5);
			this->label28->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label28->Size = System::Drawing::Size(77, 23);
			this->label28->TabIndex = 11;
			this->label28->Text = L"       Files list:";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// filesList
			// 
			this->filesList->FormattingEnabled = true;
			this->filesList->HorizontalScrollbar = true;
			this->filesList->Location = System::Drawing::Point(20, 114);
			this->filesList->Name = L"filesList";
			this->filesList->Size = System::Drawing::Size(192, 95);
			this->filesList->TabIndex = 10;
			// 
			// openFolderButton
			// 
			this->openFolderButton->ImageKey = L"folder";
			this->openFolderButton->ImageList = this->imageList1;
			this->openFolderButton->Location = System::Drawing::Point(15, 19);
			this->openFolderButton->Name = L"openFolderButton";
			this->openFolderButton->Size = System::Drawing::Size(132, 35);
			this->openFolderButton->TabIndex = 5;
			this->openFolderButton->Text = L"Select folder";
			this->openFolderButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->openFolderButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->openFolderButton->UseVisualStyleBackColor = true;
			this->openFolderButton->Click += gcnew System::EventHandler(this, &OptionsWindow::openFolderButton_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 65);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Folder:";
			// 
			// folderPathLabel
			// 
			this->folderPathLabel->AutoSize = true;
			this->folderPathLabel->Location = System::Drawing::Point(62, 65);
			this->folderPathLabel->Name = L"folderPathLabel";
			this->folderPathLabel->Size = System::Drawing::Size(41, 13);
			this->folderPathLabel->TabIndex = 8;
			this->folderPathLabel->Text = L"label11";
			// 
			// tabDB
			// 
			this->tabDB->Controls->Add(this->checkBox5);
			this->tabDB->Controls->Add(this->groupBox1);
			this->tabDB->Controls->Add(this->button2);
			this->tabDB->Controls->Add(this->label4);
			this->tabDB->Controls->Add(this->label3);
			this->tabDB->Controls->Add(this->label2);
			this->tabDB->Controls->Add(this->button1);
			this->tabDB->Controls->Add(this->textBoxUser);
			this->tabDB->Controls->Add(this->textBoxPass);
			this->tabDB->Controls->Add(this->textBoxHost);
			this->tabDB->ImageKey = L"database";
			this->tabDB->Location = System::Drawing::Point(4, 23);
			this->tabDB->Name = L"tabDB";
			this->tabDB->Padding = System::Windows::Forms::Padding(3);
			this->tabDB->Size = System::Drawing::Size(563, 354);
			this->tabDB->TabIndex = 1;
			this->tabDB->Text = L"Database ";
			this->tabDB->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(84, 106);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(133, 17);
			this->checkBox5->TabIndex = 13;
			this->checkBox5->Text = L"Save data in database";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label_dbstatus);
			this->groupBox1->Location = System::Drawing::Point(324, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 98);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Status";
			// 
			// label_dbstatus
			// 
			this->label_dbstatus->AutoSize = true;
			this->label_dbstatus->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label_dbstatus->ForeColor = System::Drawing::Color::Red;
			this->label_dbstatus->Location = System::Drawing::Point(52, 42);
			this->label_dbstatus->Name = L"label_dbstatus";
			this->label_dbstatus->Size = System::Drawing::Size(117, 19);
			this->label_dbstatus->TabIndex = 0;
			this->label_dbstatus->Text = L"DISCONNECTED";
			this->label_dbstatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->ImageKey = L"disconnect";
			this->button2->ImageList = this->imageList1;
			this->button2->Location = System::Drawing::Point(438, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 27);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Disconnect";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OptionsWindow::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"user:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"host:";
			// 
			// button1
			// 
			this->button1->ImageKey = L"databaseConnect";
			this->button1->ImageList = this->imageList1;
			this->button1->Location = System::Drawing::Point(324, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Connect";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OptionsWindow::button1_Click);
			// 
			// textBoxUser
			// 
			this->textBoxUser->Location = System::Drawing::Point(84, 51);
			this->textBoxUser->Name = L"textBoxUser";
			this->textBoxUser->Size = System::Drawing::Size(227, 20);
			this->textBoxUser->TabIndex = 2;
			this->textBoxUser->Text = L"root";
			// 
			// textBoxPass
			// 
			this->textBoxPass->Location = System::Drawing::Point(84, 77);
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(227, 20);
			this->textBoxPass->TabIndex = 1;
			this->textBoxPass->Text = L"qwe";
			this->textBoxPass->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->textBoxPass->UseSystemPasswordChar = true;
			// 
			// textBoxHost
			// 
			this->textBoxHost->Location = System::Drawing::Point(84, 25);
			this->textBoxHost->Name = L"textBoxHost";
			this->textBoxHost->Size = System::Drawing::Size(227, 20);
			this->textBoxHost->TabIndex = 0;
			this->textBoxHost->Text = L"tcp://127.0.0.1:3306";
			// 
			// tabImage
			// 
			this->tabImage->Controls->Add(this->groupBox5);
			this->tabImage->ImageKey = L"image";
			this->tabImage->Location = System::Drawing::Point(4, 23);
			this->tabImage->Name = L"tabImage";
			this->tabImage->Size = System::Drawing::Size(563, 354);
			this->tabImage->TabIndex = 3;
			this->tabImage->Text = L"Image";
			this->tabImage->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox22);
			this->groupBox5->Controls->Add(this->showFiltersPreview);
			this->groupBox5->Controls->Add(this->groupBox21);
			this->groupBox5->Controls->Add(this->groupResize);
			this->groupBox5->Location = System::Drawing::Point(16, 26);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(529, 310);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Flters";
			// 
			// groupBox22
			// 
			this->groupBox22->BackColor = System::Drawing::Color::Transparent;
			this->groupBox22->Controls->Add(this->srcWEBcbox_image);
			this->groupBox22->Controls->Add(this->srcCAMcbox_image);
			this->groupBox22->Controls->Add(this->srcSFcbox_image);
			this->groupBox22->Location = System::Drawing::Point(372, 19);
			this->groupBox22->Name = L"groupBox22";
			this->groupBox22->Size = System::Drawing::Size(151, 100);
			this->groupBox22->TabIndex = 17;
			this->groupBox22->TabStop = false;
			this->groupBox22->Text = L"Source image:";
			// 
			// srcWEBcbox_image
			// 
			this->srcWEBcbox_image->AutoSize = true;
			this->srcWEBcbox_image->ImageKey = L"webcam";
			this->srcWEBcbox_image->ImageList = this->imageList1;
			this->srcWEBcbox_image->Location = System::Drawing::Point(6, 70);
			this->srcWEBcbox_image->Name = L"srcWEBcbox_image";
			this->srcWEBcbox_image->Padding = System::Windows::Forms::Padding(5);
			this->srcWEBcbox_image->Size = System::Drawing::Size(113, 27);
			this->srcWEBcbox_image->TabIndex = 3;
			this->srcWEBcbox_image->Text = L"webcam / vs";
			this->srcWEBcbox_image->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcWEBcbox_image->UseVisualStyleBackColor = true;
			this->srcWEBcbox_image->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceWeb);
			// 
			// srcCAMcbox_image
			// 
			this->srcCAMcbox_image->AutoSize = true;
			this->srcCAMcbox_image->ImageKey = L"camera";
			this->srcCAMcbox_image->ImageList = this->imageList1;
			this->srcCAMcbox_image->Location = System::Drawing::Point(6, 43);
			this->srcCAMcbox_image->Name = L"srcCAMcbox_image";
			this->srcCAMcbox_image->Padding = System::Windows::Forms::Padding(5);
			this->srcCAMcbox_image->Size = System::Drawing::Size(86, 27);
			this->srcCAMcbox_image->TabIndex = 2;
			this->srcCAMcbox_image->Text = L"camera";
			this->srcCAMcbox_image->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcCAMcbox_image->UseVisualStyleBackColor = true;
			this->srcCAMcbox_image->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceCamera);
			// 
			// srcSFcbox_image
			// 
			this->srcSFcbox_image->AutoSize = true;
			this->srcSFcbox_image->Checked = true;
			this->srcSFcbox_image->ImageKey = L"file";
			this->srcSFcbox_image->ImageList = this->imageList1;
			this->srcSFcbox_image->Location = System::Drawing::Point(6, 16);
			this->srcSFcbox_image->Name = L"srcSFcbox_image";
			this->srcSFcbox_image->Padding = System::Windows::Forms::Padding(5);
			this->srcSFcbox_image->Size = System::Drawing::Size(94, 27);
			this->srcSFcbox_image->TabIndex = 1;
			this->srcSFcbox_image->TabStop = true;
			this->srcSFcbox_image->Text = L"single file";
			this->srcSFcbox_image->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcSFcbox_image->UseVisualStyleBackColor = true;
			this->srcSFcbox_image->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceSF);
			// 
			// showFiltersPreview
			// 
			this->showFiltersPreview->ImageKey = L"images";
			this->showFiltersPreview->ImageList = this->imageList1;
			this->showFiltersPreview->Location = System::Drawing::Point(383, 129);
			this->showFiltersPreview->Name = L"showFiltersPreview";
			this->showFiltersPreview->Size = System::Drawing::Size(129, 26);
			this->showFiltersPreview->TabIndex = 8;
			this->showFiltersPreview->Text = L"Show preview";
			this->showFiltersPreview->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->showFiltersPreview->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->showFiltersPreview->UseVisualStyleBackColor = true;
			this->showFiltersPreview->Click += gcnew System::EventHandler(this, &OptionsWindow::showFiltersPreview_Click);
			// 
			// groupBox21
			// 
			this->groupBox21->Controls->Add(this->filterHistogramEqualCHBox);
			this->groupBox21->Location = System::Drawing::Point(190, 19);
			this->groupBox21->Name = L"groupBox21";
			this->groupBox21->Size = System::Drawing::Size(176, 100);
			this->groupBox21->TabIndex = 3;
			this->groupBox21->TabStop = false;
			this->groupBox21->Text = L"Histogram modifications";
			// 
			// filterHistogramEqualCHBox
			// 
			this->filterHistogramEqualCHBox->AutoSize = true;
			this->filterHistogramEqualCHBox->Location = System::Drawing::Point(17, 31);
			this->filterHistogramEqualCHBox->Name = L"filterHistogramEqualCHBox";
			this->filterHistogramEqualCHBox->Size = System::Drawing::Size(132, 17);
			this->filterHistogramEqualCHBox->TabIndex = 0;
			this->filterHistogramEqualCHBox->Text = L"Histogram equalization";
			this->filterHistogramEqualCHBox->UseVisualStyleBackColor = true;
			this->filterHistogramEqualCHBox->CheckStateChanged += gcnew System::EventHandler(this, &OptionsWindow::filterHistogramEqualCHBox_CheckStateChanged);
			// 
			// groupResize
			// 
			this->groupResize->Controls->Add(this->label29);
			this->groupResize->Controls->Add(this->sizeLabel);
			this->groupResize->Controls->Add(this->sizeBox);
			this->groupResize->Controls->Add(this->sizeCheckBox);
			this->groupResize->Location = System::Drawing::Point(6, 19);
			this->groupResize->Name = L"groupResize";
			this->groupResize->Size = System::Drawing::Size(179, 100);
			this->groupResize->TabIndex = 2;
			this->groupResize->TabStop = false;
			this->groupResize->Text = L"Resize source image";
			this->groupResize->Enter += gcnew System::EventHandler(this, &OptionsWindow::groupResize_Enter);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(148, 55);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(15, 13);
			this->label29->TabIndex = 4;
			this->label29->Text = L"%";
			// 
			// sizeLabel
			// 
			this->sizeLabel->Enabled = false;
			this->sizeLabel->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->sizeLabel->ImageKey = L"size";
			this->sizeLabel->ImageList = this->imageList1;
			this->sizeLabel->Location = System::Drawing::Point(33, 51);
			this->sizeLabel->Name = L"sizeLabel";
			this->sizeLabel->Size = System::Drawing::Size(51, 21);
			this->sizeLabel->TabIndex = 3;
			this->sizeLabel->Text = L"Size:";
			this->sizeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// sizeBox
			// 
			this->sizeBox->Enabled = false;
			this->sizeBox->Location = System::Drawing::Point(92, 52);
			this->sizeBox->Name = L"sizeBox";
			this->sizeBox->Size = System::Drawing::Size(50, 20);
			this->sizeBox->TabIndex = 2;
			this->sizeBox->Text = L"50.0";
			this->sizeBox->TextChanged += gcnew System::EventHandler(this, &OptionsWindow::sizeBox_TextChanged);
			// 
			// sizeCheckBox
			// 
			this->sizeCheckBox->AutoSize = true;
			this->sizeCheckBox->Location = System::Drawing::Point(18, 29);
			this->sizeCheckBox->Name = L"sizeCheckBox";
			this->sizeCheckBox->Size = System::Drawing::Size(68, 17);
			this->sizeCheckBox->TabIndex = 1;
			this->sizeCheckBox->Text = L"Enabled ";
			this->sizeCheckBox->UseVisualStyleBackColor = true;
			this->sizeCheckBox->CheckedChanged += gcnew System::EventHandler(this, &OptionsWindow::checkBox1_CheckedChanged);
			// 
			// tabScale
			// 
			this->tabScale->Controls->Add(this->groupBox18);
			this->tabScale->Controls->Add(this->groupBox16);
			this->tabScale->Controls->Add(this->Status);
			this->tabScale->Controls->Add(this->groupBox4);
			this->tabScale->Controls->Add(this->groupBox3);
			this->tabScale->Controls->Add(this->groupBox2);
			this->tabScale->ImageKey = L"scale";
			this->tabScale->Location = System::Drawing::Point(4, 23);
			this->tabScale->Name = L"tabScale";
			this->tabScale->Padding = System::Windows::Forms::Padding(3);
			this->tabScale->Size = System::Drawing::Size(563, 354);
			this->tabScale->TabIndex = 0;
			this->tabScale->Text = L"Scale";
			this->tabScale->UseVisualStyleBackColor = true;
			this->tabScale->Click += gcnew System::EventHandler(this, &OptionsWindow::tabImage_Click);
			// 
			// groupBox18
			// 
			this->groupBox18->BackColor = System::Drawing::Color::Transparent;
			this->groupBox18->Controls->Add(this->srcWEBcbox_scale);
			this->groupBox18->Controls->Add(this->srcCAMcbox_scale);
			this->groupBox18->Controls->Add(this->srcSFcbox_scale);
			this->groupBox18->Location = System::Drawing::Point(406, 6);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(151, 100);
			this->groupBox18->TabIndex = 16;
			this->groupBox18->TabStop = false;
			this->groupBox18->Text = L"Source image:";
			// 
			// srcWEBcbox_scale
			// 
			this->srcWEBcbox_scale->AutoSize = true;
			this->srcWEBcbox_scale->ImageKey = L"webcam";
			this->srcWEBcbox_scale->ImageList = this->imageList1;
			this->srcWEBcbox_scale->Location = System::Drawing::Point(6, 70);
			this->srcWEBcbox_scale->Name = L"srcWEBcbox_scale";
			this->srcWEBcbox_scale->Padding = System::Windows::Forms::Padding(5);
			this->srcWEBcbox_scale->Size = System::Drawing::Size(113, 27);
			this->srcWEBcbox_scale->TabIndex = 3;
			this->srcWEBcbox_scale->Text = L"webcam / vs";
			this->srcWEBcbox_scale->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcWEBcbox_scale->UseVisualStyleBackColor = true;
			this->srcWEBcbox_scale->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceWeb);
			// 
			// srcCAMcbox_scale
			// 
			this->srcCAMcbox_scale->AutoSize = true;
			this->srcCAMcbox_scale->ImageKey = L"camera";
			this->srcCAMcbox_scale->ImageList = this->imageList1;
			this->srcCAMcbox_scale->Location = System::Drawing::Point(6, 43);
			this->srcCAMcbox_scale->Name = L"srcCAMcbox_scale";
			this->srcCAMcbox_scale->Padding = System::Windows::Forms::Padding(5);
			this->srcCAMcbox_scale->Size = System::Drawing::Size(86, 27);
			this->srcCAMcbox_scale->TabIndex = 2;
			this->srcCAMcbox_scale->Text = L"camera";
			this->srcCAMcbox_scale->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcCAMcbox_scale->UseVisualStyleBackColor = true;
			this->srcCAMcbox_scale->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceCamera);
			// 
			// srcSFcbox_scale
			// 
			this->srcSFcbox_scale->AutoSize = true;
			this->srcSFcbox_scale->Checked = true;
			this->srcSFcbox_scale->ImageKey = L"file";
			this->srcSFcbox_scale->ImageList = this->imageList1;
			this->srcSFcbox_scale->Location = System::Drawing::Point(6, 16);
			this->srcSFcbox_scale->Name = L"srcSFcbox_scale";
			this->srcSFcbox_scale->Padding = System::Windows::Forms::Padding(5);
			this->srcSFcbox_scale->Size = System::Drawing::Size(94, 27);
			this->srcSFcbox_scale->TabIndex = 1;
			this->srcSFcbox_scale->TabStop = true;
			this->srcSFcbox_scale->Text = L"single file";
			this->srcSFcbox_scale->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcSFcbox_scale->UseVisualStyleBackColor = true;
			this->srcSFcbox_scale->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceSF);
			// 
			// groupBox16
			// 
			this->groupBox16->Location = System::Drawing::Point(7, 254);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(550, 93);
			this->groupBox16->TabIndex = 15;
			this->groupBox16->TabStop = false;
			// 
			// Status
			// 
			this->Status->Controls->Add(this->unitLabel);
			this->Status->Controls->Add(this->label15);
			this->Status->Controls->Add(this->scaleRatioLabel);
			this->Status->Controls->Add(this->label13);
			this->Status->Location = System::Drawing::Point(6, 6);
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(394, 100);
			this->Status->TabIndex = 14;
			this->Status->TabStop = false;
			this->Status->Text = L"Status";
			// 
			// unitLabel
			// 
			this->unitLabel->AutoSize = true;
			this->unitLabel->Location = System::Drawing::Point(65, 63);
			this->unitLabel->Name = L"unitLabel";
			this->unitLabel->Size = System::Drawing::Size(14, 13);
			this->unitLabel->TabIndex = 3;
			this->unitLabel->Text = L"#";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 63);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Real unit:";
			// 
			// scaleRatioLabel
			// 
			this->scaleRatioLabel->AutoSize = true;
			this->scaleRatioLabel->Location = System::Drawing::Point(73, 27);
			this->scaleRatioLabel->Name = L"scaleRatioLabel";
			this->scaleRatioLabel->Size = System::Drawing::Size(14, 13);
			this->scaleRatioLabel->TabIndex = 1;
			this->scaleRatioLabel->Text = L"#";
			this->scaleRatioLabel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OptionsWindow::updateScaleLabel);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 27);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Scale ratio:";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Location = System::Drawing::Point(406, 112);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(151, 136);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Auto scaling:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Enabled = false;
			this->label23->Location = System::Drawing::Point(14, 69);
			this->label23->Name = L"label23";
			this->label23->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label23->Size = System::Drawing::Size(83, 13);
			this->label23->TabIndex = 3;
			this->label23->Text = L"and developing.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Enabled = false;
			this->label22->Location = System::Drawing::Point(14, 53);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(98, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"It needs some time ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->Location = System::Drawing::Point(14, 37);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(130, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"This feature is unavelible. ";
			// 
			// button5
			// 
			this->button5->ImageKey = L"auto";
			this->button5->ImageList = this->imageList1;
			this->button5->Location = System::Drawing::Point(51, 104);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 26);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Auto scale";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &OptionsWindow::button5_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->SRtextBox);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->buttonApplyManualScale);
			this->groupBox3->Controls->Add(this->labbb);
			this->groupBox3->Controls->Add(this->unitTextBox2);
			this->groupBox3->Location = System::Drawing::Point(6, 112);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(196, 136);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Manual scaling";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &OptionsWindow::groupBox3_Enter);
			// 
			// SRtextBox
			// 
			this->SRtextBox->Location = System::Drawing::Point(9, 43);
			this->SRtextBox->Name = L"SRtextBox";
			this->SRtextBox->Size = System::Drawing::Size(81, 20);
			this->SRtextBox->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 27);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Scale ratio:";
			// 
			// buttonApplyManualScale
			// 
			this->buttonApplyManualScale->ImageKey = L"ok";
			this->buttonApplyManualScale->ImageList = this->imageList1;
			this->buttonApplyManualScale->Location = System::Drawing::Point(96, 104);
			this->buttonApplyManualScale->Name = L"buttonApplyManualScale";
			this->buttonApplyManualScale->Size = System::Drawing::Size(94, 26);
			this->buttonApplyManualScale->TabIndex = 2;
			this->buttonApplyManualScale->Text = L"Apply";
			this->buttonApplyManualScale->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonApplyManualScale->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonApplyManualScale->UseVisualStyleBackColor = true;
			this->buttonApplyManualScale->Click += gcnew System::EventHandler(this, &OptionsWindow::setManualScale_button);
			// 
			// labbb
			// 
			this->labbb->AutoSize = true;
			this->labbb->Location = System::Drawing::Point(93, 27);
			this->labbb->Name = L"labbb";
			this->labbb->Size = System::Drawing::Size(29, 13);
			this->labbb->TabIndex = 1;
			this->labbb->Text = L"Unit:";
			// 
			// unitTextBox2
			// 
			this->unitTextBox2->Location = System::Drawing::Point(96, 43);
			this->unitTextBox2->Name = L"unitTextBox2";
			this->unitTextBox2->Size = System::Drawing::Size(94, 20);
			this->unitTextBox2->TabIndex = 0;
			this->unitTextBox2->Text = L"mm";
			this->unitTextBox2->TextChanged += gcnew System::EventHandler(this, &OptionsWindow::unitTextBox2_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->unitTextBox);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->vsdLabel);
			this->groupBox2->Controls->Add(this->realTextBox);
			this->groupBox2->Controls->Add(this->setScaleButton);
			this->groupBox2->Location = System::Drawing::Point(208, 112);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(192, 136);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Scaling by manual measuring";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Virtual scale dimention:";
			// 
			// unitTextBox
			// 
			this->unitTextBox->Location = System::Drawing::Point(103, 43);
			this->unitTextBox->Name = L"unitTextBox";
			this->unitTextBox->Size = System::Drawing::Size(83, 20);
			this->unitTextBox->TabIndex = 10;
			this->unitTextBox->Text = L"mm";
			this->unitTextBox->TextChanged += gcnew System::EventHandler(this, &OptionsWindow::unitTextBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Real scale dimention:";
			// 
			// realTextBox
			// 
			this->realTextBox->Location = System::Drawing::Point(9, 43);
			this->realTextBox->Name = L"realTextBox";
			this->realTextBox->Size = System::Drawing::Size(88, 20);
			this->realTextBox->TabIndex = 4;
			this->realTextBox->Text = L"65.0";
			// 
			// setScaleButton
			// 
			this->setScaleButton->ImageKey = L"blobEdit";
			this->setScaleButton->ImageList = this->imageList1;
			this->setScaleButton->Location = System::Drawing::Point(62, 104);
			this->setScaleButton->Name = L"setScaleButton";
			this->setScaleButton->Size = System::Drawing::Size(124, 26);
			this->setScaleButton->TabIndex = 7;
			this->setScaleButton->Text = L"Start measuring";
			this->setScaleButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->setScaleButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->setScaleButton->UseVisualStyleBackColor = true;
			this->setScaleButton->Click += gcnew System::EventHandler(this, &OptionsWindow::setScaleButton_Click);
			// 
			// tabBlobs
			// 
			this->tabBlobs->Controls->Add(this->tabControl2);
			this->tabBlobs->Controls->Add(this->groupBox19);
			this->tabBlobs->ImageKey = L"blob";
			this->tabBlobs->Location = System::Drawing::Point(4, 23);
			this->tabBlobs->Name = L"tabBlobs";
			this->tabBlobs->Size = System::Drawing::Size(563, 354);
			this->tabBlobs->TabIndex = 2;
			this->tabBlobs->Text = L"Blobs";
			this->tabBlobs->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(390, 348);
			this->tabControl2->TabIndex = 18;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox20);
			this->tabPage3->Controls->Add(this->groupBox15);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(382, 322);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Blobs size";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox20
			// 
			this->groupBox20->Controls->Add(this->label26);
			this->groupBox20->Controls->Add(this->label27);
			this->groupBox20->Controls->Add(this->label25);
			this->groupBox20->Controls->Add(this->label24);
			this->groupBox20->Location = System::Drawing::Point(6, 6);
			this->groupBox20->Name = L"groupBox20";
			this->groupBox20->Size = System::Drawing::Size(370, 76);
			this->groupBox20->TabIndex = 10;
			this->groupBox20->TabStop = false;
			this->groupBox20->Text = L"Status";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(52, 44);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(44, 13);
			this->label26->TabIndex = 3;
			this->label26->Text = L"10 mm2";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(52, 22);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 13);
			this->label27->TabIndex = 2;
			this->label27->Text = L"150 mm2";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(19, 44);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Min:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(16, 22);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 13);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Max:";
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->button4);
			this->groupBox15->Controls->Add(this->label9);
			this->groupBox15->Controls->Add(this->label6);
			this->groupBox15->Controls->Add(this->label8);
			this->groupBox15->Controls->Add(this->label5);
			this->groupBox15->Controls->Add(this->maxBlobABoxThresh);
			this->groupBox15->Controls->Add(this->minBlobABoxThresh);
			this->groupBox15->Location = System::Drawing::Point(6, 88);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(370, 134);
			this->groupBox15->TabIndex = 9;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Segmentation callibration";
			// 
			// button4
			// 
			this->button4->ImageKey = L"blobEdit";
			this->button4->ImageList = this->imageList1;
			this->button4->Location = System::Drawing::Point(237, 99);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 29);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Start calibration";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OptionsWindow::startImageBlobSetup);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(231, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"mm2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Min blob area:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(231, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"mm2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Max blob area:";
			// 
			// maxBlobABoxThresh
			// 
			this->maxBlobABoxThresh->Location = System::Drawing::Point(103, 37);
			this->maxBlobABoxThresh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {40000, 0, 0, 0});
			this->maxBlobABoxThresh->Name = L"maxBlobABoxThresh";
			this->maxBlobABoxThresh->Size = System::Drawing::Size(122, 20);
			this->maxBlobABoxThresh->TabIndex = 6;
			this->maxBlobABoxThresh->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {400, 0, 0, 0});
			// 
			// minBlobABoxThresh
			// 
			this->minBlobABoxThresh->Location = System::Drawing::Point(103, 63);
			this->minBlobABoxThresh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {40000, 0, 0, 0});
			this->minBlobABoxThresh->Name = L"minBlobABoxThresh";
			this->minBlobABoxThresh->Size = System::Drawing::Size(122, 20);
			this->minBlobABoxThresh->TabIndex = 5;
			this->minBlobABoxThresh->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->checkBox1);
			this->tabPage4->Controls->Add(this->groupBox9);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(382, 322);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Gruping detector";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->ImageKey = L"blobEdit";
			this->button9->ImageList = this->imageList1;
			this->button9->Location = System::Drawing::Point(249, 109);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(127, 29);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Start calibration";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &OptionsWindow::button9_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 18);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(65, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Enabled";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Location = System::Drawing::Point(5, 41);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(371, 62);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			// 
			// groupBox19
			// 
			this->groupBox19->Controls->Add(this->srcWEBcbox_blobs);
			this->groupBox19->Controls->Add(this->srcCAMcbox_blobs);
			this->groupBox19->Controls->Add(this->srcSFcbox_blobs);
			this->groupBox19->Location = System::Drawing::Point(399, 23);
			this->groupBox19->Name = L"groupBox19";
			this->groupBox19->Size = System::Drawing::Size(151, 105);
			this->groupBox19->TabIndex = 17;
			this->groupBox19->TabStop = false;
			this->groupBox19->Text = L"Source image:";
			// 
			// srcWEBcbox_blobs
			// 
			this->srcWEBcbox_blobs->AutoSize = true;
			this->srcWEBcbox_blobs->ImageKey = L"webcam";
			this->srcWEBcbox_blobs->ImageList = this->imageList1;
			this->srcWEBcbox_blobs->Location = System::Drawing::Point(6, 70);
			this->srcWEBcbox_blobs->Name = L"srcWEBcbox_blobs";
			this->srcWEBcbox_blobs->Padding = System::Windows::Forms::Padding(5);
			this->srcWEBcbox_blobs->Size = System::Drawing::Size(113, 27);
			this->srcWEBcbox_blobs->TabIndex = 3;
			this->srcWEBcbox_blobs->Text = L"webcam / vs";
			this->srcWEBcbox_blobs->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcWEBcbox_blobs->UseVisualStyleBackColor = true;
			this->srcWEBcbox_blobs->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceWeb);
			// 
			// srcCAMcbox_blobs
			// 
			this->srcCAMcbox_blobs->AutoSize = true;
			this->srcCAMcbox_blobs->ImageKey = L"camera";
			this->srcCAMcbox_blobs->ImageList = this->imageList1;
			this->srcCAMcbox_blobs->Location = System::Drawing::Point(6, 43);
			this->srcCAMcbox_blobs->Name = L"srcCAMcbox_blobs";
			this->srcCAMcbox_blobs->Padding = System::Windows::Forms::Padding(5);
			this->srcCAMcbox_blobs->Size = System::Drawing::Size(86, 27);
			this->srcCAMcbox_blobs->TabIndex = 2;
			this->srcCAMcbox_blobs->Text = L"camera";
			this->srcCAMcbox_blobs->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcCAMcbox_blobs->UseVisualStyleBackColor = true;
			this->srcCAMcbox_blobs->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceCamera);
			// 
			// srcSFcbox_blobs
			// 
			this->srcSFcbox_blobs->AutoSize = true;
			this->srcSFcbox_blobs->Checked = true;
			this->srcSFcbox_blobs->ImageKey = L"file";
			this->srcSFcbox_blobs->ImageList = this->imageList1;
			this->srcSFcbox_blobs->Location = System::Drawing::Point(6, 16);
			this->srcSFcbox_blobs->Name = L"srcSFcbox_blobs";
			this->srcSFcbox_blobs->Padding = System::Windows::Forms::Padding(5);
			this->srcSFcbox_blobs->Size = System::Drawing::Size(94, 27);
			this->srcSFcbox_blobs->TabIndex = 1;
			this->srcSFcbox_blobs->TabStop = true;
			this->srcSFcbox_blobs->Text = L"single file";
			this->srcSFcbox_blobs->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcSFcbox_blobs->UseVisualStyleBackColor = true;
			this->srcSFcbox_blobs->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceSF);
			// 
			// tabProbbing
			// 
			this->tabProbbing->Controls->Add(this->tabControl1);
			this->tabProbbing->ImageKey = L"gear";
			this->tabProbbing->Location = System::Drawing::Point(4, 23);
			this->tabProbbing->Name = L"tabProbbing";
			this->tabProbbing->Size = System::Drawing::Size(563, 354);
			this->tabProbbing->TabIndex = 4;
			this->tabProbbing->Text = L"Probbing";
			this->tabProbbing->UseVisualStyleBackColor = true;
			this->tabProbbing->Click += gcnew System::EventHandler(this, &OptionsWindow::tabProcess_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->ImageList = this->imageList1;
			this->tabControl1->Location = System::Drawing::Point(5, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(555, 349);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox23);
			this->tabPage2->Controls->Add(this->groupBox14);
			this->tabPage2->Controls->Add(this->startSingleButton);
			this->tabPage2->Controls->Add(this->groupBox11);
			this->tabPage2->ImageKey = L"singleMode";
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(547, 322);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Single mode";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox23
			// 
			this->groupBox23->Location = System::Drawing::Point(6, 6);
			this->groupBox23->Name = L"groupBox23";
			this->groupBox23->Size = System::Drawing::Size(210, 100);
			this->groupBox23->TabIndex = 15;
			this->groupBox23->TabStop = false;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->checkBox4);
			this->groupBox14->Location = System::Drawing::Point(386, 6);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(155, 100);
			this->groupBox14->TabIndex = 14;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"More options";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->ImageKey = L"images";
			this->checkBox4->ImageList = this->imageList1;
			this->checkBox4->Location = System::Drawing::Point(16, 14);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Padding = System::Windows::Forms::Padding(5);
			this->checkBox4->Size = System::Drawing::Size(119, 27);
			this->checkBox4->TabIndex = 1;
			this->checkBox4->Text = L"Show preview";
			this->checkBox4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// startSingleButton
			// 
			this->startSingleButton->ImageKey = L"gear";
			this->startSingleButton->ImageList = this->imageList1;
			this->startSingleButton->Location = System::Drawing::Point(440, 112);
			this->startSingleButton->Name = L"startSingleButton";
			this->startSingleButton->Size = System::Drawing::Size(101, 30);
			this->startSingleButton->TabIndex = 3;
			this->startSingleButton->Text = L"Make it";
			this->startSingleButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->startSingleButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->startSingleButton->UseVisualStyleBackColor = true;
			this->startSingleButton->Click += gcnew System::EventHandler(this, &OptionsWindow::startSingleButton_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->srcWEBcbox_s_probing);
			this->groupBox11->Controls->Add(this->srcCAMcbox_s_probing);
			this->groupBox11->Controls->Add(this->srcSFcbox_s_probing);
			this->groupBox11->Location = System::Drawing::Point(222, 6);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(158, 100);
			this->groupBox11->TabIndex = 10;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Source image";
			// 
			// srcWEBcbox_s_probing
			// 
			this->srcWEBcbox_s_probing->AutoSize = true;
			this->srcWEBcbox_s_probing->ImageKey = L"webcam";
			this->srcWEBcbox_s_probing->ImageList = this->imageList1;
			this->srcWEBcbox_s_probing->Location = System::Drawing::Point(15, 67);
			this->srcWEBcbox_s_probing->Name = L"srcWEBcbox_s_probing";
			this->srcWEBcbox_s_probing->Padding = System::Windows::Forms::Padding(5);
			this->srcWEBcbox_s_probing->Size = System::Drawing::Size(113, 27);
			this->srcWEBcbox_s_probing->TabIndex = 11;
			this->srcWEBcbox_s_probing->Text = L"webcam / vs";
			this->srcWEBcbox_s_probing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcWEBcbox_s_probing->UseVisualStyleBackColor = true;
			this->srcWEBcbox_s_probing->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceWeb);
			// 
			// srcCAMcbox_s_probing
			// 
			this->srcCAMcbox_s_probing->AutoSize = true;
			this->srcCAMcbox_s_probing->ImageKey = L"camera";
			this->srcCAMcbox_s_probing->ImageList = this->imageList1;
			this->srcCAMcbox_s_probing->Location = System::Drawing::Point(15, 40);
			this->srcCAMcbox_s_probing->Name = L"srcCAMcbox_s_probing";
			this->srcCAMcbox_s_probing->Padding = System::Windows::Forms::Padding(5);
			this->srcCAMcbox_s_probing->Size = System::Drawing::Size(86, 27);
			this->srcCAMcbox_s_probing->TabIndex = 10;
			this->srcCAMcbox_s_probing->Text = L"camera";
			this->srcCAMcbox_s_probing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcCAMcbox_s_probing->UseVisualStyleBackColor = true;
			this->srcCAMcbox_s_probing->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceCamera);
			// 
			// srcSFcbox_s_probing
			// 
			this->srcSFcbox_s_probing->AutoSize = true;
			this->srcSFcbox_s_probing->Checked = true;
			this->srcSFcbox_s_probing->ImageKey = L"file";
			this->srcSFcbox_s_probing->ImageList = this->imageList1;
			this->srcSFcbox_s_probing->Location = System::Drawing::Point(15, 13);
			this->srcSFcbox_s_probing->Name = L"srcSFcbox_s_probing";
			this->srcSFcbox_s_probing->Padding = System::Windows::Forms::Padding(5);
			this->srcSFcbox_s_probing->Size = System::Drawing::Size(94, 27);
			this->srcSFcbox_s_probing->TabIndex = 9;
			this->srcSFcbox_s_probing->TabStop = true;
			this->srcSFcbox_s_probing->Text = L"single file";
			this->srcSFcbox_s_probing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcSFcbox_s_probing->UseVisualStyleBackColor = true;
			this->srcSFcbox_s_probing->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceSF);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->groupBox17);
			this->tabPage1->Controls->Add(this->groupBox8);
			this->tabPage1->Controls->Add(this->groupBox10);
			this->tabPage1->ImageKey = L"contMode";
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(547, 322);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Continious Mode";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->ImageKey = L"GearStop";
			this->button8->ImageList = this->imageList1;
			this->button8->Location = System::Drawing::Point(445, 286);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 30);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Stop";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->ImageKey = L"gearGo";
			this->button7->ImageList = this->imageList1;
			this->button7->Location = System::Drawing::Point(348, 286);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 30);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Start";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->srcWEBcbox_c_probing);
			this->groupBox17->Controls->Add(this->srcCAMcbox_c_probing);
			this->groupBox17->Controls->Add(this->srcFOLDERcbox_c_probing);
			this->groupBox17->Location = System::Drawing::Point(222, 6);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(158, 100);
			this->groupBox17->TabIndex = 14;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Source image";
			// 
			// srcWEBcbox_c_probing
			// 
			this->srcWEBcbox_c_probing->AutoSize = true;
			this->srcWEBcbox_c_probing->ImageKey = L"webcam";
			this->srcWEBcbox_c_probing->ImageList = this->imageList1;
			this->srcWEBcbox_c_probing->Location = System::Drawing::Point(15, 67);
			this->srcWEBcbox_c_probing->Name = L"srcWEBcbox_c_probing";
			this->srcWEBcbox_c_probing->Padding = System::Windows::Forms::Padding(5);
			this->srcWEBcbox_c_probing->Size = System::Drawing::Size(113, 27);
			this->srcWEBcbox_c_probing->TabIndex = 11;
			this->srcWEBcbox_c_probing->Text = L"webcam / vs";
			this->srcWEBcbox_c_probing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcWEBcbox_c_probing->UseVisualStyleBackColor = true;
			this->srcWEBcbox_c_probing->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceWeb);
			// 
			// srcCAMcbox_c_probing
			// 
			this->srcCAMcbox_c_probing->AutoSize = true;
			this->srcCAMcbox_c_probing->ImageKey = L"camera";
			this->srcCAMcbox_c_probing->ImageList = this->imageList1;
			this->srcCAMcbox_c_probing->Location = System::Drawing::Point(15, 40);
			this->srcCAMcbox_c_probing->Name = L"srcCAMcbox_c_probing";
			this->srcCAMcbox_c_probing->Padding = System::Windows::Forms::Padding(5);
			this->srcCAMcbox_c_probing->Size = System::Drawing::Size(86, 27);
			this->srcCAMcbox_c_probing->TabIndex = 10;
			this->srcCAMcbox_c_probing->Text = L"camera";
			this->srcCAMcbox_c_probing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcCAMcbox_c_probing->UseVisualStyleBackColor = true;
			this->srcCAMcbox_c_probing->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceCamera);
			// 
			// srcFOLDERcbox_c_probing
			// 
			this->srcFOLDERcbox_c_probing->AutoSize = true;
			this->srcFOLDERcbox_c_probing->Checked = true;
			this->srcFOLDERcbox_c_probing->ImageKey = L"folder";
			this->srcFOLDERcbox_c_probing->ImageList = this->imageList1;
			this->srcFOLDERcbox_c_probing->Location = System::Drawing::Point(15, 13);
			this->srcFOLDERcbox_c_probing->Name = L"srcFOLDERcbox_c_probing";
			this->srcFOLDERcbox_c_probing->Padding = System::Windows::Forms::Padding(5);
			this->srcFOLDERcbox_c_probing->Size = System::Drawing::Size(77, 27);
			this->srcFOLDERcbox_c_probing->TabIndex = 9;
			this->srcFOLDERcbox_c_probing->TabStop = true;
			this->srcFOLDERcbox_c_probing->Text = L"folder";
			this->srcFOLDERcbox_c_probing->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->srcFOLDERcbox_c_probing->UseVisualStyleBackColor = true;
			this->srcFOLDERcbox_c_probing->Click += gcnew System::EventHandler(this, &OptionsWindow::setSourceSF);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->checkBox3);
			this->groupBox8->Location = System::Drawing::Point(386, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(155, 100);
			this->groupBox8->TabIndex = 13;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"More options";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->ImageKey = L"images";
			this->checkBox3->ImageList = this->imageList1;
			this->checkBox3->Location = System::Drawing::Point(16, 14);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Padding = System::Windows::Forms::Padding(5);
			this->checkBox3->Size = System::Drawing::Size(119, 27);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"Show preview";
			this->checkBox3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label16);
			this->groupBox10->Controls->Add(this->numericUpDown1);
			this->groupBox10->Controls->Add(this->label14);
			this->groupBox10->Location = System::Drawing::Point(6, 6);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(209, 100);
			this->groupBox10->TabIndex = 12;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Looping";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label16->ImageKey = L"clock";
			this->label16->ImageList = this->imageList1;
			this->label16->Location = System::Drawing::Point(12, 18);
			this->label16->Name = L"label16";
			this->label16->Padding = System::Windows::Forms::Padding(5);
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label16->Size = System::Drawing::Size(98, 23);
			this->label16->TabIndex = 4;
			this->label16->Text = L"       Loops delay:";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(19, 47);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(141, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(166, 49);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"ms";
			// 
			// folderBrowserDialog
			// 
			this->folderBrowserDialog->Description = L"Select files directory";
			this->folderBrowserDialog->RootFolder = System::Environment::SpecialFolder::MyComputer;
			this->folderBrowserDialog->SelectedPath = L"d:\\tmp\\";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"d:\\tmp\\pelety.jpg";
			this->openFileDialog->InitialDirectory = L"d:\\tmp\\";
			this->openFileDialog->Title = L"Select file";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(16, 28);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(93, 17);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"Show preview";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->ImageKey = L"webcam";
			this->radioButton1->ImageList = this->imageList1;
			this->radioButton1->Location = System::Drawing::Point(6, 70);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Padding = System::Windows::Forms::Padding(5);
			this->radioButton1->Size = System::Drawing::Size(113, 27);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->Text = L"webcam / vs";
			this->radioButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->ImageKey = L"camera";
			this->radioButton2->ImageList = this->imageList1;
			this->radioButton2->Location = System::Drawing::Point(6, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Padding = System::Windows::Forms::Padding(5);
			this->radioButton2->Size = System::Drawing::Size(86, 27);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"camera";
			this->radioButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->ImageKey = L"file";
			this->radioButton3->ImageList = this->imageList1;
			this->radioButton3->Location = System::Drawing::Point(6, 16);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Padding = System::Windows::Forms::Padding(5);
			this->radioButton3->Size = System::Drawing::Size(94, 27);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"single file";
			this->radioButton3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// OptionsWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 398);
			this->Controls->Add(this->tabsOptions);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"OptionsWindow";
			this->Text = L"Control panel";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OptionsWindow::OptionsWindow_Paint);
			this->tabsOptions->ResumeLayout(false);
			this->tabDataSource->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->tabDB->ResumeLayout(false);
			this->tabDB->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabImage->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox22->ResumeLayout(false);
			this->groupBox22->PerformLayout();
			this->groupBox21->ResumeLayout(false);
			this->groupBox21->PerformLayout();
			this->groupResize->ResumeLayout(false);
			this->groupResize->PerformLayout();
			this->tabScale->ResumeLayout(false);
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->Status->ResumeLayout(false);
			this->Status->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabBlobs->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->groupBox20->ResumeLayout(false);
			this->groupBox20->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->maxBlobABoxThresh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->minBlobABoxThresh))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox19->ResumeLayout(false);
			this->groupBox19->PerformLayout();
			this->tabProbbing->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 	
				 String^ server = textBoxHost->Text;
				 String^ user = textBoxUser->Text;
				 String^ pass = textBoxPass->Text;



				 if (spock->connectDB(server, user, pass))
				 {
					 textBoxHost->Enabled = false;
					 textBoxPass->Enabled = false;
					 textBoxUser->Enabled = false;
					 button1->Enabled = false;
					 button2->Enabled = true;
					 label_dbstatus->Text = "CONNECTED";
					 label_dbstatus->ForeColor = System::Drawing::Color::ForestGreen;
				 }

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				if (spock->disconnectDB())
				{
					textBoxHost->Enabled = true;
					textBoxPass->Enabled = true;
					textBoxUser->Enabled = true;
					button1->Enabled = true;
					button2->Enabled = false;
					label_dbstatus->Text = "DISCONNECTED";
					label_dbstatus->ForeColor = System::Drawing::Color::Red;
				}
		 }
private: System::Void startImageBlobSetup(System::Object^  sender, System::EventArgs^  e) {
			 spock->setupImage();
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabImage_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void setScaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			spock->setScaleByManualMeasuring(realTextBox->Text, unitTextBox->Text);

		 }

private: System::Void setManualScale_button(System::Object^  sender, System::EventArgs^  e) {
			 spock->setManualScale(SRtextBox->Text, unitTextBox2->Text);
		 }
private: System::Void unitTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 unitTextBox->Text = unitTextBox2->Text;
		 }
private: System::Void unitTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 unitTextBox2->Text = unitTextBox->Text;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void SRtextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			vsdLabel->Text = SRtextBox->Text;
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void updateScaleLabel(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		 }

private: void updateDisplayers()
		 {
			 scaleRatioLabel->Text = gcnew String(spock->getScale().c_str());
			 unitLabel->Text = gcnew String(spock->getUnit().c_str());
			 vsdLabel->Text = gcnew String(spock->getPixels().c_str());

			 String^ hh = gcnew String(spock->getFolderPath().c_str());
			 folderPathLabel->Text = hh;
			 String^ gg = gcnew String(spock->getFilePath().c_str());
			 filePathLabel->Text = gg; 
		 }

private: System::Void OptionsWindow_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			  updateDisplayers();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabProcess_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void startLoopingButton_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox7_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void openFolderButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 
			 System::Windows::Forms::DialogResult result_fo = folderBrowserDialog->ShowDialog();
			 if ( result_fo == System::Windows::Forms::DialogResult::OK )
			 {
				 
				spock->setFolder(folderBrowserDialog->SelectedPath);
				updateDisplayers();
				refreshFilesList();
				//openFileDialog->InitialDirectory = folderName;
				//openFileDialog->FileName = nullptr;
			 }

		 }

private: System::Void openFileButton_Click(System::Object^  sender, System::EventArgs^  e) {
		 
			 System::Windows::Forms::DialogResult result_fi = openFileDialog->ShowDialog();
			 if (result_fi == System::Windows::Forms::DialogResult::OK)
			 {
				 spock->setFile(openFileDialog->FileName);
				 updateDisplayers();
				 //openFileDialog->InitialDirectory = folderName;
				 //openFileDialog->FileName = nullptr;
			 }
		 }




private: System::Void groupResize_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 sizeLabel->Enabled = sizeCheckBox->Checked;
			 sizeBox->Enabled = sizeCheckBox->Checked;
			 spock->setSizerEnabled(sizeCheckBox->Checked);
		 }
private: System::Void sizeBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 spock->configSizer(sizeBox->Text);
		 }
private: System::Void showFiltersPreview_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->showFiltersPreview();
		 }
private: System::Void filterHistogramEqualCHBox_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
			 spock->setFilterHistogramEqual(filterHistogramEqualCHBox->Checked);
		 }



private: void refreshSourceCBs(void)
		 {
			 srcCAMcbox_image->Checked = sourceCam; 
			 srcCAMcbox_scale->Checked = sourceCam;
			 srcCAMcbox_blobs->Checked = sourceCam;
			 srcCAMcbox_s_probing->Checked = sourceCam;
			 srcCAMcbox_c_probing->Checked = sourceCam;

			 srcWEBcbox_image->Checked = sourceWeb; 
			 srcWEBcbox_scale->Checked = sourceWeb;
			 srcWEBcbox_blobs->Checked = sourceWeb;
			 srcWEBcbox_s_probing->Checked = sourceWeb;
			 srcWEBcbox_c_probing->Checked = sourceWeb;

			 srcSFcbox_image->Checked = sourceSF; 
			 srcSFcbox_scale->Checked = sourceSF;
			 srcSFcbox_blobs->Checked = sourceSF;
			 srcSFcbox_s_probing->Checked = sourceSF;

			 srcFOLDERcbox_c_probing->Checked = sourceSF; 
			 
		 }

private: System::Void setSourceCamera(System::Object^  sender, System::EventArgs^  e) {
			 sourceCam = true;
			 sourceFolder = false;
			 sourceSF = false;
			 sourceWeb = false;
			 spock->setSource(SOURCE_CAMERA_D90);
			 refreshSourceCBs();
		 }

private: System::Void setSourceSF(System::Object^  sender, System::EventArgs^  e) {
			 sourceCam = false;
			 sourceFolder = true;
			 sourceSF = true;
			 sourceWeb = false;
			 spock->setSource(SOURCE_FILE_FOLDER); //orfolder
			 refreshSourceCBs();
		 }
private: System::Void setSourceWeb(System::Object^  sender, System::EventArgs^  e) {
			 sourceCam = false;
			 sourceFolder = false;
			 sourceSF = false;
			 sourceWeb = true;
			 spock->setSource(SOURCE_WEBCAM);
			 refreshSourceCBs();
		 }
private: System::Void connectWebcamButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->connectWebcam();
		 }
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
			
			 refreshFilesList();
			 		
		 }
private: void refreshFilesList()
		 {
			 filesList->Items->Clear();
			 array<String^>^ filesFromFolder = spock->refreshFolder();
			 int numFiles = filesFromFolder->Length;
			 for (int i=0; i<numFiles; i++)
			 {
				 filesList->Items->Add(filesFromFolder[i]);
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->setupGroupFinder();
		 }
private: System::Void startSingleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->makeSingleProbe();
		 }
};
}

