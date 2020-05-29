#include <iostream>
#include "atleta.h"
using namespace std;

Atleta::Atleta(int num,char *nom,char *nac,float t){
    numero=num;
    nombre=nom;
    nacionalidad=nac;
    tiempo=t;
}

void Atleta::setNumero(int num){
    numero=num;
}

void Atleta::setNombre(char nom){
    *nombre=nom;
}

void Atleta::setNacionalidad(char nac){
    *nacionalidad=nac;
}

void Atleta::setTiempo(float t){
    tiempo=t;
}

char Atleta::getNombre(){
    return *nombre;
}

char Atleta::getNacionalidad(){
    return *nacionalidad;
}

int Atleta::getNumero(){
    return numero;
}

float Atleta::getTiempo(){
    return tiempo;
}
