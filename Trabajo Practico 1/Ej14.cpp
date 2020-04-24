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
    if (verificar(v)) cout<<"Si existe un triplete"<<endl;
    else cout<<"No existe un triplete"<<endl;
}

bool verificar(vector<int> v){
    int c = v.size();
    for (int p=0;p<c;p++){
        for (int q=0;q<c;q++){
            for (int r=0;r<c;r++){
                if(N(v[p], v[q], v[r])) return true;
            }
        }
    }
    return false;
}

bool N(int p, int q, int r){
    if (p==q or p==r or q==r) return false;
    int aux;
    if (q<p) {aux=q; q=p; p=aux;}
    aux=0;
    if (r<p) {aux=r; r=p; p=aux;}
    aux=0;
    if (r<q) {aux=r; r=q; q=aux;}

    if ((p+q)>r and (q+r)>p and (r+p)>q) return true;
    else return false;
}
