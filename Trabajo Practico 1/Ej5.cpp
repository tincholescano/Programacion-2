#include <iostream>
#include <list>
using namespace std;

bool primosRelativos(int, int);
bool esPrimo(int);

int main(){
    int a,b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    if (primosRelativos(a, b))
        cout<<"Son primos relativos"<<endl;
    else
        cout<<"No son primos relativos"<<endl;
}

bool primosRelativos(int a, int b){
    list<int> primosA;
    list<int> primosB;
    for (int i=2;i<a;i++){
        if (a%i==0 && esPrimo(i)) primosA.push_back(i);
    }

    for (int i=2;i<b;i++){
        if (b%i==0 && esPrimo(i)) primosB.push_back(i);
    }

    if (primosA==primosB) return true;
    else return false;
}

bool esPrimo(int n){
    int c = 0;
    for (int i=1; i<=n; i++){
        if (n%i==0) c++;
    }
    if (c>2) return false;
    if (c==2) return true;
}
