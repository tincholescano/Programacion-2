#include <iostream>
using namespace std;

void intercambiar(int&,int&);

int main(){
    int x,y;
    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;
    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de y: "<<y<<endl;
    intercambiar(x,y);
    cout<<"Valor de x despues: "<<x<<endl;
    cout<<"Valor de y despues: "<<y<<endl;
}

void intercambiar(int& x,int& y){
    int aux = y;
    y = x;
    x = aux;
}
