//---------------------------------------------------------------------------
#include <windows.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
  ShellExecute(NULL, "open", "http://notepad-plus-plus.org/download/",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
  ShellExecute(NULL, "open", "http://www.java.com",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
  ShellExecute(NULL, "open", "http://dl.bukkit.org/downloads/craftbukkit/list/rb/",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Application->GetNamePath();
   ShellExecute(NULL, "open", "plugins",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Application->GetNamePath();
   ShellExecute(NULL, "open", "bukkit.yml",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Application->GetNamePath();
   ShellExecute(NULL, "open", "server.properties",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
Application->GetNamePath();
AnsiString parameters = "-Xmx" + Edit1->Text + "m -jar server.jar";
ShellExecute(Handle, "open", "java.exe", parameters.c_str(), NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button8Click(TObject *Sender)
{
Application->GetNamePath();
   ShellExecute(NULL, "open", "mods",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
  ShellExecute(NULL, "open", "https://s3.amazonaws.com/MinecraftDownload/launcher/minecraft_server.jar",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
ShellExecute(NULL, "open", "http://www.technicpack.net/tekkit",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image1Click(TObject *Sender)
{
  ShellExecute(NULL, "open", "http://creativecommons.org/licenses/by-nc-nd/3.0",
                NULL, NULL, SW_SHOWNORMAL);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
  ShellExecute(NULL, "open", "mailto:lion.lorena@ovi.com",
                NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

