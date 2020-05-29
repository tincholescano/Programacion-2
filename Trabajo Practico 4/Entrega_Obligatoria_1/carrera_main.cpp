#include "carrera.h"
#include "atleta.h"
#include "fecha.h"
#include <iostream>

using namespace std;

int main(void){
    Atleta a1(1,"Nombre1","Pais1",10);
    Atleta a2(2,"Nombre2","Pais2",10.3);
    Atleta a3(3,"Nombre3","Pais3",9.8);
    Fecha f1(10,10,2020);
    Carrera c("Cordoba", f1);
    c.agregarAtleta(a1);
    c.agregarAtleta(a2);
    c.agregarAtleta(a3);
    Atleta g=c.getGanador();
    cout<<"Numero: "<<g.getNumero()<<endl;
    cout<<"Nombre: "<<g.getNombre()<<endl;
    cout<<"Nacionalidad: "<<g.getNacionalidad()<<endl;
    cout<<"Tiempo: "<<g.getTiempo()<<endl;
}
