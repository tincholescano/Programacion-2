#include "fecha.h"

Fecha::Fecha(){
    dia=1;
    mes=1;
    anio=1900;
}

// Constructor que inicializa la fecha a una fecha dada
Fecha::Fecha(int d, int m, int a){
    dia=d;
    mes=m;
    anio=a;
    fecha[0]=(d,m,a);
}

// Metodos de carga y muestra de los datos miembro
void Fecha::setDia(int d){
    dia=d;
    fecha[0]=d;
}

void Fecha::setMes(int m){
    mes=m;
    fecha[1]=m;
}

void Fecha::setAnio(int a){
    anio=a;
    fecha[2]=a;
}

int Fecha::getDia(){
    return dia;
}

int Fecha::getMes(){
    return mes;
}

int Fecha::getAnio(){
    return anio;
}

int *Fecha::getFecha(){
    return fecha;
}
