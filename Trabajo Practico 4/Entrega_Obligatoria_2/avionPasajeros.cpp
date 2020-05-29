#include <iostream>
#include "avionPasajeros.h"

using namespace std;

void AvionPasajeros::setDestino(char* d){
    destino = d;
}

void AvionPasajeros::setDuracion(int d){
    duracion = d;
}

char* AvionPasajeros::getDestino(){
    return destino;
}

int AvionPasajeros::getDuracion(){
    return duracion;
}

void AvionPasajeros::mostrarDatos(){
    cout<<"ID: "<<getId()<<endl;
    cout<<"Carga maxima: "<<getCarga()<<"kg"<<endl;
    cout<<"Ciudad: "<<destino<<endl;
    cout<<"Duracion vuelo: "<<duracion<<endl;
}
