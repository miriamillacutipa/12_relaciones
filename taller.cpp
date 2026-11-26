#include <iostream>
#include <string>
using namespace std;

class Cliente {
	private:
		string nombre;
        string direccion;
        string telefono;
    public:
    	Cliente(string, string, string);
        string getNombre();
        string getDireccion();
        string getTelefono();
        void mostrarCliente();
};

Cliente::Cliente(string n, string d, string t) {
    nombre = n;
    direccion = d;
    telefono = t;
}

string Cliente::getNombre() {
    return nombre;
}

string Cliente::getDireccion() {
    return direccion;
}

string Cliente::getTelefono() {
    return telefono;
}

void Cliente::mostrarCliente() {
    cout <<"Cliente: " <<nombre <<endl;
    cout <<"Direccion: " <<direccion <<endl;
    cout <<"Telefono: " <<telefono <<endl;
}

class Auto {
	private:
        string marca;
        string modelo;
        string color;
        string placa;
    public:
        Auto(string, string, string, string);
        string getMarca();
        string getModelo();
        string getColor();
        string getPlaca();
        void mostrarAuto();
};

Auto::Auto(string ma, string mo, string c, string p) {
    marca = ma;
    modelo = mo;
    color = c;
    placa = p;
}

string Auto::getMarca() {
    return marca;
}

string Auto::getModelo() {
    return modelo;
}

string Auto::getColor() {
    return color;
}

string Auto::getPlaca() {
    return placa;
}

void Auto::mostrarAuto() {
    cout << "Auto: " << marca << " " << modelo << endl;
    cout << "Color: " << color << endl;
    cout << "Placa: " << placa << endl;
}

class OrdenTrabajo {
    private:
        int id;
        Cliente *pCliente;
        Auto *pAuto;
    public:
        OrdenTrabajo(int, Cliente *, Auto *);
        void mostrarOrden();
};

OrdenTrabajo::OrdenTrabajo(int i, Cliente *pC, Auto *pA) {
    id=i;
    pCliente=pC;
    pAuto=pA;
}

void OrdenTrabajo::mostrarOrden() {
    cout << "Orden de trabajo Nro " << id << endl;
    pCliente->mostrarCliente();
    pAuto->mostrarAuto();
    cout << endl;
}

int main() {
	Cliente c1("Juan Perez", "Av. Bolognesi 123", "952123456");
    Cliente c2("Maria Lopez", "Calle Lima 456", "987654321");
    
	Auto a1("Toyota","Yaris","Rojo","ABC-123");
    Auto a2("Nissan","Sentra","Gris","XYZ-789");
    Auto a3("Kia","Rio","Blanco","KLM-456");
    
	OrdenTrabajo orden1(1, &c1, &a1);
    OrdenTrabajo orden2(2, &c2, &a2);
    OrdenTrabajo orden3(3, &c1, &a3);

    orden1.mostrarOrden();
    orden2.mostrarOrden();
    orden3.mostrarOrden();
    return 0;
}
