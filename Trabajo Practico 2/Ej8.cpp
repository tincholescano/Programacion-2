#include <iostream>
using namespace std;

int vocales(char[]);

int main(){
    char cadena[50];
    cout<<"Ingrese la cadena de texto: ";
    cin.getline(cadena,50);
    cout<<"La cantidad de vocales minusculas en la cadena es de: "<<vocales(cadena)<<endl;
}

int vocales(char c[]){
    int cant=0, n=0, i=0;
    while(c[i]!='\0'){
        n++;
        i++;
    }
    char *p;
    p = &c[0];
    for (i=0; i<n; i++){
        if (p[i]=='a' or p[i]=='e' or p[i]=='i' or p[i]=='o' or p[i]=='u') cant++;
    }
    return cant;
}