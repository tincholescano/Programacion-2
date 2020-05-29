class Atleta{
    protected:
        int numero;
        char *nombre;
        char *nacionalidad;
        float tiempo;
    public:
        Atleta(int,char*,char*,float);
        void setNumero(int);
        void setNombre(char);
        void setNacionalidad(char);
        void setTiempo(float);
        int getNumero();
        char getNombre();
        char getNacionalidad();
        float getTiempo();
};
