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
             void showSugarPriceOnSugarEditorPriceLabel(Order order);
             double getPriceOfOrder();
      private:
              std::map<AnsiString, double> listOfProducts;
              double priceOfOrder;
};
extern Order * order;


#endif
