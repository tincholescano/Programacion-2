#include "mapa.cpp"
#include "jugador.cpp"

class Juego: public Mapa{
  protected:
    int *mapa[];
  public:
    Juego(int t,int nb):Mapa(t,nb){mapa[t];};
    void crearJuego();
    bool validar(int,int);
    int Explorar(int);
    int Mover(char);
};
