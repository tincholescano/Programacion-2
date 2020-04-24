#include <iostream>
#include <math.h>
using namespace std;

bool esPermutacion(int, int p[]);
void ordenAsc(int z[], int n);

int main(){
    int x, p[100];
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>x;

    for (int i=0;i<x;i++){
        cout<<"Ingrese un valor: ";
        cin>>p[i];
    }

    if (esPermutacion(x,p)) cout<<"El arreglo es permutacion"<<endl;
    else cout<<"El arreglo no es permutacion"<<endl;
}

bool esPermutacion(int x, int p[]){
    int t=0;
    ordenAsc(p,x);
    for (int i=0;i<x;i++){
        if (p[i] != i) t++;
    }
    if (t==0) return true;
    else return false;

}

void ordenAsc(int z[], int n){
    int a=1,aux;
    while (a){
        a=0;
        for (int i=0;i<n-1;i++){
            if (z[i]>z[i+1]) {
                aux=z[i];
                z[i]=z[i+1];
                z[i+1]=aux;
                a=1;
            }
        }
    }
}
