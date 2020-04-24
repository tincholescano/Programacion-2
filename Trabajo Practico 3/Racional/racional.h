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
    racional sumar(racional); // Calcula la suma de 2 racionales generando otro como resultado
    racional restar(racional); // Calcula la resta de 2 racionales generando otro como resultado

    // Definicion de funciones
    void setNum(int); // Carga del numerador
    int getNum(); // Muestra del numerador
    void setDen(int); // Carga del denominador
    int getDen(); // Muestra del denominador
    int getError(); // Muestra de error
    void incrementar(); // Incrementar en uno un racional y simplificar si es posible
    void decrementar(); // Decrementar en uno un racional y simplificar si es posible
    void simplificar(); // Calcula la fraccion simplificada
};
