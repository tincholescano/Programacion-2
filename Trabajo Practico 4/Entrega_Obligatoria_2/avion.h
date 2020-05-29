class Avion{
  private:
    char*id;
    int carga;
  public:
    Avion();
    Avion(char*, int);
    void setID(char*);
    void setCarga(int);
    char* getId();
    int getCarga();
};
