//---------------------------------------------------------------------------

#pragma hdrstop

#include "backEndUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


client::client()
{
	cName = "";
	cSurname = "";
	cID = 9708276034088;
	cDOB = Now();
	caseNo = 976564;
	cPhoneNo = 27729986080;
}

void setClient(AnsiString clientName, AnsiString clientSurname, AnsiString
clientID, int caseNum, int clientPhoneNum)
{
	cName = clientName;
	cSurname = clientSurname;
	cID = clientID;
	caseNo = caseNum;
	cPhoneNo = clientPhoneNum;
}

void getClient(AnsiString &clientName, AnsiString &clientSurname, AnsiString
&clientID, int &caseNum, int &clientPhoneNum)
{
	clientName = cName;
	clientSurname = cSurname;
	clientID = cID;
	caseNum = caseNo;
    clientPhoneNum = cPhoneNo;
}

AnsiString getName()
{
    return names;
}

AnsiString getSurname()
{
    return surname;
}

AnsiString getID()
{
    return id;
}

int getCaseNo()
{
	return caseNumber;
}

int getClientPhone()
{
    return phone;
}

TDate extractDOB()
{
	return date;
}