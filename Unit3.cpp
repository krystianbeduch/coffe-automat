//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
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
/*
int priceToPayInt = 0;
double priceToPayDouble = 0;

int TForm3::convertToInt(double price){
    return static_cast<int>(price * 100);
}

double TForm3::convertToDouble(int price){
    return price / 100.0;
}

*/
void __fastcall TForm3::Pay10grButtonClick(TObject *Sender)
{
     //priceToPay -= 0.1;

     priceToPay -= 1;
     //priceToPayDouble = order->convertToDouble(priceToPay);

//     ToPayLabel->Caption = FloatToStr(priceToPay);
     ToPayLabel->Caption = FloatToStr(priceToPay / 10);

     /*
     priceToPayInt -= 1;
     priceToPay = convertToDouble(priceToPayInt);
     ToPayLabel->Caption = FloatToStr(priceToPayInt);

     */
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Pay20grButtonClick(TObject *Sender)
{

     //priceToPay -= 0.2;
     priceToPay -= 2;

     //priceToPayDouble = order->convertToDouble(priceToPay);

//     ToPayLabel->Caption = FloatToStr(priceToPay);
     ToPayLabel->Caption = FloatToStr(priceToPay / 10);

     /*
     priceToPayInt -= 2;
     priceToPay = convertToDouble(priceToPayInt);
     ToPayLabel->Caption = FloatToStr(priceToPayInt);
     */
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay50grButtonClick(TObject *Sender)
{
//     priceToPay -= 0.5;
     priceToPay -= 5;

    //priceToPayDouble = order->convertToDouble(priceToPay);

     //     ToPayLabel->Caption = FloatToStr(priceToPay);
     ToPayLabel->Caption = FloatToStr(priceToPay / 10);

    /* priceToPayInt -= 5;
     priceToPay = convertToDouble(priceToPayInt);
     ToPayLabel->Caption = FloatToStr(priceToPay);
     */
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay1zlButtonClick(TObject *Sender)
{
//     priceToPay -= 1;
     priceToPay -= 10;
     //priceToPayDouble = order->convertToDouble(priceToPay);
//     ToPayLabel->Caption = FloatToStr(priceToPay);
     ToPayLabel->Caption = FloatToStr(priceToPay / 10);

                    /*
     priceToPayInt -= 10;
     priceToPay = convertToDouble(priceToPayInt);
     ToPayLabel->Caption = FloatToStr(priceToPay);
     */
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay2zlButtonClick(TObject *Sender)
{
//     priceToPay -= 2;
     priceToPay -= 20;
     //priceToPayDouble = order->convertToDouble(priceToPay);
//     ToPayLabel->Caption = FloatToStr(priceToPay);
     ToPayLabel->Caption = FloatToStr(priceToPay / 10);

      /*
     priceToPayInt -= 20;
     priceToPay = convertToDouble(priceToPayInt);
     ToPayLabel->Caption = FloatToStr(priceToPay);
     */
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Pay5zlButtonClick(TObject *Sender)
{
//     priceToPay -= 5;
     priceToPay -= 50;
     //priceToPayDouble = order->convertToDouble(priceToPay);
//     ToPayLabel->Caption = FloatToStr(priceToPay);
     ToPayLabel->Caption = FloatToStr(priceToPay / 10);
     if (order->isPayed(priceToPay))
        order->paymentDone();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormShow(TObject *Sender)
{
     priceToPay = order->getPriceOfOrder();


     priceToPay *= 10; ////////


     //////////
     //priceToPayDouble = order->convertToDouble(priceToPay);
     //ToPayLabel->Caption = FloatToStr(priceToPayDouble);
     /////
     //priceToPayInt = convertToInt(priceToPay);


     ToPayLabel->Caption = FloatToStr(priceToPay / 10);
}
//---------------------------------------------------------------------------

