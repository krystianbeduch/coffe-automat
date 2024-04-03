//---------------------------------------------------------------------------
#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"

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
}

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

     double price = getPrice(product);
     if (sugar == 0) {
        price += order->setPriceWithSugar(0);
     }
     else if (sugar > 1) {
        price += order->setPriceWithSugar(sugar);
     }



     AnsiString formattedPrice = FormatFloat("0.00", price);
     Form1->AmmountToPayLabel->Caption = formattedPrice;
     if (!Form1->Panel2->Visible)
        Form1->Panel2->Visible = true;
}


void Order::showSugarPriceOnSugarEditorPriceLabel(Order order){
     Form2->SugarEditorPriceLabel->Caption = "cos";
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
