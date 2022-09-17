//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "install.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistry *Reg0 = new TRegistry;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

#include "SysUtils.hpp"
void __fastcall TForm1::Button1Click(TObject *Sender)
{
//регистрация в реестре
//регистрация в ROOT
Reg0->RootKey = HKEY_CLASSES_ROOT;
//регистрация COD
Reg0->OpenKey("\\.cod",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//регистрация DOS
Reg0->OpenKey("\\.dos",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//регистрация DOB
Reg0->OpenKey("\\.dob",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//регистрация ILKC
Reg0->OpenKey("\\.ilkc",true);
Reg0->WriteString("Content Type","text/enigma");
Reg0->WriteString("Percieved Type","text");
//регистрация в LOCAL_MACHINE
Reg0->RootKey = HKEY_LOCAL_MACHINE;
//Регистрация COD
Reg0->OpenKey("\\Software\\Classes\\.cod",true);
Reg0->OpenKey("\\Software\\Classes\\.cod\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.cod\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.cod\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");
//Регистрация DOS
Reg0->OpenKey("\\Software\\Classes\\.dos",true);
Reg0->OpenKey("\\Software\\Classes\\.dos\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.dos\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.dos\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");
//Регистрация DOB
Reg0->OpenKey("\\Software\\Classes\\.dob",true);
Reg0->OpenKey("\\Software\\Classes\\.dob\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.dob\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.dob\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");
//Регистрация ILKC
Reg0->OpenKey("\\Software\\Classes\\.ilkc",true);
Reg0->OpenKey("\\Software\\Classes\\.ilkc\\shell",true);
Reg0->OpenKey("\\Software\\Classes\\.ilkc\\shell\\open",true);
Reg0->OpenKey("\\Software\\Classes\\.ilkc\\shell\\open\\command",true);
Reg0->WriteString("","\"C:\\Program Files\\TDSV\\TDSVViewer.exe\" %1");

ForceDirectories("C:\\Program Files\\TDSV");
RenameFile("TDSVV.ex0","C:\\Program Files\\TDSV\\TDSVViewer.exe");
//remove("C:\\Program Files\\TDSV\\TDSVViewer.exe");
//RemoveDir("C:\\Program Files\\TDSV");
//if (DirectoryExist("C:\\Documents and Settings\\All Users\\Главное меню\\Программы")==1)
RenameFile("TDSVV.ln0","C:\\Documents and Settings\\All Users\\Главное меню\\Программы\\TDSV Viewer.lnk");
//if (DirectoryExist("C:\\Documents and Settings\\All Users\\Main Menu\\Programs")==true)
RenameFile("TDSVV.ln0","C:\\Documents and Settings\\All Users\\Main Menu\\Programs\\TDSV Viewer.lnk");
//if (DirectoryExist("C:\\WINDOWS\\Main Menu\\Programs")==true)
RenameFile("TDSVV.ln0","C:\\WINDOWS\\Main Menu\\Programs\\TDSV Viewer.lnk");
//if (DirectoryExist("C:\\WINDOWS\\Главное меню\\Программы")==true)
RenameFile("TDSVV.ln0","C:\\WINDOWS\\Главное меню\\Программы\\TDSVV.lnk");
//if (DirectoryExist("C:\\Documents and Settings\\All Users\\Рабочий стол")==true)
RenameFile("TDSVV.ln1","C:\\Documents and Settings\\All Users\\Рабочий стол\\TDSV Viewer.lnk");
//if (DirectoryExist("C:\\Documents and Settings\\All Users\\Desktop")==true)
RenameFile("TDSVV.ln1","C:\\Documents and Settings\\All Users\\Desktop\\TDSV Viewer.lnk");
//if (DirectoryExist("C:\\WINDOWS\\All Users\\Desktop")==true)
RenameFile("TDSVV.ln1","C:\\WINDOWS\\Desktop\\All Users\\TDSV Viewer.lnk");
//if (DirectoryExist("C:\\WINDOWS\\All Users\\Рабочий Стол")==true)
RenameFile("TDSVV.ln1","C:\\WINDOWS\\All Users\\Рабочий Стол\\TDSV Viewer.lnk");
Label1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
//удаление
remove("C:\\Program Files\\TDSV\\TDSVViewer.exe");
RemoveDir("C:\\Program Files\\TDSV");
remove("C:\\Documents and Settings\\All Users\\Главное меню\\Программы\\TDSV Viewer.lnk");
remove("C:\\Documents and Settings\\All Users\\Main Menu\\Programs\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\Main Menu\\Programs\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\Главное меню\\Программы\\TDSVV.lnk");
remove("C:\\Documents and Settings\\All Users\\Рабочий стол\\TDSV Viewer.lnk");
remove("C:\\Documents and Settings\\All Users\\Desktop\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\Desktop\\TDSV Viewer.lnk");
remove("C:\\WINDOWS\\Рабочий Стол\\TDSV Viewer.lnk");
Reg0->RootKey = HKEY_LOCAL_MACHINE;
Reg0->DeleteKey("\\Software\\Classes\\.cod\\shell");
Reg0->DeleteKey("\\Software\\Classes\\.dos\\shell");
Reg0->DeleteKey("\\Software\\Classes\\.dob\\shell");
Reg0->DeleteKey("\\Software\\Classes\\.ilck\\shell");
Label1->Visible=true;
}
//---------------------------------------------------------------------------
