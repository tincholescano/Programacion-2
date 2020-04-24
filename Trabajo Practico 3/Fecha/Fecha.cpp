#include "fecha.h"
Fecha::Fecha(){
    dia=1;
    mes=1;
    anio=1900;
}
Fecha::Fecha(int d, int m, int a){
    dia=d;
    mes=m;
    anio=a;
}
void Fecha::setDia(int d){
    dia=d;
}
void Fecha::setMes(int m){
    mes=m;
}
void Fecha::setAnio(int a){
    anio=a;
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
int Fecha::valida(){
    if (dia<1 ||dia>31 ||mes<1 ||mes>12) return 0;
    if (dia>30 && (mes==4||mes==6||mes==9||mes==11)) return 0;
    if (dia>29 && mes==2) return 0;
    if (dia>28 && mes==2 && anio%4!=0) return 0;
    return 1;
}
void Fecha::manana(){
    dia++;
    if (!valida()){dia=1;
        mes++;
    if (!valida()){
        mes=1;
        anio++;
        }
    }
}
void Fecha::ayer(){
    ....
}
int Fecha::dias(int m){
    ..
}
Fecha Fecha::sumar(int d){
    ..
}
Fecha Fecha::restar(int d){
    ..
}
