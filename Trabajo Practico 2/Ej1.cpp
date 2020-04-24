#include <iostream>

using namespace std;

int main() {
    int a=9, b, *c;
    cout<<"Ingrese el valor de la primera variable: ";
    cin>>a;
    c = &a;
    cout<<"Direccion de la primera variable: "<<c<<endl<<"Contenido de la primera variable: "<<*c<<endl;
    
    cout<<"Ingrese el valor de la segunda variable: ";
    cin>>b;
    c = &b;
    cout<<"Direccion de la segunda variable: "<<c<<endl<<"Contenido de la segunda variable: "<<*c<<endl;
}