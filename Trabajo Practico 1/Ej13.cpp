#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n=1, k;
    bool a = false;
    while (n!=0){
        cout<<"Igrese un elemento al vector(pulse 0 para salir): ";
        cin>>n;
        if (n!=0) v.push_back(n);
    }
    int c = v.size();

    cout<<"Ingrese el numero a buscar: ";
    cin>>k;

    for (int i=0;i<c;i++){
        if (v[i]==k){
            cout<<"El numero "<<k<<" se encuentra en la posicion: "<<i<<endl;
            a = true;
        }
    }

    if (a==false) cout<<"El numero "<<k<<" no se encuentra en el vector"<<endl;

}
