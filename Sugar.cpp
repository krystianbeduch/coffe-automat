//---------------------------------------------------------------------------


#pragma hdrstop

#include "Sugar.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

Sugar::Sugar(){
    setSugar(1);
    priceOfOneSugar = 0.2;
}

void Sugar::setSugar(int sugar){
    if (sugar >= 0)
       Sugar::sugar = sugar;
}

int Sugar::getSugar(){
    return Sugar::sugar;
}

void Sugar::setPriceOfOneSugar(int priceOfOneSugar){
    if (priceOfOneSugar > 0)
       Sugar::priceOfOneSugar = priceOfOneSugar;
}

double Sugar::getPriceOfOneSugar(){
    return Sugar::priceOfOneSugar;
}

double Sugar::getPriceWithSugar(int sugar){
    if (sugar == 0)
        return -(getPriceOfOneSugar());
    else if (sugar > 1)
        return getPriceOfOneSugar() * (sugar - 1);
        
    return 0;
}
