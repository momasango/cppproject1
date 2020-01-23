//---------------------------------------------------------------------------

#ifndef unitSearchH
#define unitSearchH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "DMApp.h"
//---------------------------------------------------------------------------
class TformSearch : public TForm
{
__published:	// IDE-managed Components
	TEdit *edtSearch;
	TButton *btnAction;
	TDBGrid *DBGrid1;
	TButton *btnBack;
	TButton *btnForward;
	TComboBox *cmbAction;
	TLabel *lblAction;
	void __fastcall edtSearchChange(TObject *Sender);
	void __fastcall btnActionClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TformSearch(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TformSearch *formSearch;
//---------------------------------------------------------------------------
#endif
