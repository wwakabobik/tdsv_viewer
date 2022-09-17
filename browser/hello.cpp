//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hello.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFLog *FLog;
//---------------------------------------------------------------------------
__fastcall TFLog::TFLog(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFLog::FormClick(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TFLog::Timer1Timer(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TFLog::FormClose(TObject *Sender, TCloseAction &Action)
{
Action = caFree;        
}
//---------------------------------------------------------------------------

