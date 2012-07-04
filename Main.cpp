//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//----------------------------------------------------------------------------
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
	Application->OnHint = ShowHint;
}
//----------------------------------------------------------------------------
void __fastcall TMainForm::ShowHint(TObject *Sender)
{
	StatusLine->SimpleText = Application->Hint;
}
//----------------------------------------------------------------------------
