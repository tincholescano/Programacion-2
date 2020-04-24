/* En este archivo se implementan los metodos de la clase Fecha definida en Fecha.h */

#include "Fecha.h" // Importa los elementos en fecha.h

// Constructor que inicializa la fecha en 01/01/1900
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
}

// Metodos de carga y muestra de los datos miembro
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

// Comprueba que la fecha sea valida, devuelve 1 si es valida o 0 si es no lo es
int Fecha::valida(){
    // Si el dia es menor a 1 o mayor a 31 o si el mes es menor a 0 o mayor a 12, no es valida
    if (dia<1 ||dia>31 ||mes<1 ||mes>12) return 0;

    // Si el dia es mayor a 30, siendo su mes 4, 6, 9 o 11, no es valida
    if (dia>30 && (mes==4||mes==6||mes==9||mes==11)) return 0;

    // Si el dia es mayor a 29 y su mes es 2, no es valida
    if (dia>29 && mes==2) return 0;

    // Si el dia es mayor a 28 y su mes es 2, y dividiendo el año por 4 da un resto distinto a 0, no es valida
    if (dia>28 && mes==2 && anio%4!=0) return 0;

    // Si no se da ninguno de los casos anteriores, devuelve 1
    return 1;
}

// Incrementa la fecha en 1 día
void Fecha::manana(){
    dia++; // Incrementa en uno el dia
    if (!valida()){ // Si el dia es mayor a los dias del mes
        dia=1; // La fecha pasa a ser 1
        mes++; // Incrementa en uno al mes
        if (!valida()){ // Si el mes es mayor a 12
            mes=1; // El mes pasa a ser 1
            anio++; // Incrementa en uno al año
            }
        }
}

// Decrementa la fecha en 1 día
void Fecha::ayer(){
    dia--; // Decrementa en uno el dia
    if (!valida()){ // Si el dia es menor a 1
        mes--; // Decrementa en uno al mes
        dia=dias(dia); // El dia pasa a ser el ultimo dia respecto al mes
        if (!valida()){ // Si el mes es menor a 1
            mes=12; // El mes pasa a ser 12
            anio--; // Decrementa en uno al año
            }
        }
}

// Funcion que devuelve el ultimo dia de cada mes
int Fecha::dias(int m){
    if (dia>30 && (mes==4||mes==6||mes==9||mes==11)) return 30; // Si el mes es 4, 6, 9 o 11, devuelve 30
    if (dia>29 && mes==2) return 29; // Si es año biciesto devuelve 29
    if (dia>28 && mes==2 && anio%4!=0) return 28; // Si no es año biciesto devuelve 28
    return 31; // Si no se da ninguno de los casos anteriores, devuelve 31
}

// Calcula la fecha resultante de sumar a una fecha una cierta cantidad de dias
Fecha Fecha::sumar(int d){
    Fecha f(dia,mes,anio); // Asigna el nombre f a la fecha
    for (int i=0; i<d; i++){ // El ciclo se repite "d" veces
        f.manana(); // Incrementa en uno la fecha
    }
    return f; // Retorna la fecha incrementada "d" dias
}

// Calcula la fecha resultante de restar a una fecha una cierta cantidad de dias
Fecha Fecha::restar(int d){
    Fecha f(dia,mes,anio); // Asigna el nombre f a la fecha
    for (int i=0; i<d; i++){ // El ciclo se repite "d" veces
        f.ayer(); // Decrementa en uno la fecha
    }
    return f; // Retorna la fecha decrementada "d" dias
}
