//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mainAppliUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainForm *mainForm;
//---------------------------------------------------------------------------
__fastcall TmainForm::TmainForm(TComponent* Owner)
	: TForm(Owner)
{
 	DMApp1->DataSetClient->Connection = DMApp1->conDB;
	DMApp1->DataSetClient->CommandText = "SELECT * FROM client";
	DMApp1->dsClient->DataSet = DMApp1->DataSetClient;
	DMApp1->DataSetClient->Open();
	DBGrid1->DataSource = DMApp1->dsClient;
}
//---------------------------------------------------------------------------
void __fastcall TmainForm::btnAddClientClick(TObject *Sender)
{
	formAddInformation->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TmainForm::btnUpdateClick(TObject *Sender)
{
		/* This button also edits the student database, but in this instance, lets
	   the user modify a single record's information. Query statements are
	   followed by editing using parameters, refreshing the database and then
	   informing the user. */

/*	DMApp1->ADOCommand2->Connection = DMApp1->conDB;

	AnsiString sql = "UPDATE client SET ";
	sql += " caseNumber = :caseno,";
	sql += " clientName = :cname, ";
	sql += " clientSurname = :csurname, ";
	sql += " clientDOB = :cdob, ";
	sql += " clientPhoneNo = :cphone, ";
	sql += " clientIDno = :clientid ";
	sql += " WHERE caseNumber = :caseno ";

	ADOCommand2->CommandText = sql;

	ADOCommand2->Parameters->ParamByName("caseno")->Value =
		edtName->Text;
	ADOCommand2->Parameters->ParamByName("cname")->Value =
		edtSurname->Text;
	ADOCommand2->Parameters->ParamByName("csurname")->Value =
		edtPhone->Text;
	ADOCommand2->Parameters->ParamByName("cdob")->Value =
		DateTimePicker1->Date;
	ADOCommand2->Parameters->ParamByName("cphone")->Value =
		cmbEdtYear->Text;
	ADOCommand2->Parameters->ParamByName("clientid")->Value =
		edtGroup->Text;

	ADOCommand2->Execute();
	ShowMessage ("You've changed " + edtName->Text + " " + edtSurname->Text + "'s information.");   //0.5

	DataSetClient->Close();
	DataSetClient->Open();
*/
}
//---------------------------------------------------------------------------
void __fastcall TmainForm::btnSearchClick(TObject *Sender)
{
   // formSearch->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::btnForwardClick(TObject *Sender)
{
    DMApp1->DataSetClient->Next();
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::btnBackClick(TObject *Sender)
{
    DMApp1->DataSetClient->Prior();
}
//---------------------------------------------------------------------------

