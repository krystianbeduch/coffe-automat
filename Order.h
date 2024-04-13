//---------------------------------------------------------------------------

#ifndef OrderH
#define OrderH
//---------------------------------------------------------------------------
#include <system.hpp>
#include "baseProducts.h"
#include "Sugar.h"

class Order {
      public:
             Order(BaseProducts * base, Sugar * sugar);

             void showPriceOnAmmountToPayLabel(AnsiString product);

             double getPriceOfOrder();
             void setPriceOfOrder(double price);

             void setOrderProduct(AnsiString product);
             AnsiString getOrderProduct();

             void throwCoin(double &priceToPay, int coin);
             boolean isPayed(double priceToPay);
             void paymentDone();
             AnsiString spentChange(double change);

             void orderReadyToStart();
             void prepareOrder();
             void collectOrder();
             void clearMenuRadioButtons();

             BaseProducts * base;
             Sugar * sugar;

      private:
             double priceOfOrder;
             AnsiString productOfOrder;
};
extern Order * order;

#endif