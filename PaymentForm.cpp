
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PaymentForm.h"
#include "Order.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPayment *Payment;
//---------------------------------------------------------------------------
__fastcall TPayment::TPayment(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
double priceToPay = 0;

void __fastcall TPayment::Pay10grButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 1);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------

void __fastcall TPayment::Pay20grButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 2);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TPayment::Pay50grButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 5);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TPayment::Pay1zlButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 10);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TPayment::Pay2zlButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 20);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TPayment::Pay5zlButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 50);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------


void __fastcall TPayment::FormShow(TObject *Sender)
{
     priceToPay = order->getPriceOfOrder();
     priceToPay *= 10;
     AnsiString formattedPrice = FormatFloat("0.00", priceToPay / 10);
     ToPayLabel->Caption = formattedPrice;

     TSpeedButton * buttons[] = {
         Payment->Pay10grButton,
         Payment->Pay20grButton,
         Payment->Pay50grButton,
         Payment->Pay1zlButton,
         Payment->Pay2zlButton,
         Payment->Pay5zlButton
     };
     for (int i = 0; i < sizeof(buttons) / sizeof(buttons[0]); i++) {
         buttons[i]->Enabled = true;
     }

     Payment->Label4->Visible = false;
     Payment->RestLabel->Visible = false;
     Payment->PaymentExitButton->ModalResult = mrCancel;
     Payment->PaymentExitButton->Kind = bkCancel;
     Payment->PaymentExitButton->Caption = "Abort payment";
}
//---------------------------------------------------------------------------

