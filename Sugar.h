//---------------------------------------------------------------------------

#ifndef SugarH
#define SugarH
//---------------------------------------------------------------------------

class Sugar {
      public:
             Sugar();
             void setSugar(int sugar);
             int getSugar();
      private:
              int sugar;

};
extern Sugar * sugar;

#endif
