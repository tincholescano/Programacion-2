class Fecha{
  private:
    int dia;
    int mes;
    int anio;
    int dias(int);
  public:
    Fecha();
    Fecha(int, int, int);
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    int getDia();
    int getMes();
    int getAnio();
    void ayer();
    void manana();
    int valida();
    Fecha sumar(int );
    Fecha restar(int);
}
