//---------------------------------------------------------------------------
#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
Order::Order(){

    addProduct("LargeBlackCoffee", 5.00);
    addProduct("SmallBlackCoffee", 6.50);
    addProduct("LargeWhiteCoffee", 7.00);
    addProduct("SmallWhiteCoffee", 5.50);
    addProduct("ChocolateWithMilk", 4.50);
    addProduct("Chocolate", 4.00);
    addProduct("BlackTea", 3.00);
    addProduct("RaspberryTea", 3.50);

     /*
    addProduct("LargeBlackCoffee", 50);
    addProduct("SmallBlackCoffee", 65);
    addProduct("LargeWhiteCoffee", 70);
    addProduct("SmallWhiteCoffee", 55);
    addProduct("ChocolateWithMilk", 45);
    addProduct("Chocolate", 40);
    addProduct("BlackTea", 30);
    addProduct("RaspberryTea", 35);
    */
}



/*int Order::convertToInt(int price){
    return static_cast<int>(price * 10);
}

double Order::convertToDouble(int price){
    return price / 10.0;
}
*/

//double priceInDouble;

double Order::getPrice(AnsiString product) {
    if (listOfProducts.find(product) != listOfProducts.end())
       return listOfProducts[product];
    else
       return -1;
}

void Order::addProduct(AnsiString product, double price){
    listOfProducts[product] = price;
}

void Order::showPriceOnAmmountToPayLabel(AnsiString product){
    int sugar = StrToInt(Form2->SugarSachetsEdit->Text);
    Form1->EditSugarButton->Enabled = true;

    double price = getPrice(product);
    if (sugar == 0) {
       price += order->setPriceWithSugar(0);
    }
    else if (sugar > 1) {
        price += order->setPriceWithSugar(sugar);
    }

    //priceInDouble = convertToDouble(price); /////////////
    AnsiString formattedPrice = FormatFloat("0.00", price);
    Form1->AmmountToPayLabel->Caption = formattedPrice;
    if (!Form1->Panel2->Visible)
       Form1->Panel2->Visible = true;
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
     Form3->Pay10grButton->Enabled = false;
     Form3->Pay20grButton->Enabled = false;
     Form3->Pay50grButton->Enabled = false;
     Form3->Pay1zlButton->Enabled = false;
     Form3->Pay2zlButton->Enabled = false;
     Form3->Pay5zlButton->Enabled = false;

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

     change *= 10;///
     AnsiString nominals = "";
     /*
     do{
		if (change >= 0.1 && change < 0.2) {
            nominals += "10gr ";
            change -= 0.1;
		}
		else if(change >= 0.2 && change < 0.5){
            nominals += "20gr ";
            change -= 0.2;
		}
		else if(change >= 0.5 && change < 1){
            nominals += "50gr ";
            change -= 0.5;
		}
		else if(change >= 1 && change < 2){
            nominals += "1zl ";
            change -= 1;
		}
		else if(change >= 2 && change < 5){
            nominals += "2zl ";
            change -= 2;
		}
     }
     while(!(change < 0.1));
     */

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
             nominals += "5zl ";
             change -= 50;
        }
     }
     while(!(change < 1));
     return nominals;
}

void Order::prepareOrder(){
     Form1->EditSugarButton->Enabled = false;
     Form1->PaymentButton->Enabled = false;
     Form1->MenuGroupBox->Enabled = false;

     Sleep(1000);
     Form1->PrepareOrderTimePanel->Visible = true;
     Form1->Panel11->Visible = true;
     Sleep(1000);
     Form1->Panel12->Visible = true;
     Sleep(1000);
     Form1->Panel13->Visible = true;
     Sleep(1000);
     Form1->Panel14->Visible = true;
     Sleep(1000);
     Form1->Panel15->Visible = true;
     Sleep(1000);
     Form1->PrepareOrderTimePanel->Visible = false;
}
