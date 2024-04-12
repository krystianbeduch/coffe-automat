//---------------------------------------------------------------------------
#pragma hdrstop

#include "baseProducts.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

BaseProducts::BaseProducts() {
    addProduct("LargeBlackCoffee", 5.00);
    addProduct("SmallBlackCoffee", 6.50);
    addProduct("LargeWhiteCoffee", 7.00);
    addProduct("SmallWhiteCoffee", 5.50);
    addProduct("ChocolateWithMilk", 4.50);
    addProduct("Chocolate", 4.00);
    addProduct("BlackTea", 3.00);
    addProduct("RaspberryTea", 3.50);
}

double BaseProducts::getPrice(AnsiString product) {
    if (listOfProducts.find(product) != listOfProducts.end())
       return listOfProducts[product];
    else
       return -1;
}

void BaseProducts::addProduct(AnsiString product, double price){
    listOfProducts[product] = price;
}
