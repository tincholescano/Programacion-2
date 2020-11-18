#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>


using namespace std;

int main(){
    int cantMuestras, cantInf, cantF = 0;
    int a;
    while (a != 0){
        cout<<"Menu: \n 1) Informacion estadstica \n 2) Provincias con mas contagios \n 3) Provincias con mas muertes \n 4) Filtrar por edad \n 5) Casos en cuidado intensivo \n 0) Salir"<<endl;
        cin>>a;
        switch (a){
            case 1: {
                if (a == 1){
                    // File pointer
                    fstream fin;

                    // Open an existing file
                    fin.open("Covid19Casos-1000.csv", ios::in);

                    vector<string> row;
                    string line, word;
                    cantMuestras = 0;
                    for (int i=0; i<1000; i++){
                        row.clear();
                        cantMuestras = cantMuestras + 1;
                        getline(fin, line);

                        stringstream s(line);

                        while (getline(s, word, ',')){
                            row.push_back(word);
                        }

                        for (int i=0; i<row.size(); i++){
                            cout<<row[i];
                        }
                        cout<<endl;
                        }
                    cout << "La cantidad de Muestras es de: "<< cantMuestras;
                }
            }
            case 2: {
                if (a == 2){
                    cout << "b";
                }
            }
            case 3: {
                if (a == 3){
                    cout << "c";
                }
            }
            case 4: {
                if (a == 4){
                    cout << "d";
                }
            }
            case 5: {
                if (a == 5){
                    cout << "e";
                }
            }
            case 0: {
                cout << endl;
            }
        }
    };
}

