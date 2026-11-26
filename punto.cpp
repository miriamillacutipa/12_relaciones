#include <iostream>
#include <cmath>
using namespace std; 

class Punto {
	private:
		double x; 
		double y;
	public:
		Punto(double, double);
		double getX();
		double getY();
		void setX(double);
		void setY(double);
		double distancia(Punto p);
		void mostrarPunto();
};

class Poligono {
	private:
		Punto *vertices;
		int n;
	public:
		Poligono(Punto[], int);
		~Poligono();
		void trasladar(double, double);
        void escalar(double, double);
        int numVertices();
        double perimetro();
        void mostrarPoligono();
};

int main() {
	return 0;
}
