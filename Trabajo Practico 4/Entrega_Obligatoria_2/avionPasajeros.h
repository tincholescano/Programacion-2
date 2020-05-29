#ifndef __AVION_INCLUDED__
#define __AVION_INCLUDED__
#include "avion.h"
#endif

class AvionPasajeros: public Avion{
  protected:
    char* destino;
    int duracion;
  public:
    AvionPasajeros(char* i,int c,char* de,int du):Avion(i,c){destino=de;duracion=du;};
    void setDestino(char*);
    void setDuracion(int);
    char* getDestino();
    int getDuracion();
    void mostrarDatos();
};
