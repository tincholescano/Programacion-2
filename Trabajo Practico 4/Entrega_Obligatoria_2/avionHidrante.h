#ifndef __AVION_INCLUDED__
#define __AVION_INCLUDED__
#include "avion.h"
#endif

class AvionHidrante: public Avion{
  protected:
    int maxAgua;
    int cantActual;
  public:
    AvionHidrante(char* i,int c,int m,int cA):Avion(i,c){maxAgua=m;cantActual=cA;};
    void setMaxAgua(int);
    void setCantActual(int);
    int getMaxAgua();
    int getCantActual();
    void descargarAgua(int);
    void mostrarDatos();
};
