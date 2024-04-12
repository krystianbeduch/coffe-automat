//---------------------------------------------------------------------------


#pragma hdrstop

#include "Sugar.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

Sugar::Sugar(){
    setSugar(1);
}

void Sugar::setSugar(int sugar){
    if (sugar >= 0) {
       Sugar::sugar = sugar;
    }
}

int Sugar::getSugar(){
    return Sugar::sugar;
}
