//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("UMain.cpp", frmMain);
USEFORM("UImageView.cpp", frmImageView);
USEFORM("UReport.cpp", frmReport);
USEFORM("UAbout.cpp", frmAbout);
USEFORM("UCargarImagenes.cpp", frmCargarImagenes);
USEFORM("UHelp.cpp", frmHelp);
USEFORM("UPresentation.cpp", frmPresentation);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "CIPLAI";
                 Application->CreateForm(__classid(TfrmMain), &frmMain);
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
