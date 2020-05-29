#include "polinomio.cpp"
#include <iostream>

using namespace std;

int main(void) {
   Polinomio p(5);
   p.AgregarCoeficiente(0,2);
   p.AgregarCoeficiente(1,3);
   p.AgregarCoeficiente(2,1);
   p.AgregarCoeficiente(3,5);
   p.AgregarCoeficiente(4,3);

   for (int i=0;i<p.getOrden();i++){
       cout<<"Coeficiente de grado "<<i<<" - "<<p.getCoef(i)<<endl;
   }
   cout<<"El Polinomio evaluado en 5 es "<<p.evaluar(5, p.getOrden())<<endl;
}
