//---------------------------------------------------------------------------

#ifndef SugarEditorFormH
#define SugarEditorFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TSugarEditor : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TComboBox *SugarSachetsEdit;
        TBitBtn *SugarEditorCancel;
        TBitBtn *SugarEditorOK;
        TLabel *SugarEditorPriceLabel;
    TLabel *Label4;
    void __fastcall SugarSachetsEditChange(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSugarEditor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSugarEditor *SugarEditor;
//---------------------------------------------------------------------------
#endif
