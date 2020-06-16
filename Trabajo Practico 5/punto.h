template <class P>
class punto{
 private:
  P cx;
  P cy;
 public:
    punto();
    punto(P&, P&);
    void SetX(P&);
    void SetY(P&);
    P GetX();
    P GetY();
    void operator++();
    void operator--();
    punto operator+(punto);
    punto operator+(P&);
    punto operator-(punto);
    punto operator-(P&);
    P angulo();
    P modulo();
};
