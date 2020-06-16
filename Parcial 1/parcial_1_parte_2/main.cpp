#include <iostream>
#include "ecuacion.cpp"

using namespace std;

int main(){
    ecuacion e(2, 5, 2);
    cout<<"a: "<<e.get_a()<<endl;
    cout<<"b: "<<e.get_b()<<endl;
    cout<<"c: "<<e.get_c()<<endl;
    cout<<"Tipo de raiz: "<<e.tipo_raiz()<<endl;
    cout<<"Discriminando: "<<e.discriminando()<<endl;
    if (e.tipo_raiz()==1) e.ObtenerRaices();
    if (e.tipo_raiz()==2)e.ObtenerRaiz();
};
