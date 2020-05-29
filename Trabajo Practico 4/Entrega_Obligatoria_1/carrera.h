#ifndef __FECHA_INCLUDED__
#define __FECHA_INCLUDED__
#include "fecha.h"
#endif

#ifndef __ATL_INCLUDED__
#define __ATL_INCLUDED__
#include "atleta.h"
#endif

class Carrera: private Fecha, Atleta{
  protected:
    char ciudad;
    int *fecha;
    char *atletas;
  public:
    Carrera();
    Carrera(char c,int d,int m,int a):Fecha(d,m,a){c=ciudad;};
    Carrera(int num,char *nom,char *nac,float t):Atleta(num,nom,nac,t){};
    void agregarAtleta(Atleta&);
    void setCiudad(char);
    char getCiudad();
    Carrera getGanador();
};
