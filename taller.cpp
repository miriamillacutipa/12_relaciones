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

class OrdenTrabajo {
    private:
        int id;
        Cliente *pCliente;
        Auto *pAuto;
    public:
        OrdenTrabajo(int, Cliente *, Auto *);
        void mostrarOrden();
};

int main() {
	return 0;
}
