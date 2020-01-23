//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "unitSearch.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TformSearch *formSearch;
//---------------------------------------------------------------------------
__fastcall TformSearch::TformSearch(TComponent* Owner)
	: TForm(Owner)
{
	 formSearch->Caption = "Search";
	 edtSearch->Clear();
	 lblAction->Caption = "What do you want to do with the result you searched for?";
	 cmbAction->Items->Add("Nothing, I was just searching.");
	 cmbAction->Items->Add("Schedule and check appointments.");
	 cmbAction->Items->Add("Edit the information.");
	 cmbAction->Items->Add("Inspect the information.");
	 cmbAction->Items->Add("Delete some or all of the information.");
}
//---------------------------------------------------------------------------
void __fastcall TformSearch::edtSearchChange(TObject *Sender)
{
	DMApp1->DataSetSearch1->Connection = DMApp1->conDB;

	DMApp1->DataSetSearch1->Close();
	AnsiString sql = "";
	sql += "SELECT caseNumber as 'Case Number', clientName as 'Client Name', ";
	sql += "clientSurname as 'Client Surname' FROM client WHERE caseNumber LIKE";
	sql += " :caseno OR clientName LIKE :cname OR clientSurname LIKE :csurname";

	DMApp1->DataSetSearch1->CommandText = sql;

	AnsiString searchTerm = edtSearch->Text;
	DMApp1->DataSetSearch1->Parameters->ParamByName("caseno")->Value =
		searchTerm + "%"; // % for partial search
	DMApp1->DataSetSearch1->Parameters->ParamByName("cname")->Value =
		searchTerm + "%";
	DMApp1->DataSetSearch1->Parameters->ParamByName("csurname")->Value =
		searchTerm + "%";
	DMApp1->DataSetSearch1->Open();

	DBGrid1->DataSource = DMApp1->dsSearch1;
	DMApp1->dsSearch1->DataSet = DMApp1->DataSetSearch1;
}
//---------------------------------------------------------------------------


void __fastcall TformSearch::btnActionClick(TObject *Sender)
{
	if (cmbAction->ItemIndex == 1) {
	   // Pull up appointments dialogue

	}
	else
	if (cmbAction->ItemIndex == 2) {
	   // Use the unitAddClient dialogue
	}
	else
	if (cmbAction->ItemIndex == 3) {
	   // Use a ShowMessage because why not?
	   AnsiString inspectInformation = "Client information\nClient name: ";
	   inspectInformation += DMApp1->DataSetSearch1->FieldByName("clientName")->Value;
	   inspectInformation += DMApp1->DataSetSearch1->FieldByName("clientSurname")->Value;
	   inspectInformation += "\nCase Number: ";
	   inspectInformation += DMApp1->DataSetSearch1->FieldByName("caseNumber")->Value;

	   ShowMessage("Here's the information you requested.\n\n" + inspectInformation);
	}
	else
	if (cmbAction->ItemIndex == 4) {
		// Come through with the delete function
	}
	 // This is if they chose the first option,in which case the thing just goes off
    // when pressing OK
}
//---------------------------------------------------------------------------

