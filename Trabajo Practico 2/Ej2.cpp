#include <iostream>

using namespace std;

int main() {
    int a[5], *p;
    for (int i=1; i<=5; i++){
        cout<<"Ingresel el valor de la posicion "<<i<<": ";
        cin>>a[i];
    }
    for (int i=1; i<=5; i++){
        p = &a[i];
        cout<<"Direccion de la posicion "<<i<<": "<<p<<endl;
        cout<<"Contenido de la posicion "<<i<<": "<<*p<<endl;
    }
}