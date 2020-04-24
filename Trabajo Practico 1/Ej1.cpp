#include <iostream>
using namespace std;
int cantSaltos(int, int, int);
int main(){
    int X, Y, D;
    cout<<"Ingrese X: ";
    cin>>X;
    do{
    cout<<"Ingrese Y: ";
    cin>>Y;
    } while(X>=Y);
    cout<<"Ingrese D: ";
    cin>>D;
    cout<<"La cantidad minima de saltos es: "<<cantSaltos(X,Y,D)<<endl;
 }

 int cantSaltos(int x, int y, int d){
    int ns = (y-x)/d;
    if ((y-x)%d>0) ns++;
    return ns;
}
