#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int gr,x,P[100],s=0;
    cout<<"Ingrese el grado del polinomio: ";
    cin>>gr;

    for (int i=0;i<=gr;i++){
        cout<<"Ingrese el valor de x^"<<i<<": ";
        cin>>P[i];
    }

    cout<<"Ingrese el valor de X: ";
    cin>>x;

    for (int i=0;i<=gr;i++){
        s+= P[i] * pow(x,i);
    }

    cout<<"El resultado del polinomio valuado en "<<x<<" es de: "<<s<<endl;
 }

