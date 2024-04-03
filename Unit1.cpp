//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//Order * order = nullptr;
//Order * order;
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
// GreenRgn = CreateEllipticRgn( 140, 50, 300, 300 );

// CombineRgn( BckgRgn, BckgRgn, GreenRgn, RGN_OR );
// CombineRgn( FaceRgn, FaceRgn, REyeRgn, RGN_XOR );
// CombineRgn( FaceRgn, FaceRgn, SmileRgn, RGN_XOR );

 SetWindowRgn( Handle, BckgRgn, true );

 order = new Order();


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

void __fastcall TForm1::EditSugarButton2Click(TObject *Sender)
{
    Form2->ShowModal();
    if (Form2->ModalResult == mrOk) {
       int sugar = StrToInt(Form2->SugarSachetsEdit->Text);
       EditSugarButton->Caption = sugar;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditSugarButtonClick(TObject *Sender)
{
    Form2->ShowModal();
    if (Form2->ModalResult == mrOk) {
       int sugar = StrToInt(Form2->SugarSachetsEdit->Text);
       EditSugarButton->Caption = sugar;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LargeBlackCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("LargeBlackCoffee");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmallBlackCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("SmallBlackCoffee");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LargeWhiteCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("LargeWhiteCoffee");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmallWhiteCoffeeButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("SmallWhiteCoffee");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChocolateWithMilkButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("ChocolateWithMilk");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChocolateButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("Chocolate");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BlackTeaButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("BlackTea");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RaspberryTeaButtonClick(TObject *Sender)
{
     order->showPriceOnAmmountToPayLabel("RaspberryTea");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PaymentButtonClick(TObject *Sender)
{
     Form3->ShowModal();
     if (Form3->ModalResult == mrOk) {

    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
    delete order;
}
//---------------------------------------------------------------------------


