#include <iostream>
#include "estudiante.cpp"

int main() {
    estudiante e(42304447, "Martin", "Lescano", 8, 7, 2, 9);
    cout<<"Nombre: "<<e.get_nombre()<<endl;
    cout<<"Apellido: "<<e.get_apellido()<<endl;
    cout<<"DNI: "<<e.get_numero_de_carnet()<<endl;
    cout<<"Primer parcial: "<<e.get_primer_parcial()<<endl;
    cout<<"Segundo parcial: "<<e.get_segundo_parcial()<<endl;
    cout<<"Trabajo practico: "<<e.get_trabajo_practico()<<endl;
    cout<<"Examen: "<<e.get_examen()<<endl;
    cout<<"Nota final: "<<e.nota_final()<<endl;
    if (e.aprobado() == true){
        cout<<"Aprobo"<<endl;
    }else{
        cout<<"Desaprobo"<<endl;
}
}
