#include <string>
using namespace std;

class estudiante{

  private:
        long numero_de_carnet;
        string nombre;
        string apellido;
        int primer_parcial, segundo_parcial, trabajo_practico, examen;

    public:
        estudiante();
        estudiante(long, string, string, int, int, int, int);
        void set_numero_de_carnet(long);
        long get_numero_de_carnet();

        void set_nombre(string);
        string get_nombre();

        void set_apellido(string);
        string get_apellido();

        void set_primer_parcial(int);
        int get_primer_parcial();

        void set_segundo_parcial(int);
        int get_segundo_parcial();

        void set_trabajo_practico(int);
        int get_trabajo_practico();

        void set_examen(int);
        int get_examen();

        float nota_final();
        bool aprobado();

};
