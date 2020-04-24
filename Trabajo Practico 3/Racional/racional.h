/* En este archivo se define la clase racional con sus metodos y atributos */

// Definicion de la clase racional
class racional{
  // Definicion de atributos y metodos privados
  private:
    // Definicion de elementos basicos
    int num; // Variable numerador
    int den; // Variable denominador
    int error; // Flag en caso de error al cargar un numero
    int MCD(); // Funcion para el calculo del Maximo Comun Divisor

  // Definicion de metodos publicos
  public:
    // Definicion de constructores
    racional(); // Se cargan valores predeterminados para num, den y error
    racional(int, int); // Se le pasan los parametros num y den para corroborar que no den error
    racional sumar(racional); // Suma dos numeros racionales
    racional restar(racional); // Resta dos numeros racionales

    // Definicion de funciones
    void setNum(int); // Funcion setter del numerador
    int getNum(); // Funcion getter del numerador
    void setDen(int); // Funcion setter del denominador
    int getDen(); // Funcion getter del denominador
    int getError(); // Funcion getter de error
    void incrementar(); // Funcion para incrementar un numero racional y simplificar si es posible
    void decrementar(); // Funcion para decrementar un numero racional y simplificar si es posible
    void simplificar(); // Funcion para simplificar el numero racional
};
