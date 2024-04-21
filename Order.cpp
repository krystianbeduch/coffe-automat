//---------------------------------------------------------------------------
#include "Order.h"
#include "baseProducts.h"
#include "Sugar.h"
#include "PaymentForm.h"
#include "SugarEditorForm.h"
#include "VendorForm.h"
//---------------------------------------------------------------------------
Order::Order(BaseProducts * base, Sugar * sugar){
    Order::base = base;
    Order::sugar = sugar;
}

void Order::showPriceOnAmmountToPayLabel(AnsiString product){
    int sugar = order->sugar->getSugar();
    Vendor->EditSugarButton->Enabled = true;
    double price = base->getPrice(product);
    if (sugar == 0) {
       price += order->sugar->getPriceWithSugar(0);
    }
    else if (sugar > 1) {
        price += order->sugar->getPriceWithSugar(sugar);
    }

    AnsiString formattedPrice = FormatFloat("0.00", price);
    Vendor->AmmountToPayLabel->Caption = formattedPrice;
    Vendor->PaymentPanel->Visible = true;
}

double Order::getPriceOfOrder(){
    return priceOfOrder;
}

void Order::setPriceOfOrder(double price){
    priceOfOrder = price;
}

void Order::setOrderProduct(AnsiString product){
    productOfOrder = product;
}

AnsiString Order::getOrderProduct(){
    return productOfOrder;
}

void Order::throwCoin(double &priceToPay, int coin){
    priceToPay -= coin;
    AnsiString formattedPrice = FormatFloat("0.00", priceToPay / 10);
    Payment->ToPayLabel->Caption = formattedPrice;
}

boolean Order::isPayed(double priceToPay){
    if (priceToPay <= 0)
       return true;
    else
        return false;
}

void Order::paymentDone(){
     TSpeedButton * buttons[] = {
         Payment->Pay10grButton,
         Payment->Pay20grButton,
         Payment->Pay50grButton,
         Payment->Pay1zlButton,
         Payment->Pay2zlButton,
         Payment->Pay5zlButton
     };

     for (int i = 0; i < sizeof(buttons) / sizeof(buttons[0]); i++) {
         buttons[i]->Enabled = false;
     }

     Payment->Label4->Visible = true;
     Payment->RestLabel->Visible = true;

     double change = StrToFloat(Payment->ToPayLabel->Caption);
     Payment->RestLabel->Caption = spentChange(-change);
     Payment->ToPayLabel->Caption = "0";

     Payment->PaymentExitButton->ModalResult = mrOk;
     Payment->PaymentExitButton->Caption = "Zakoñcz p³atnoœæ";
     Payment->PaymentExitButton->Kind = bkOK;
}

AnsiString Order::spentChange(double change){
     change *= 10;
     AnsiString nominals = "";
     do {
		if (change >= 1 && change < 2) {
            nominals += "10gr ";
            change -= 1;
		}
		else if(change >= 2 && change < 5) {
            nominals += "20gr ";
            change -= 2;
		}
		else if(change >= 5 && change < 10) {
            nominals += "50gr ";
            change -= 5;
		}
		else if(change >= 10 && change < 20) {
            nominals += "1zl ";
            change -= 10;
		}
		else if(change >= 20 && change < 50) {
            nominals += "2zl ";
            change -= 20;
		}
        else {
             nominals += "Zap³acono równo";
        }
     }
     while(!(change < 1));
     return nominals;
}

void Order::orderReadyToStart(){
     Vendor->EditSugarButton->Enabled = false;
     Vendor->PaymentButton->Enabled = false;
     Vendor->MenuGroupBox->Enabled = false;

     Vendor->StatusOrder->Color = clYellow;
     setPriceOfOrder(0);
     AnsiString formattedPrice = FormatFloat("0.00", getPriceOfOrder());
     Vendor->AmmountToPayLabel->Caption = formattedPrice;

     Vendor->StartPanel->Visible = true;
     Vendor->StartButton->Visible = true;
}

void Order::prepareOrder(){
     Vendor->StartButton->Enabled = false;
     Vendor->StartButton->Visible = false;

     TPanel *panels[] = {
         Vendor->PrepareOrderTimePanel,
         Vendor->Panel11,
         Vendor->Panel12,
         Vendor->Panel13,
         Vendor->Panel14,
         Vendor->Panel15
     };

     for (int i = 0; i < sizeof(panels) / sizeof(panels[0]); i++) {
         panels[i]->Visible = true;
         Sleep(1000);
     }

     for (int i = 0; i < sizeof(panels) / sizeof(panels[0]); i++) {
        panels[i]->Visible = false;
     }

     Vendor->StatusOrder->Color = clLime;
     Vendor->StartButton->Enabled = true;
     Vendor->CollectButton->Visible = true;
}

void Order::collectOrder(){
     Vendor->EditSugarButton->Enabled = false;
     Vendor->PaymentButton->Enabled = true;
     Vendor->MenuGroupBox->Enabled = true;
     Vendor->StatusOrder->Color = clRed;
     Vendor->CollectButton->Visible = false;
     Vendor->StartPanel->Visible = false;
     Vendor->PaymentPanel->Visible = false;

     sugar->setSugar(1);
     Vendor->EditSugarButton->Caption = sugar->getSugar();
}

void Order::clearMenuRadioButtons(){
    for (int i = 0; i < Vendor->MenuGroupBox->ControlCount; i++) {
        TControl * control = Vendor->MenuGroupBox->Controls[i];
        TRadioButton * radio = dynamic_cast<TRadioButton*>(control);
        radio->Checked = false;
    }
}
