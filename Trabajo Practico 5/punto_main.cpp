#include "punto.cpp"
#include <iostream>

using namespace std;

int main(){
    punto p1(2,3);
    punto p2(4,4);
    punto p3(-1,2);
    cout<<"Punto Uno: x= "<<p1.GetX()<<" y= "<<p1.GetY()<<endl;
    cout<<"Punto Dos: x= "<<p2.GetX()<<" y= "<<p2.GetY()<<endl;
    cout<<"Punto Tres: x= "<<p3.GetX()<<" y= "<<p3.GetY()<<endl;
    ++p1;
    cout<<"Incremento de Punto Uno: x= "<<p1.GetX()<<" y= "<<p1.GetY()<<endl;
    --p2;
    cout<<"Decremento de Punto Dos: x= "<<p2.GetX()<<" y= "<<p2.GetY()<<endl;
    punto p4=p2 + p3;
    cout<<"Punto cuatro (p2+p3) : x= "<<p4.GetX()<<" y= "<<p4.GetY()<<endl;
    punto p5=p2+5;
    cout<<"Punto cinco (p2+10) : x= "<<p4.GetX()<<" y= "<<p4.GetY()<<endl;
}
