//---------------------------------------------------------------------------

#include "registry.hpp"
#include "SHDocVw_OCX.h"
#include <Buttons.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <OleCtrls.hpp>
#include <StdCtrls.hpp>;
#ifndef browserH
#define browserH
//---------------------------------------------------------------------------
#include "ShellApi.h"
#include "hello.h"
#include "about.h"
#include "auth.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "SHDocVw_OCX.h"
#include <OleCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Dialogs.hpp>
#include <Menus.hpp>
#include <ActnCtrls.hpp>
#include <ActnMan.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------

class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TCppWebBrowser *CppWebBrowser1;
        TOpenDialog *OpenDialog1;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TControlBar *ControlBar1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TMenuItem *N3;
        TOpenDialog *OpenDialog2;
        TOpenDialog *OpenDialog3;
        TMenuItem *N4;
        TMenuItem *N5;
        TComboBox *CBURL;
        TStatusBar *StatusBar1;
        TSaveDialog *SaveDialog1;
        TMenuItem *N6;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TSpeedButton *SpeedButton7;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *TDSVViewer1;
        TMenuItem *N10;
        TSaveDialog *SaveDialog2;
        TMenuItem *COD1;
        TPrintDialog *PrintDialog1;
        TMenuItem *N11;
        TPrinterSetupDialog *PrinterSetupDialog1;
        TButton *Button1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall CBURLKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall CBURLClick(TObject *Sender);
        void __fastcall CppWebBrowser1BeforeNavigate2(TObject *Sender,
          LPDISPATCH pDisp, Variant *URL, Variant *Flags,
          Variant *TargetFrameName, Variant *PostData, Variant *Headers,
          VARIANT_BOOL *Cancel);
        void __fastcall CppWebBrowser1ProgressChange(TObject *Sender,
          long Progress, long ProgressMax);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton7Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall TDSVViewer1Click(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall COD1Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
 void __fastcall Load();
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
