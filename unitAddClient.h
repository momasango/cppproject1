//---------------------------------------------------------------------------

#ifndef unitAddClientH
#define unitAddClientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include "DMApp.h"
#include "mainAppliUnit.h"
//---------------------------------------------------------------------------
class TformAddInformation : public TForm
{
__published:	// IDE-managed Components
	TEdit *edtCName;
	TLabel *Label1;
	TEdit *edtCaseNum;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *edtCSurname;
	TLabel *Label4;
	TEdit *edtPhNum;
	TLabel *Label5;
	TEdit *cIDNum;
	TLabel *Label6;
	TDateTimePicker *DateTimePicker1;
	TButton *btnAdd;
	void __fastcall btnAddClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TformAddInformation(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TformAddInformation *formAddInformation;
//---------------------------------------------------------------------------
#endif
