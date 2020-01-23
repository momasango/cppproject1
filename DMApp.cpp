//---------------------------------------------------------------------------


#pragma hdrstop

#include "DMApp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDMApp1 *DMApp1;
//---------------------------------------------------------------------------
__fastcall TDMApp1::TDMApp1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
