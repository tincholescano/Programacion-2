#include <iostream>
using namespace std;

int main(){
    int f, c, e, fm, cm;
    cout<<"Ingrese la cantidad de filas: ";
    cin>>f;
    cout<<"INgrese la cantidad de colmunas: ";
    cin>>c;
    int matriz[f][c];
    for (int i=0;i<f;i++){
        for (int j=0;j<c;j++){
            cout<<"Ingrese el elemento de la posicion ("<<i<<", "<<j<<"): ";
            cin>>e;
            matriz[i][j]=e;
            e=0;
        }
    }
    cout<<"Matriz: "<<endl;
    for (int i=0;i<f;i++){
        cout<<"|";
        for (int j=0;j<c;j++){
            cout<<matriz[i][j];
        cout<<"|";
        }
        cout<<endl;
    }
    do{
    cout<<"Ingrese la fila del elemento m: ";
    cin>>fm;
    } while (fm<0 or fm>=f);
    do{
    cout<<"Ingrese la columna del elemento m: ";
    cin>>cm;
    } while (cm<0 or cm>=c);


    cout<<"Elemento m: "<<matriz[fm][cm]<<endl;

    int a=-1, b=-1, suma=0;
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            if (fm+a>=0 && fm+a<f && cm+b>=0 && cm+b<c){
                suma = suma + matriz[fm+a][cm+b];
            }
            b++;
        }
        a++;
        b=-1;
    }
    suma = suma - matriz[fm][cm];
    cout<<"La suma de los adyacentes es de: "<<suma<<endl;

}
