//---------------------------------------------------------------------------

#ifndef VendorFormH
#define VendorFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TVendor : public TForm
{
__published:	// IDE-managed Components
        TImage *ImageAutomat;
        TSpeedButton *SpeedButton1;
    TPanel *StatusOrder;
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
    TPanel *PaymentPanel;
    TSpeedButton *PaymentButton;
    TPanel *PrepareOrderTimePanel;
    TPanel *Panel15;
    TPanel *Panel14;
    TPanel *Panel13;
    TPanel *Panel12;
    TPanel *Panel11;
        TSpeedButton *TakeCupButton;
    TPanel *StartPanel;
    TSpeedButton *StartButton;
    TSpeedButton *CollectButton;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall ImageAutomatMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
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
    void __fastcall StartButtonClick(TObject *Sender);
    void __fastcall CollectButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TVendor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVendor *Vendor;
//---------------------------------------------------------------------------
#endif
 