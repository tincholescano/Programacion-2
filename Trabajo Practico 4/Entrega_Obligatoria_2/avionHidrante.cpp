#include <iostream>
#include "avionHidrante.h"

using namespace std;

void AvionHidrante::setMaxAgua(int m){
    maxAgua = m;
}

void AvionHidrante::setCantActual(int c){
    cantActual = c;
}

int AvionHidrante::getMaxAgua(){
    return maxAgua;
}

int AvionHidrante::getCantActual(){
    return cantActual;
}

void AvionHidrante::descargarAgua(int c){
    if (cantActual-c>=0) {cantActual -= c;} else {cout<<"La cantidad ingresada debe ser menor o igual a la cantidad actual."<<endl;}
}

void AvionHidrante::mostrarDatos(){
    cout<<"ID: "<<getId()<<endl;
    cout<<"Carga maxima: "<<getCarga()<<"kg"<<endl;
    cout<<"Cantidad maxima de agua: "<<maxAgua<<endl;
    cout<<"Cantidad actual: "<<cantActual<<endl;
}
