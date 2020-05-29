#include "avion.h"

Avion::Avion(){
    id = "a";
    carga = 1;
}

Avion::Avion(char* i, int c){
    id = i;
    carga = c;
}

void Avion::setID(char* i){
    id = i;
}

void Avion::setCarga(int c){
    carga = c;
}

char* Avion::getId(){
    return id;
}

int Avion::getCarga(){
    return carga;
};
