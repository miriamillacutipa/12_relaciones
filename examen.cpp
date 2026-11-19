#include <iostream>
#include <string>
using namespace std;

class Fecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha(int, int, int);
        int getDia();
        int getMes();
        int getAnio();
        void mostrarFecha();
};

Fecha::Fecha(int d, int m, int a) {
    dia=d;
    mes=m;
    anio=a;
}
int Fecha::getDia() {
    return dia;
}
int Fecha::getMes() {
    return mes;
}
int Fecha::getAnio() {
    return anio;
}
void Fecha::mostrarFecha() {
    if (dia < 10) {
        cout << "0";
    }
    cout<<dia<< "/";
    if (mes < 10) {
        cout << "0";
    }
    cout<<mes<< "/" <<anio;
}

class Hora {
    private:
        int hora;
        int minuto;
    public:
        Hora(int, int);
        int getHora();
        int getMinuto();
        void mostrarHora();
};

Hora::Hora(int h, int m) {
    hora = h;
    minuto = m;
}
int Hora::getHora() {
    return hora;
}
int Hora::getMinuto() {
    return minuto;
}
void Hora::mostrarHora() {
    if (hora < 10) {
        cout<< "0";
    }
    cout<<hora<< ":";
    if (minuto < 10) {
        cout<< "0";
    }
    cout<< minuto;
}

class Examen {
    private:
        string nombre;
        int ciclo;
        Fecha *pFecha;   
        Hora *pHora; 
    public:
        Examen(string, int, int, int, int, int, int);
        ~Examen();
        void mostrarExamen();
};

Examen::Examen(string n, int c, int d, int m, int a, int h, int min) {
    nombre = n;
    ciclo = c;
    pFecha = new Fecha(d, m, a);
    pHora = new Hora(h, min);
}
Examen::~Examen() {
    delete pFecha;
    delete pHora;
}

void Examen::mostrarExamen() {
    cout << "Asignatura: " << nombre << endl;
    cout << "Ciclo: " << ciclo << endl;
    cout << "Fecha: ";
    pFecha->mostrarFecha();
    cout << endl;
    cout << "Hora: ";
    pHora->mostrarHora();
    cout << endl;
}

int main() {
    Examen ex1("Fisica I", 2, 18, 11, 2026, 8, 30);
    Examen ex2("Programacion Avanzada", 3, 5, 3, 2026, 9, 5);

    ex1.mostrarExamen();
    cout << endl;
    ex2.mostrarExamen();

    return 0;
}
