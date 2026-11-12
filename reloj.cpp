#include <iostream>
#include <string>
using namespace std;

class Display {
    private:
        string tipo;
    public:
        Display(string);
        string getTipo();
};

Display::Display(string t) {
    tipo = t;
}

string Display::getTipo() {
    return tipo;
}

class Hora {
    private:
        int hora;
        int minutos;
        int segundos;
    public:
        Hora(int, int, int);
        int getHora();
        int getMinutos();
        int getSegundos();
};

Hora::Hora(int h, int m, int s) {
    hora = h;
    minutos = m;
    segundos = s;
}

int Hora::getHora() {
    return hora;
}

int Hora::getMinutos() {
    return minutos;
}

int Hora::getSegundos() {
    return segundos;
}

class Reloj {
    private:
        Display *pDisplay;
        Hora *pHora;
    public:
        Reloj(int, int, int);
        void asignarDisplay(Display *);
        void mostrarReloj();
};

Reloj::Reloj(int h, int m, int s) {
    pDisplay = NULL;
    pHora = new Hora(h, m, s);
}

void Reloj::asignarDisplay(Display *pD) {
    pDisplay = pD;
}

int main() {
    return 0;
}
