//---------------------------------------------------------------------------


#include <vcl.h>
#pragma hdrstop
#include "browser.h"
//---------------------------------------------------------------------------
USEFORM("browser.cpp", Form1);
USEFORM("hello.cpp", FLog);
USEFORM("about.cpp", FProg);
USEFORM("auth.cpp", FAvt);
#include "browser.cpp"
//---------------------------------------------------------------------------

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR S, int)
{
if (S[1]>0)
exec=S;
        try
        {
                 Application->Initialize();
                 Application->Title = "TDSV Viewer";
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TFLog), &FLog);
                 Application->CreateForm(__classid(TFProg), &FProg);
                 Application->CreateForm(__classid(TFAvt), &FAvt);
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




