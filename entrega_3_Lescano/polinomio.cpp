#include <math.h>
#include <iostream>
#include "polinomio.h"

using namespace std;

Polinomio::Polinomio(){
    coef = 0;
    grado = 0;
}

Polinomio::Polinomio(int N){
    n = N;
}

int Polinomio::AgregarCoeficiente(int g, int c){
    if (g>=0) {
        grado = g;
        coef = c;
        return pol[g]=c;
        } else {
    cout<<"El grado no puede ser negativo"<<endl;
    }
}

int Polinomio::getOrden(){
    return n;
}

int Polinomio::getCoef(int i){
    return pol[i];
}

int Polinomio::evaluar(int e, int n){
    int sum=0, x;
    for (int i=0; i<n; i++){
        x = pow(e, i);
        sum += pol[i]*x;
    }
    return sum;
}
