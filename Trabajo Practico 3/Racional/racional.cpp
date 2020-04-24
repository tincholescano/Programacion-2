/* En este archivo se implementan los metodos de la clase racional definida en racional.h */
#include <math.h>
#include "racional.h" // Importa los elementos en racional.h

// Constructor para definir valores predeterminados a el numerador, el denominador y el error
racional::racional(){
    num=0;
    den=1;
    error=0;
}

// Constructor para verificar que exista el numero racional
racional::racional(int n, int d){
    num=n; // Le asigna a la variable num el valor de n
    den=d; // Le asigna a la variable den el valor de d

    // Si el denominador es 0 el numero racional no existe
    if (den!=0) error=0; // Devuelve cero en caso de que exista
    else error=1; // Devuelve cero en caso de que no exista
}

// Carga el valor del numerador
void racional::setNum(int n){
    num=n;
}

// Muestra el valor del numerador
int racional::getNum(){
    return num;
}

// Carga el valor del denominador
void racional::setDen(int d){
    den=d;
    // Revisa que el denominador sea distinto de cero
    if (den!=0) error=0;
    else error=1;
}

// Muestra el valor del denominador
int racional::getDen(){
    return den;
}

// Muestra el valor del error
int racional::getError(){
    return error;
}

// Incrementa en uno el valor del numerador y del denominador; Y simplifica
void racional::incrementar(){
    num+=den;
    simplificar();
}

// Decrementa en uno el valor del numerador y del denominador; Y simplifica
void racional::decrementar(){
    num-=den;
    simplificar();
}

// Calcula la suma de dos numeros racionales generando otro como resultado
racional racional::sumar(racional x){
    racional z(num*x.den+den*x.num, den*x.den); // Suma los racionales: a/b + c/d = (a*d + b*c) / b*d
    z.simplificar(); // Simplifica el racional
    return z; // Devuelve la suma simplificada
}

// Calcula la resta de dos numeros racionales generando otro como resultado
racional racional::restar(racional x){
    racional z(num*x.den-den*x.num, den*x.den); // Resta los racionales: a/b - c/d = (a*d - b*c) / b*d
    z.simplificar(); // Simplifica el racional
    return z; // Devuelve la suma simplificada
}

// Simplifica el numero racional mediante el MCD
void racional::simplificar(){
    int d=MCD(); // Busca el MCD entre ambos numeros y se lo asigna a d
    // Divide al numerador y al denominador por el MCD
    num/=d;
    den/=d;
}

// Calcula la fraccion simplificada
int racional::MCD(){
    int a,b,aux,r;
    a=num;
    b=den;
    if (a<0) a*=-1; // Si a es negativo lo pasa a positivo
        if (b<0) b*=-1; // Si b es negativo lo pasa a positivo
            if (b>a) { // Si b es mayor que a, invierte los valores
                aux=a;
                a=b;
                b=aux;
                }
    r=a%b; // r es el resto de dividir a en b
    while (r!=0){ // Mientras que r sea distinto de cero
        a=b; // a pasa a valer b
        b=r; // b toma el valor de r
        r=a%b; // r es el resto de dividir a en b
        }
    return b; // Devuelve b, que seria el mcd entre el numerador y el denominador
}
