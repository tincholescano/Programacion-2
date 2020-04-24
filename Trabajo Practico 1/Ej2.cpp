#include <iostream>
using namespace std;

int dc(int,int,int);
int main(){
    int a, b, k;
    cout<<"Ingrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;
    cout<<"Ingrese k: ";
    cin>>k;
    cout<<"Los numeros entre "<<a<<" y "<<b<<", divisibles por K son: "<<dc(a,b,k)<<endl;
 }

int dc(int a, int b, int k){
    int c = 0;
    if (a<b) __NO_INLINE__;
    if (b<a) a=b; b=a;
    int n = a;
    while (n <= b){
        if (n%k==0) c++;
        n++;
    }

    return c;
}
