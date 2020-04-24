#include <iostream>
#include <vector>
using namespace std;

void ordenar(vector<int>);

int main(){
    vector<int> v;
    int n=1;
    while (n!=0){
        cout<<"Igrese un elemento al vector(pulse 0 para salir): ";
        cin>>n;
        if (n!=0) v.push_back(n);
    }
    int c = v.size();
    cout<<"La cantidad de elementos en el vector es de: "<<c<<endl;

    int a=1,aux;
    while (a){
        a=0;
        for (int i=0;i<c-1;i++){
            if (v[i]>v[i+1]) {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                a=1;
            }
        }
    }

    int a2=1,aux2;
    while (a2){
    a2=0;
        for (int i=0;i<c-1;i++){
            if (v[i]%2==0 && v[i+1]%2!=0) {
                aux2=v[i];
                v[i]=v[i+1];
                v[i+1]=aux2;
                a2=1;
            }
        }
    }

    for (int i=0;i<c;i++){
        if (i!=c-1)cout<<v[i]<<",";
        else cout<<v[i];
    }
    cout<<endl;
}
