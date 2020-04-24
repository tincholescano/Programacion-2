#include <iostream>
#include "racional.cpp" // Importa los elementos de racional.cpp

using namespace std; // Define el contexto en el que las variables estan definidas

// Funcion principal del proyecto
int main() {
    racional a(1,2), b(4,3); // Crea dos objetos(numeros racionales) y les asigan los valores
    cout<<"a = "<<a.getNum()<<"/"<<a.getDen()<<"\n"; // Muestra el primer numero racional
    cout<<"b = "<<b.getNum()<<"/"<<b.getDen()<<"\n"; // Muestra el segundo numero racional
    a.incrementar(); // Incrementa en uno al objeto 'a'
    cout<<"El racional a incrementado en 1 ";
    cout<<"a = "<<a.getNum()<<"/"<<a.getDen()<<"\n"; // Muestra el objeto 'a' incrementado
    b.decrementar(); // Decrementa en uno al objeto 'b'
    cout<<"El racional b decrementado en 1 ";
    cout<<"b = "<<b.getNum()<<"/"<<b.getDen()<<"\n"; // Muestra el objeto 'b' decrementado
    cout<<"La suma de a y b es C ";
    racional c=a.sumar(b); // Suma 'a' y 'b'
    cout<<"c = "<<c.getNum()<<"/"<<c.getDen()<<"\n"; // Muestra el resultado de sumar 'a' y 'b'
    cout<<"La resta de c y b es d ";
    racional d=c.restar(b); // A 'c' le resta 'b'
    cout<<"d = "<<d.getNum()<<"/"<<d.getDen()<<"\n"; // Muestra el resultado de restarle 'b' a 'c'
}
