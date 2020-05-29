#include "carrera.h"
#include <iostream>

using namespace std;

void Carrera::setCiudad(char c){
    ciudad = c;
}

char Carrera::getCiudad(){
    return ciudad;
}

void Carrera::agregarAtleta(Atleta& a){
    char atletas[a.getNumero()] = new (a.getNumero, a.getNombre, a.getNacionalidad, a.getTiempo);
}

Carrera Carrera::getGanador(){
    for (int i=0;i<3;i++){
        cout<<atletas[i];
    }
}
