//---------------------------------------------------------------------------

#ifndef DMAppH
#define DMAppH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDMApp1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *conDB;
	TADODataSet *DataSetClient;
	TDataSource *dsClient;
	TADOCommand *ADOCommand1;
	TADODataSet *DataSetSearch1;
	TDataSource *dsSearch1;
	TADOCommand *ADOCommand2;
private:	// User declarations
public:		// User declarations
	__fastcall TDMApp1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDMApp1 *DMApp1;
//---------------------------------------------------------------------------
#endif
