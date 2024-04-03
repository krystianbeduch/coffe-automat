//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
#include <map>
#include <system.hpp>
//---------------------------------------------------------------------------
class Order {
      public:
             Order();
             double getPrice(AnsiString product);
             void addProduct(AnsiString product, double price);

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

      private:
             std::map<AnsiString, double> listOfProducts;
             double priceOfOrder;
             AnsiString productOfOrder;
};
extern Order * order;


#endif
