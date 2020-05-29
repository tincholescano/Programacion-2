class Fecha{
  protected:
    int dia;
    int mes;
    int anio;
    int *fecha;
  public:
    Fecha();
    Fecha(int, int, int);
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    int getDia();
    int getMes();
    int getAnio();
    int *getFecha();
};
