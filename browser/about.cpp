//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "about.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFProg *FProg;
//---------------------------------------------------------------------------
__fastcall TFProg::TFProg(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TFProg::Timer1Timer(TObject *Sender)
{
Image1->Visible=false;
Image2->Visible=true;
Timer1->Enabled=false;
Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFProg::Timer2Timer(TObject *Sender)
{
Image1->Visible=true;
Image2->Visible=false;
Timer1->Enabled=true;
Timer2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TFProg::Button1Click(TObject *Sender)
{
Close();
}


