#include <iostream>
using namespace std;


class F {
public:
    F(int m = 1, int d = 1, int a = 1900, int h = 24, int min = 60, int s = 60) {
        this->m = m; 
        this->a = a; 
        this->d = d;
        this->h = h;
        this->min = min;
        this->s = s;
    }

F &operator++(int) { d++; return *this; }
F operator--() { d--; return *this; }

private:
    unsigned int m, d, a, h, min, s;
    friend int main();
};

int main() {
enum Fecha{mes = 1, dia = 1, anio = 1820, hora = 13,minuto = 30,segundo = 45};
 F f; 
 f++; 
 cout << f.d << endl; 
 --f; 
 cout << f.d << endl;
 return 0;
}