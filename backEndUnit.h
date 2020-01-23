//---------------------------------------------------------------------------

#ifndef backEndUnitH
#define backEndUnitH
//---------------------------------------------------------------------------
#endif

class client
{
	private:
	  AnsiString cNames;
	  AnsiString cSurname;
	  TDate cDOB;
	  int cID;
	  int caseNo;
	  int cPhoneNo;

	public:
	  client();
	  void setClient(AnsiString clientName, AnsiString clientSurname, int
	  clientID, int caseNum, int clientPhoneNum);
	  void getClient(AnsiString &clientName, AnsiString &clientSurname, int
	  &clientID, int &caseNum, int &clientPhoneNum);
	  AnsiString getName();
	  AnsiString getSurname();
	  AnsiString getID();
	  int getCaseNo();
	  int getClientPhone();

      TDate extractDOB();


};

