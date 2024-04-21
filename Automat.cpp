//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("VendorForm.cpp", Vendor);
USEFORM("SugarEditorForm.cpp", SugarEditor);
USEFORM("PaymentForm.cpp", Payment);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TVendor), &Vendor);
                 Application->CreateForm(__classid(TSugarEditor), &SugarEditor);
                 Application->CreateForm(__classid(TPayment), &Payment);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
