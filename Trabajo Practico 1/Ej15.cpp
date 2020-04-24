#include <iostream>
#include <vector>
using namespace std;

bool verificar(vector<int>), N(int, int, int);
int main(){
    vector<int> v;
    int n,x;
    cout<<"Cuantos elementos desea agregar al vector? ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Igrese un elemento al vector(pulse 0 para salir): ";
        cin>>x;
        if (x>=0) v.push_back(x);
    }
    int c=v.size(),f=c,aux=0;
    for (int i=0; i<(c/2); i++){
        f--;
        aux=v[i];
        v[i]=v[f];
        v[f]=aux;
        aux=0;
    }
    for (int i=0;i<c;i++){
        cout<<v[i];
    }
    cout<<endl;
}
