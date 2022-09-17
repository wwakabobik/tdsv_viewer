//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "auth.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAvt *FAvt;
//---------------------------------------------------------------------------
__fastcall TFAvt::TFAvt(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFAvt::Button1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall TFAvt::FormClose(TObject *Sender, TCloseAction &Action)
{
Action = caFree;        
}
//---------------------------------------------------------------------------
