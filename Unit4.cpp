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
     double price = getPrice(product);
     AnsiString formattedPrice = FormatFloat("0.00", price);
     Form1->AmmountToPayLabel->Caption = formattedPrice;
     if (!Form1->Panel2->Visible)
        Form1->Panel2->Visible = true;
     priceOfOrder = price;
}


void Order::showSugarPriceOnSugarEditorPriceLabel(Order order){
     Form2->SugarEditorPriceLabel->Caption = "cos";
}

double Order::getPriceOfOrder(){
       return priceOfOrder;
}
