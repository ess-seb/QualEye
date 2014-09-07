#pragma once
#include "Commander.h"
#include "OptionsWindow.h"

namespace QualEye {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Commander* spock;
		OptionsWindow^ myOptionsWin;
	private: System::Windows::Forms::ToolStripMenuItem^  startProcessToolStripMenuItem;
	 
	private: System::Windows::Forms::ToolStripMenuItem^  stopProcessToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  setScaleToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  statusLabel;

	private: System::Windows::Forms::ToolStripMenuItem^  adjustImageToolStripMenuItem;
	public:	Form1(void)
		{
			InitializeComponent();
			spock = new Commander;
			myOptionsWin = gcnew OptionsWindow(spock);
			myOptionsWin->MdiParent = this;
			//myOptionWin->tabsOptions->SelectTab("tabDB");
			//myOptionWin->tabDB->Show();
			myOptionsWin->Show();
			

			//
			//TODO: Add the constructor code here
			//
		}
 
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete spock;
				delete components;
			}
		}


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startProcessToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stopProcessToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->statusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->aboutToolStripMenuItem, this->optionsToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(809, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->closeToolStripMenuItem, 
				this->startProcessToolStripMenuItem, this->stopProcessToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::closeToolStripMenuItem_Click);
			// 
			// startProcessToolStripMenuItem
			// 
			this->startProcessToolStripMenuItem->Name = L"startProcessToolStripMenuItem";
			this->startProcessToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->startProcessToolStripMenuItem->Text = L"Start process";
			this->startProcessToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::startProcessToolStripMenuItem_Click);
			// 
			// stopProcessToolStripMenuItem
			// 
			this->stopProcessToolStripMenuItem->Name = L"stopProcessToolStripMenuItem";
			this->stopProcessToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->stopProcessToolStripMenuItem->Text = L"Stop process";
			this->stopProcessToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::stopProcessToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->settingsToolStripMenuItem, 
				this->setScaleToolStripMenuItem, this->adjustImageToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->optionsToolStripMenuItem->Text = L"Settings";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->settingsToolStripMenuItem->Text = L"Database (MySQL)";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::settingsToolStripMenuItem_Click);
			// 
			// setScaleToolStripMenuItem
			// 
			this->setScaleToolStripMenuItem->Name = L"setScaleToolStripMenuItem";
			this->setScaleToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->setScaleToolStripMenuItem->Text = L"Set Scale";
			this->setScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::setScaleToolStripMenuItem_Click);
			// 
			// adjustImageToolStripMenuItem
			// 
			this->adjustImageToolStripMenuItem->Name = L"adjustImageToolStripMenuItem";
			this->adjustImageToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->adjustImageToolStripMenuItem->Text = L"Adjust image";
			this->adjustImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::adjustImageToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->statusLabel});
			this->statusStrip1->Location = System::Drawing::Point(0, 449);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(809, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// statusLabel
			// 
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(118, 17);
			this->statusLabel->Text = L"toolStripStatusLabel1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 471);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				delete spock;
				delete this;
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 delete spock;
		 }
private: System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			myOptionsWin->Show();
			 //settings
		 }
private: System::Void startProcessToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->startProcess();
		 }
private: System::Void stopProcessToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->stopProcess();
		 }
private: System::Void adjustImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->setupImage();
		 }
private: System::Void setScaleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 spock->setScaleByManualMeasuring(myOptionsWin->realTextBox->Text, myOptionsWin->unitTextBox->Text);
		 }
};
}

