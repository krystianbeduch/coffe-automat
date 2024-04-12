//---------------------------------------------------------------------------

#ifndef OrderH
#define OrderH
//---------------------------------------------------------------------------
#include <map>
#include <system.hpp>
#include "baseProducts.h"

//---------------------------------------------------------------------------
class Order {
      public:
             Order(BaseProducts * base);
             //double getPrice(AnsiString product);
             //void addProduct(AnsiString product, double price);

             void showPriceOnAmmountToPayLabel(AnsiString product);

             double getPriceOfOrder();
             void setPriceOfOrder(double price);

             void setOrderProduct(AnsiString product);
             AnsiString getOrderProduct();

             double setPriceWithSugar(int howManySugar);

             boolean isPayed(double priceToPay);
             void paymentDone();
             AnsiString spentChange(double change);

             int convertToInt(int price);
             double convertToDouble(int price);

             void prepareOrder();
             BaseProducts * base;

      private:
             std::map<AnsiString, double> listOfProducts;
             double priceOfOrder;
             AnsiString productOfOrder;


};
extern Order * order;



#endif