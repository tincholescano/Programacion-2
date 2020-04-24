#include <iostream>
#include <vector>
using namespace std;

int cant(vector<int>, int);

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

    cout<<"La cantidad de elementos distintos es de: "<<cant(v,c)<<endl;
}

int cant(vector<int> v, int c){
    int r=0, ca=0;
    for (int a=0;a<c;a++){
        for (int b=a+1;b<c;b++){
            if (v[a]==v[b]) r++;
        }
        if (r==0) ca++;
        r=0;
    }
    return ca;
}

#
