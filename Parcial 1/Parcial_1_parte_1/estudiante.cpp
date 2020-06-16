#include "estudiante.h"

estudiante::estudiante(){
    numero_de_carnet = 0;
    nombre = "";
    apellido = "";
    primer_parcial = 0;
    segundo_parcial = 0;
    trabajo_practico = 0;
    examen = 0;
}

estudiante::estudiante(long nc, string n, string a, int p1,int p2,int tp,int e){
    numero_de_carnet = nc;
    nombre = n;
    apellido = a;
    primer_parcial = p1;
    segundo_parcial = p2;
    trabajo_practico = tp;
    examen = e;
}

void  estudiante::set_numero_de_carnet(long nc){
    numero_de_carnet = nc;
}

long  estudiante::get_numero_de_carnet(){
    return numero_de_carnet;
}

void  estudiante::set_nombre(string n){
    nombre = n;
}

string  estudiante::get_nombre(){
    return nombre;
}

void  estudiante::set_apellido(string a){
    apellido = a;
}

string  estudiante::get_apellido(){
    return apellido;
}

void  estudiante::set_primer_parcial(int p1){
    primer_parcial = p1;
}

int  estudiante::get_primer_parcial(){
    return primer_parcial;
}

void  estudiante::set_segundo_parcial(int p2){
    segundo_parcial = p2;
}

int  estudiante::get_segundo_parcial(){
    return segundo_parcial;
}

void  estudiante::set_trabajo_practico(int tp){
    trabajo_practico = tp;
}

int  estudiante::get_trabajo_practico(){
    return trabajo_practico;
}

void  estudiante::set_examen(int e){
    examen = e;
}

int  estudiante::get_examen(){
    return examen;
}


float estudiante::nota_final(){
    return ((primer_parcial*0.2) + (segundo_parcial*0.2) + (trabajo_practico*0.2) + (examen*0.4));
}

bool estudiante::aprobado(){
    if (nota_final()>=4) return true;
    else return false;
}
