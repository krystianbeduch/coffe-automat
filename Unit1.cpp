//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "baseProducts.h"
#include "Order.h"
#include "Sugar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Order * order;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
    HRGN BckgRgn, GreenRgn;
    BckgRgn = CreateRoundRectRgn( 53, 30, 367, 625, 20, 20 );
    SetWindowRgn( Handle, BckgRgn, true );

    order = new Order(new BaseProducts(), new Sugar());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
     Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ImageAutomatMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
  if (Button == mbLeft)
  {
    // Ocygan Windows -- ze przycisk zostal puszczony
    SendMessage(Handle, WM_LBUTTONUP, 0, 0);
    // Ocygan Windows -- ze zostal nacisniety w obrebie paska tytulu
    SendMessage(Handle, WM_NCLBUTTONDOWN, HTCAPTION, 0);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditSugarButtonClick(TObject *Sender)
{
    Form2->ShowModal();
    if (Form2->ModalResult == mrOk) {
        EditSugarButton->Caption = order->sugar->getSugar();

        double newPrice = order->getPriceOfOrder();
        order->setPriceOfOrder(newPrice);

        AnsiString formattedPrice = FormatFloat("0.00", order->getPriceOfOrder());
        AmmountToPayLabel->Caption = formattedPrice;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LargeBlackCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("LargeBlackCoffee");
     order->setOrderProduct("LargeBlackCoffee");
     order->setPriceOfOrder(order->base->getPrice("LargeBlackCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmallBlackCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("SmallBlackCoffee");
     order->setOrderProduct("SmallBlackCoffee");
     order->setPriceOfOrder(order->base->getPrice("SmallBlackCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LargeWhiteCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("LargeWhiteCoffee");
     order->setOrderProduct("LargeWhiteCoffee");
     order->setPriceOfOrder(order->base->getPrice("LargeWhiteCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmallWhiteCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("SmallWhiteCoffee");
     order->setOrderProduct("SmallWhiteCoffee");
     order->setPriceOfOrder(order->base->getPrice("SmallWhiteCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChocolateWithMilkButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("ChocolateWithMilk");
     order->setOrderProduct("ChocolateWithMilk");
     order->setPriceOfOrder(order->base->getPrice("ChocolateWithMilk"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChocolateButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("Chocolate");
     order->setOrderProduct("Chocolate");
     order->setPriceOfOrder(order->base->getPrice("Chocolate"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BlackTeaButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("BlackTea");
     order->setOrderProduct("BlackTea");
     order->setPriceOfOrder(order->base->getPrice("BlackTea"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RaspberryTeaButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("RaspberryTea");
     order->setOrderProduct("RaspberryTea");
     order->setPriceOfOrder(order->base->getPrice("RaspberryTea"));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PaymentButtonClick(TObject *Sender)
{
     Form3->ShowModal();
     if (Form3->ModalResult == mrOk) {
         order->orderReadyToStart();
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
    delete order;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StartButtonClick(TObject *Sender)
{
    order->prepareOrder();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CollectButtonClick(TObject *Sender)
{
    // RESET ORDER
    order->collectOrder();
    order->clearMenuRadioButtons();

    delete order;
    order = new Order(new BaseProducts(), new Sugar());
}
