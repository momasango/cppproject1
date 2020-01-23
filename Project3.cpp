//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("unitAddClient.cpp", formAddInformation);
USEFORM("unitSearch.cpp", formSearch);
USEFORM("DMApp.cpp", DMApp1); /* TDataModule: File Type */
USEFORM("mainAppliUnit.cpp", mainForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TmainForm), &mainForm);
		Application->CreateForm(__classid(TformAddInformation), &formAddInformation);
		Application->CreateForm(__classid(TDMApp1), &DMApp1);
		Application->CreateForm(__classid(TformSearch), &formSearch);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
