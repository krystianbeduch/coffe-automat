//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VendorForm.h"
#include "baseProducts.h"
#include "Order.h"
#include "Sugar.h"
#include "PaymentForm.h"
#include "SugarEditorForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVendor *Vendor;
Order * order;
//---------------------------------------------------------------------------
__fastcall TVendor::TVendor(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TVendor::FormCreate(TObject *Sender)
{
    HRGN BckgRgn, GreenRgn;
    BckgRgn = CreateRoundRectRgn( 53, 30, 367, 625, 20, 20 );
    SetWindowRgn( Handle, BckgRgn, true );

    order = new Order(new BaseProducts(), new Sugar());
}
//---------------------------------------------------------------------------

void __fastcall TVendor::SpeedButton1Click(TObject *Sender)
{
     Close();
}
//---------------------------------------------------------------------------

void __fastcall TVendor::ImageAutomatMouseDown(TObject *Sender,
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

void __fastcall TVendor::EditSugarButtonClick(TObject *Sender)
{
    SugarEditor->ShowModal();
    if (SugarEditor->ModalResult == mrOk) {
        EditSugarButton->Caption = order->sugar->getSugar();

        double newPrice = order->getPriceOfOrder();
        order->setPriceOfOrder(newPrice);

        AnsiString formattedPrice = FormatFloat("0.00", order->getPriceOfOrder());
        AmmountToPayLabel->Caption = formattedPrice;
    }
}
//---------------------------------------------------------------------------

void __fastcall TVendor::LargeBlackCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("LargeBlackCoffee");
     order->setOrderProduct("LargeBlackCoffee");
     order->setPriceOfOrder(order->base->getPrice("LargeBlackCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::SmallBlackCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("SmallBlackCoffee");
     order->setOrderProduct("SmallBlackCoffee");
     order->setPriceOfOrder(order->base->getPrice("SmallBlackCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::LargeWhiteCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("LargeWhiteCoffee");
     order->setOrderProduct("LargeWhiteCoffee");
     order->setPriceOfOrder(order->base->getPrice("LargeWhiteCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::SmallWhiteCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("SmallWhiteCoffee");
     order->setOrderProduct("SmallWhiteCoffee");
     order->setPriceOfOrder(order->base->getPrice("SmallWhiteCoffee"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::ChocolateWithMilkButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("ChocolateWithMilk");
     order->setOrderProduct("ChocolateWithMilk");
     order->setPriceOfOrder(order->base->getPrice("ChocolateWithMilk"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::ChocolateButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("Chocolate");
     order->setOrderProduct("Chocolate");
     order->setPriceOfOrder(order->base->getPrice("Chocolate"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::BlackTeaButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("BlackTea");
     order->setOrderProduct("BlackTea");
     order->setPriceOfOrder(order->base->getPrice("BlackTea"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::RaspberryTeaButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("RaspberryTea");
     order->setOrderProduct("RaspberryTea");
     order->setPriceOfOrder(order->base->getPrice("RaspberryTea"));
}
//---------------------------------------------------------------------------

void __fastcall TVendor::PaymentButtonClick(TObject *Sender)
{
     Payment->ShowModal();
     if (Payment->ModalResult == mrOk) {
         order->orderReadyToStart();
     }
}
//---------------------------------------------------------------------------

void __fastcall TVendor::FormDestroy(TObject *Sender)
{
    delete order;
}
//---------------------------------------------------------------------------

void __fastcall TVendor::StartButtonClick(TObject *Sender)
{
    order->prepareOrder();
}
//---------------------------------------------------------------------------

void __fastcall TVendor::CollectButtonClick(TObject *Sender)
{
    // RESET ORDER
    order->collectOrder();
    order->clearMenuRadioButtons();

    delete order;
    order = new Order(new BaseProducts(), new Sugar());
}
