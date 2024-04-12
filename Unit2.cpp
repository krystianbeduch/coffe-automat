//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//#include "Unit4.h"
#include "Order.h"
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

//double newPrice;

//double originalPriceOfOrder = order->getPriceOfOrder();

double originalPriceOfOrder;

void __fastcall TForm2::SugarSachetsEditChange(TObject *Sender)
{
     int sugar = 1;
     double newPrice = 0;
     sugar = StrToInt(SugarSachetsEdit->Text);
     if (sugar == 0) {
         newPrice = originalPriceOfOrder + order->setPriceWithSugar(0);
     }
     else {
         newPrice = originalPriceOfOrder + order->setPriceWithSugar(sugar);
     }

     //double priceInDouble = order->convertToDouble(newPrice);
     AnsiString formattedPrice = FormatFloat("0.00", newPrice); ////////
     SugarEditorPriceLabel->Caption = formattedPrice;   ///////////////////////////
//     SugarEditorPriceLabel->Caption = newPrice;   //////////////////////////
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormShow(TObject *Sender)
{
     originalPriceOfOrder = order->base->getPrice(order->getOrderProduct());

     //double priceInDouble = order->convertToDouble(originalPriceOfOrder); ////////////////
     AnsiString formattedPrice = FormatFloat("0.00", originalPriceOfOrder); ////
     SugarEditorPriceLabel->Caption = formattedPrice;
     SugarSachetsEdit->ItemIndex = 1;
}
//---------------------------------------------------------------------------

