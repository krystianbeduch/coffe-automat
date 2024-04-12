//---------------------------------------------------------------------------

#ifndef baseProductsH
#define baseProductsH
#include <system.hpp>
#include <map>
//---------------------------------------------------------------------------

class BaseProducts {
      public:
             BaseProducts();
             double getPrice(AnsiString product);
             void addProduct(AnsiString product, double price);
      private:
              std::map<AnsiString, double> listOfProducts;

};
extern BaseProducts * base;

#endif
