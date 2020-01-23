//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "unitAddClient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TformAddInformation *formAddInformation;
//---------------------------------------------------------------------------
__fastcall TformAddInformation::TformAddInformation(TComponent* Owner)
	: TForm(Owner)
{
	formAddInformation->Caption = "Add Client";
}
//---------------------------------------------------------------------------
void __fastcall TformAddInformation::btnAddClick(TObject *Sender)
{
	// Make instance of class



	// Load information into database

	try
	{

		if (MessageDlg("Are you sure you want to add this information?", mtConfirmation, mbYesNo, 0) == mrYes)
		{
			DMApp1->ADOCommand1->Connection = DMApp1->conDB;
			AnsiString insSql = "INSERT INTO client (caseNumber, clientName,";
			insSql += " clientSurname, clientDOB, clientIDno, clientPhoneNo)";
			insSql += " VALUES (:canum ,:clname, :clsurname, :cldob, :clid, :clphone)";
			DMApp1->ADOCommand1->CommandText = insSql;
			DMApp1->ADOCommand1->Parameters->ParamByName("canum")->Value = edtCaseNum->Text;
			DMApp1->ADOCommand1->Parameters->ParamByName("clname")->Value = edtCName->Text;
			DMApp1->ADOCommand1->Parameters->ParamByName("clsurname")->Value = edtCSurname->Text;
			DMApp1->ADOCommand1->Parameters->ParamByName("cldob")->Value = DateTimePicker1->Date;
			DMApp1->ADOCommand1->Parameters->ParamByName("clid")->Value = cIDNum->Text;
			DMApp1->ADOCommand1->Parameters->ParamByName("clphone")->Value = edtPhNum->Text;

			DMApp1->ADOCommand1->Execute();
			DMApp1->DataSetClient->Refresh();
			ShowMessage (edtCName->Text + " " + edtCSurname->Text + "'s details have been captured.");
			DMApp1->DataSetClient->Close();  // Refresh database grid
			DMApp1->DataSetClient->Open();
		}

	}
	catch (EConvertError &ex)
	{
		ShowMessage ("Enter a number for the *insert error here*.");
	}
	catch (Exception &ex)
	{
		ShowMessage ("We couldn't save your changes. Here's why.\n" + ex.Message);
	}
}
//---------------------------------------------------------------------------
