//---------------------------------------------------------------------------

#ifndef mainAppliUnitH
#define mainAppliUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "DMApp.h"
#include "unitAddClient.h"
//---------------------------------------------------------------------------
class TmainForm : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *tbsheetManageInfo;
	TDBGrid *DBGrid1;
	TButton *btnAddClient;
	TButton *Button2;
	TButton *btnUpdate;
	TButton *btnSearch;
	TButton *btnBack;
	TButton *btnForward;
	TTabSheet *tbshtManageAppt;
	TTabSheet *tbshtPayment;
	TMemo *memoAppointment;
	TButton *btnSchedule;
	TButton *btnManage;
	void __fastcall btnAddClientClick(TObject *Sender);
	void __fastcall btnUpdateClick(TObject *Sender);
	void __fastcall btnSearchClick(TObject *Sender);
	void __fastcall btnForwardClick(TObject *Sender);
	void __fastcall btnBackClick(TObject *Sender);
	void __fastcall tbsheetManageInfoShow(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TmainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif
