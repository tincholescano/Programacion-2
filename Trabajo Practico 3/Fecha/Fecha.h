/* En este archivo se define la clase fecha con sus metodos y atributos */

// Definicion de la clase fecha
class Fecha{
  // Definicion de atributos y metodos privados
  private:
    // Definicion de elementos basicos
    int dia; // Variable dia
    int mes; // Variable mes
    int anio; // Variable año
    int dias(int); // Funcion de maximo de dias por mes

  // Definicion de metodos publicos
  public:
    // Definicion de constructores
    Fecha(); // Inicializa la fecha en 01/01/1900
    Fecha(int, int, int); // Inicializa la fecha a una fecha dada

    // Definicion de metodos
    void setDia(int); // Carga del dia
    void setMes(int); // Carga del mes
    void setAnio(int); // Carga del año
    int getDia(); // Muestra del dia
    int getMes(); // Muestra del mes
    int getAnio(); // Muestra del año
    void ayer(); // Decrementa la fecha en 1 día
    void manana(); // Incrementa la fecha en 1 día
    int valida(); // Validacion de la fecha
    Fecha sumar(int); // Calcula la fecha resultante de sumar a una fecha una cierta cantidad de días
    Fecha restar(int); // Calcula la fecha resultante de restar a una fecha una cierta cantidad de días
};
