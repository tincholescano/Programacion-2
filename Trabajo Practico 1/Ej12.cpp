#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n=1;
    while (n!=0){
        cout<<"Igrese un elemento al vector(pulse 0 para salir): ";
        cin>>n;
        if (n!=0) v.push_back(n);
    }
    int c = v.size();

    int a=1,aux;
    while (a){
        a=0;
        for (int i=0;i<c-1;i++){
            if (v[i]<v[i+1]) {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                a=1;
            }
        }
    }

    for (int i=0;i<c;i++){
        cout<<v[i];
    }
    cout<<endl;

}
