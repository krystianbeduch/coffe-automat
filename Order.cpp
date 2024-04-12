//---------------------------------------------------------------------------
#include "Order.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "baseProducts.h"
#include "Sugar.h"


//---------------------------------------------------------------------------
Order::Order(BaseProducts * base, Sugar * sugar){
    Order::base = base;
    Order::sugar = sugar;
}

void Order::showPriceOnAmmountToPayLabel(AnsiString product){
    int sugar = StrToInt(Form2->SugarSachetsEdit->Text);
    Form1->EditSugarButton->Enabled = true;

    double price = base->getPrice(product);
    if (sugar == 0) {
       price += order->setPriceWithSugar(0);
    }
    else if (sugar > 1) {
        price += order->setPriceWithSugar(sugar);
    }

    //priceInDouble = convertToDouble(price); /////////////
    AnsiString formattedPrice = FormatFloat("0.00", price);
    Form1->AmmountToPayLabel->Caption = formattedPrice;
    //if (!Form1->PaymentPanel->Visible)
       Form1->PaymentPanel->Visible = true;
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

double Order::setPriceWithSugar(int howManySugar){
    if (howManySugar == 0) {
        return -0.2;
    }
    else if (howManySugar > 1) {
         return 0.2 * (howManySugar - 1);
    }
    return 0;
}

boolean Order::isPayed(double priceToPay){
    if (priceToPay <= 0)
       return true;
    else
        return false;
}

void Order::paymentDone(){
     TSpeedButton * buttons[] = {
         Form3->Pay10grButton,
         Form3->Pay20grButton,
         Form3->Pay50grButton,
         Form3->Pay1zlButton,
         Form3->Pay2zlButton,
         Form3->Pay5zlButton
     };

     for (int i = 0; i < sizeof(buttons) / sizeof(buttons[0]); i++) {
         buttons[i]->Enabled = false;
     }

     Form3->Label4->Visible = true;
     Form3->RestLabel->Visible = true;

     double change = StrToFloat(Form3->ToPayLabel->Caption);
     Form3->RestLabel->Caption = spentChange(-change);
     Form3->ToPayLabel->Caption = "0";

     Form3->PaymentExitButton->ModalResult = mrOk;
     Form3->PaymentExitButton->Caption = "Zakoñcz p³atnoœæ";
     Form3->PaymentExitButton->Kind = bkOK;
}

AnsiString Order::spentChange(double change){

     change *= 10;
     AnsiString nominals = "";
     do{
		if (change >= 1 && change < 2) {
            nominals += "10gr ";
            change -= 1;
		}
		else if(change >= 2 && change < 5){
            nominals += "20gr ";
            change -= 2;
		}
		else if(change >= 5 && change < 10){
            nominals += "50gr ";
            change -= 5;
		}
		else if(change >= 10 && change < 20){
            nominals += "1zl ";
            change -= 10;
		}
		else if(change >= 20 && change < 50){
            nominals += "2zl ";
            change -= 20;
		}
        else {
             nominals += "Zaplacono rowno";
        }
     }
     while(!(change < 1));
     return nominals;
}

void Order::orderReadyToStart(){
     Form1->EditSugarButton->Enabled = false;
     Form1->PaymentButton->Enabled = false;
     Form1->MenuGroupBox->Enabled = false;

     Form1->StatusOrder->Color = clYellow;
     setPriceOfOrder(0);
     AnsiString formattedPrice = FormatFloat("0.00", getPriceOfOrder());
     Form1->AmmountToPayLabel->Caption = formattedPrice;

     Form1->StartPanel->Visible = true;
     Form1->StartButton->Visible = true;
}

void Order::prepareOrder(){
     Form1->StartButton->Enabled = false;
     Form1->StartButton->Visible = false;


     TPanel *panels[] = {
         Form1->PrepareOrderTimePanel,
         Form1->Panel11,
         Form1->Panel12,
         Form1->Panel13,
         Form1->Panel14,
         Form1->Panel15
     };

     for (int i = 0; i < sizeof(panels) / sizeof(panels[0]); i++) {
         panels[i]->Visible = true;
         Sleep(1000);
     }

     for (int i = 0; i < sizeof(panels) / sizeof(panels[0]); i++) {
        panels[i]->Visible = false;
     }


     Form1->StatusOrder->Color = clLime;
     Form1->StartButton->Enabled = true;
     Form1->CollectButton->Visible = true;
}

void Order::collectOrder(){
     Form1->EditSugarButton->Enabled = false;
     Form1->PaymentButton->Enabled = true;
     Form1->MenuGroupBox->Enabled = true;
     Form1->StatusOrder->Color = clRed;
     Form1->CollectButton->Visible = false;
     Form1->StartPanel->Visible = false;
     Form1->PaymentPanel->Visible = false;

     Form1->EditSugarButton->Caption = 1;
     Form2->SugarSachetsEdit->Text = 1;


}

void Order::clearMenuRadioButtons()
{
    for (int i = 0; i < Form1->MenuGroupBox->ControlCount; i++) {
        TControl * control = Form1->MenuGroupBox->Controls[i];
        TRadioButton * radio = dynamic_cast<TRadioButton*>(control);
        radio->Checked = false;
    }
}
