//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

double price = 5;


void __fastcall TForm3::Pay10grButtonClick(TObject *Sender)
{
     price -= 0.1;
     ToPayLabel->Caption = FloatToStr(price);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{
     ToPayLabel->Caption = FloatToStr(5);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay20grButtonClick(TObject *Sender)
{
     price -= 0.2;
     ToPayLabel->Caption = FloatToStr(price);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay50grButtonClick(TObject *Sender)
{
     price -= 0.5;
     ToPayLabel->Caption = FloatToStr(price);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay1zlButtonClick(TObject *Sender)
{
     price -= 1;
     ToPayLabel->Caption = FloatToStr(price);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay2zlButtonClick(TObject *Sender)
{
     price -= 2;
     ToPayLabel->Caption = FloatToStr(price);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay5zlrButtonClick(TObject *Sender)
{
     price -= 5;
     ToPayLabel->Caption = FloatToStr(price);
     if (price <= 0) {
        Label4->Visible = true;
        RestLabel->Visible = true;
        RestLabel->Caption = "iles tam";
        PaymentExitButton->ModalResult = mrOk;
        PaymentExitButton->Caption = "Zakoñcz p³atnoœæ";
        PaymentExitButton->Kind = bkOK;
     }
}
//---------------------------------------------------------------------------
