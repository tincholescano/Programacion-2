#include <iostream>

using namespace std;

int copia(int c[], int);

int main(){
    int n, c[n], nc[n];
    cout<<"Ingrese la cantidad de elementos de la cadena: ";
    cin>>n; 
    for (int i=0; i<n; i++){
        cout<<"Ingrese el elemento de la posicion "<<i<<": ";
        cin>>c[i];
    }
    cout<<"Cadena original: ";
    for (int i=0; i<n; i++){
        cout<<c[i];
    }
    cout<<endl;
    cout<<"Cadena copia: ";
    copia(c,n);
    cout<<endl;
}

int copia(int c[], int n){
    int *p, nc[n];
    for (int i=0; i<n; i++){
        p=&c[i];
        nc[i] = *p;
    }
    for (int i=0; i<n; i++){
        cout<<nc[i];
    }
}