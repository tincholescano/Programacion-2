#include <iostream>
#include "fecha.h"
using namespace std;
int main() {
    int d, m, a, ig=0;
    Fecha f1(1,1, 2010) ;
    Fecha f2(31,12, 2010) ;
    Fecha f3, f4;
    cout<<"\n"<<"fecha uno "<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio();
    f1.ayer();
    cout<<"\n"<<"fecha uno menos 1 dia es "<<f1.getDia()<<"/"<<f1.getMes()<<"/"<<f1.getAnio();
    cout<<"\n"<<"fecha dos "<<f2.getDia()<<"/"<<f2.getMes()<<"/"<<f2.getAnio();
    f2.manana();
    cout<<"\n"<<"fecha uno mas un dia es "<<f2.getDia()<<"/"<<f2.getMes()<<"/"<<f2.getAnio();
    f3=f1.sumar(10);
    cout<<"\n"<<"fecha uno mas 10 dias es "<<f3.getDia()<<"/"<<f3.getMes()<<"/"<<f3.getAnio();
    f4=f2.restar(25);
    cout<<"\n"<<"fecha dos menos 25 dias es "<<f4.getDia()<<"/"<<f4.getMes()<<"/"<<f4.getAnio();
    }
