class Polinomio{
  private:
    int p;
    int grado;
    int coef;
    int n;
  public:
    Polinomio();
    Polinomio(int);
    int pol[];
    int AgregarCoeficiente(int, int);
    int getCoef(int);
    int getOrden();
    int evaluar(int, int);
};
