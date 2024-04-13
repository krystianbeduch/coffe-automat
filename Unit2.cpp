//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
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

double originalPriceOfOrder;

void __fastcall TForm2::SugarSachetsEditChange(TObject *Sender)
{
    double newPrice = 0;
    int sugar = StrToInt(SugarSachetsEdit->Text);
    if (sugar == 0) {
        order->sugar->setSugar(0);
        newPrice = originalPriceOfOrder + order->sugar->getPriceWithSugar(0);
    }
    else {
        order->sugar->setSugar(sugar);
        newPrice = originalPriceOfOrder + order->sugar->getPriceWithSugar(sugar);
    }
    order->setPriceOfOrder(newPrice);

    AnsiString formattedPrice = FormatFloat("0.00", newPrice);
    SugarEditorPriceLabel->Caption = formattedPrice;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormShow(TObject *Sender)
{
     originalPriceOfOrder = order->base->getPrice(order->getOrderProduct());
     AnsiString formattedPrice = FormatFloat("0.00", originalPriceOfOrder);
     SugarEditorPriceLabel->Caption = formattedPrice;
     SugarSachetsEdit->ItemIndex = 1;
     order->sugar->setSugar(1);
}
//---------------------------------------------------------------------------

