#include <iostream>
using namespace std;

int MCD(int,int);
int main(){
    int a, b;
    cout<<"Ingrse el primer numero: ";
    cin>>a;
    cout<<"Ingrse el segundo numero: ";
    cin>>b;
    cout<<"El MCD entre "<<a<<" y "<<b<<" es: "<<MCD(a,b)<<endl;
}

int MCD(int a, int b){
    int c = a%b;
    if (c == 0) return b;
    return MCD(b,c);
}
