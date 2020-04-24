#include <iostream>
using namespace std;

int Factorial(int);
int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"El factorial es: "<<Factorial(n)<<endl;
}

int Factorial(int n){
    if (n == 0) return 1;
    return n*Factorial(n-1);
}
