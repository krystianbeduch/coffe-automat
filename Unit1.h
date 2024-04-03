//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>

//#include "Unit4.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *ImageAutomat;
        TSpeedButton *SpeedButton1;
        TPanel *Panel1;
        TGroupBox *MenuGroupBox;
        TRadioButton *LargeBlackCoffeeButton;
        TRadioButton *SmallBlackCoffeeButton;
        TRadioButton *LargeWhiteCoffeeButton;
        TRadioButton *SmallWhiteCoffeeButton;
        TRadioButton *ChocolateButton;
        TRadioButton *ChocolateWithMilkButton;
        TRadioButton *BlackTeaButton;
        TRadioButton *RaspberryTeaButton;
        TGroupBox *SugarGroupBox;
    TSpeedButton *EditSugarButton;
    TGroupBox *AmmountGroupBox;
    TLabel *AmmountToPayLabel;
    TPanel *Panel2;
    TSpeedButton *PaymentButton;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall ImageAutomatMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall EditSugarButton2Click(TObject *Sender);
    void __fastcall EditSugarButtonClick(TObject *Sender);
    void __fastcall LargeBlackCoffeeButtonClick(TObject *Sender);
    void __fastcall SmallBlackCoffeeButtonClick(TObject *Sender);
    void __fastcall LargeWhiteCoffeeButtonClick(TObject *Sender);
    void __fastcall SmallWhiteCoffeeButtonClick(TObject *Sender);
    void __fastcall ChocolateWithMilkButtonClick(TObject *Sender);
    void __fastcall ChocolateButtonClick(TObject *Sender);
    void __fastcall BlackTeaButtonClick(TObject *Sender);
    void __fastcall RaspberryTeaButtonClick(TObject *Sender);
    void __fastcall PaymentButtonClick(TObject *Sender);
    void __fastcall FormDestroy(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 