#include <iostream>

using namespace std;

bool semiPrimo(int);
bool esPrimo(int);

int main(){
    int a;
    cout<<"Inserte un numero: ";
    cin>>a;
    if (semiPrimo(a)) cout<<"Es semi primo"<<endl;
    else cout<<"No es semi primo"<<endl;
}

bool semiPrimo(int a){
    for (int i=2;i<a;i++){
        if (a%i==0 && esPrimo(i))
            if (esPrimo(a/i))return true;}
    return false;
}

bool esPrimo(int n){
    int c = 0;
    for (int i=1; i<=n; i++){
        if (n%i==0) c++;
    }
    if (c==2) return true;
    else return false;
}
