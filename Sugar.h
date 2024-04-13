//---------------------------------------------------------------------------

#ifndef SugarH
#define SugarH
//---------------------------------------------------------------------------

class Sugar {
      public:
             Sugar();
             void setSugar(int sugar);
             int getSugar();
             void setPriceOfOneSugar(int priceOfOneSugar);
             double getPriceOfOneSugar();
             double getPriceWithSugar(int sugar);
      private:
             int sugar;
             double priceOfOneSugar;
};
extern Sugar * sugar;

#endif
