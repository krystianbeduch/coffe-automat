//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TLabel *Label2;
    TLabel *Label1;
    TLabel *ToPayLabel;
    TLabel *Label3;
    TSpeedButton *Pay2zlButton;
    TSpeedButton *Pay10grButton;
    TSpeedButton *Pay20grButton;
    TSpeedButton *Pay1zlButton;
    TSpeedButton *Pay50grButton;
    TSpeedButton *Pay5zlButton;
    TLabel *Label4;
    TLabel *RestLabel;
    TBitBtn *PaymentExitButton;
    void __fastcall Pay10grButtonClick(TObject *Sender);
    void __fastcall Pay20grButtonClick(TObject *Sender);
    void __fastcall Pay50grButtonClick(TObject *Sender);
    void __fastcall Pay1zlButtonClick(TObject *Sender);
    void __fastcall Pay2zlButtonClick(TObject *Sender);
    void __fastcall Pay5zlButtonClick(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm3(TComponent* Owner);
    int convertToInt(double price);
    double convertToDouble(int price);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
