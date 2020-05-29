#ifndef __AH_INCLUDED__
#define __AH_INCLUDED__
#include "avionHidrante.h"
#endif

#ifndef __AP_INCLUDED__
#define __AP_INCLUDED__
#include "avionPasajeros.h"
#endif

int main(void){
    AvionPasajeros ap("AZ19B2", 230,"Buenos Aires", 45);
    AvionHidrante ah("BT3533P8",250, 1200, 500);
    ap.mostrarDatos();
    ah.mostrarDatos();
    ah.descargarAgua(300);
    ah.mostrarDatos();
    ah.descargarAgua(1);
    ah.mostrarDatos();
}
