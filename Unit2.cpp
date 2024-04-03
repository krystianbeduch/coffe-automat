//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SugarSachetsEditChange(TObject *Sender)
{
     int sugar = 1;
     sugar = StrToInt(SugarSachetsEdit->Text);
     if (sugar != 1) {
          if (sugar == 0) {
//             SugarEditorPriceLabel->Caption = "Zamowienie tansze o 0.20 PLN";
             SugarEditorPriceLabel->Caption = FloatToStr(order->getPriceOfOrder());
             //order->showSugarPriceOnSugarEditorPriceLabel(Form1->order);
          }
          else {
             double addPrice = (sugar - 1) * 0.2;
             SugarEditorPriceLabel->Caption = "Zamowienie dodatkowo platne: " + FloatToStr(addPrice) + "0 PLN";

          }
     }
     else {
          SugarEditorPriceLabel->Caption = "";
     }




}
//---------------------------------------------------------------------------

