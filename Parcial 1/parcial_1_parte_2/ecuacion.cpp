#include"ecuacion.h"
#include"math.h"
#include <iostream>

using namespace std;

ecuacion::ecuacion(){
    a = 1;
    b = 0;
    c = 0;
}

ecuacion::ecuacion(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

void ecuacion::set_a(int a1){
    a = a1;
}

void ecuacion::set_b(int b1){
    b = b1;
}

void ecuacion::set_c(int c1){
    c = c1;
}

int ecuacion::get_a(){
    return a;
}

int ecuacion::get_b(){
    return b;
}

int ecuacion::get_c(){
    return c;
}

int ecuacion::tipo_raiz(){
    int n = ((b*b)-(4*a*c));
    if (n>0) return 1;
    if (n==0) return 2;
    if (n<0) return 3;
}

float ecuacion::discriminando(){
    return ((b*b)-(4*a*c));
}

void ecuacion::ObtenerRaices(){
    float n1, n2;
    n1 = (((-b) + sqrt((b*b) - (4*a*c))) / (2*a));
    n2 = (((-b) - sqrt((b*b) - (4*a*c))) / (2*a));
    cout<<"Las raices son: "<<n1<<" y "<<n2;
}

void ecuacion::ObtenerRaiz(){
    float n;
    if ((((-b) + sqrt((b*b) - (4*a*c))) / (2*a)) == true) {
        n = (((-b) + sqrt((b*b) - (4*a*c))) / (2*a));
        cout<<"La raiz es: "<<n;
    } else {
        n = (((-b) - sqrt((b*b) - (4*a*c))) / (2*a));
        cout<<"La raiz es: "<<n;}
}
