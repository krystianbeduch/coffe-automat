//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Order.h"
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
double priceToPay = 0;

void __fastcall TForm3::Pay10grButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 1);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Pay20grButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 2);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay50grButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 5);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay1zlButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 10);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay2zlButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 20);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay5zlButtonClick(TObject *Sender)
{
     order->throwCoin(priceToPay, 50);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormShow(TObject *Sender)
{
     priceToPay = order->getPriceOfOrder();
     priceToPay *= 10;
     AnsiString formattedPrice = FormatFloat("0.00", priceToPay / 10);
     ToPayLabel->Caption = formattedPrice;

     TSpeedButton * buttons[] = {
         Form3->Pay10grButton,
         Form3->Pay20grButton,
         Form3->Pay50grButton,
         Form3->Pay1zlButton,
         Form3->Pay2zlButton,
         Form3->Pay5zlButton
     };
     for (int i = 0; i < sizeof(buttons) / sizeof(buttons[0]); i++) {
         buttons[i]->Enabled = true;
     }

     Form3->Label4->Visible = false;
     Form3->RestLabel->Visible = false;
     Form3->PaymentExitButton->ModalResult = mrCancel;
     Form3->PaymentExitButton->Kind = bkCancel;
     Form3->PaymentExitButton->Caption = "Przerwij p³atnoœæ";
}
//---------------------------------------------------------------------------

