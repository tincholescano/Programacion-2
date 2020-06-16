class ecuacion{

  private:
    int a, b, c;

  public:
    ecuacion();
    ecuacion(int, int, int);

    void set_a(int);
    int get_a();

    void set_b(int);
    int get_b();

    void set_c(int);
    int get_c();

    int tipo_raiz();

    float discriminando();

    void ObtenerRaices();

    void ObtenerRaiz();
};
