#include <iostream>
#include "Fecha.cpp" // Importa los elementos en fecha.cpp

using namespace std; // Define el contexto en el que las variables estan definidas


int main() {
    int d, m, a, ig=0;
    Fecha f1(1,1, 2010) ; // Setea el valor minimo a f1
    Fecha f2(31,12, 2010) ; // Setea el valor maximo a f2
    Fecha f3, f4; // Agregamos 2 variables que mas adelante van a ser utilizadas para calculos
    cout<<"\n"<<"fecha uno "<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio(); // Printea el valor de f1
    f1.ayer(); // Utiliza el metodo ayer en f1
    cout<<"\n"<<"fecha uno menos 1 dia es "<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio(); // Printea el valor de f1 despues de habersele aplicado el metodo de ayer.
    cout<<"\n"<<"fecha dos "<<f2.getDia()<<"/"<<f2.getMes()<<"/"<<f2.getAnio(); // Printea el valor de f2
    f2.manana(); // Utiliza el metodo manana en f2
    cout<<"\n"<<"fecha uno mas un dia es "<<f2.getDia()<<"/"<<f2.getMes()<<"/"<<f2.getAnio();// Printe el valor de f2 despues de aplicarse el metodo manana
    f3=f1.sumar(10); // Asignamos el valor de f3 que es igual a f1 con el metodo de sumar aplicado a la misma sumando 10 dias
    cout<<"\n"<<"fecha uno mas 10 dias es "<<f3.getDia()<<"/"<<f3.getMes()<<"/"<<f3.getAnio(); // Printea el valor de f3
    f4=f2.restar(25); // Asignamos el valor de f4 que es igual a f2 con el metodo de restar aplicado a la misma restandole 25 dias
    cout<<"\n"<<"fecha dos menos 25 dias es "<<f4.getDia()<<"/"<<f4.getMes()<<"/"<<f4.getAnio(); // Printea el valor de f4
    }
