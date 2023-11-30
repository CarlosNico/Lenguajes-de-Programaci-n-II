#include<iostream>
#include<stdlib.h>

using namespace std;

class Tornillo {
private: //Atributos
	string tipo;
	float medida;
public: //Metodos
	Tornillo(string, float);
	virtual void mostrar();
};

Tornillo::Tornillo(string _tipo, float _medida) {
	tipo = _tipo;
	medida = _medida;
}

void Tornillo::mostrar() {
	cout << "Es un tornillo para: " << tipo << endl;
	cout << "Tiene una medida de: " << medida << " cm" << endl;
}


class Cabeza : public Tornillo {
private:
	string forma;
public:
	Cabeza(string, float, string);
	void mostrar();
};

Cabeza::Cabeza(string _tipo, float _medida, string _forma) : Tornillo(_tipo, _medida) {
	forma = _forma;
}

void Cabeza::mostrar() {
	Tornillo::mostrar();
	cout << "Tipo de cabeza es: " << forma << endl;
}

class Cantidad : public Tornillo {
private:
	int unidades;
public:
	Cantidad(string, float, int);
	void mostrar();
};
Cantidad::Cantidad(string _tipo, float _medida, int _unidades) : Tornillo(_tipo, _medida) {
	unidades = _unidades;
}

void Cantidad::mostrar() {
	Tornillo::mostrar();
	cout << "El numero de unidades disponibles en almacen es: " << unidades << endl;
}

class Ubicacion : public Tornillo {
private:
	int pasillo;
	string estante;
public:
	Ubicacion(string, float, int, string);
	void mostrar();
};
Ubicacion::Ubicacion(string _tipo, float _medida, int _pasillo, string _estante) : Tornillo(_tipo, _medida) {
	pasillo = _pasillo;
	estante = _estante;
}

void Ubicacion::mostrar() {
	Tornillo::mostrar();
	cout << "Se encuentra en el pasillo: " << pasillo << endl;
	cout << "En el estante: " << estante << endl;
}

int main() {
	Tornillo* vector[4];

	vector[0] = new Cabeza("Madera", 10.7, "Ranurada");
	vector[1] = new Cabeza("Metal", 3.5, "Phillips");
	vector[2] = new Cantidad("Madera", 10.7, 10000);
	vector[3] = new Ubicacion("Metal", 3.5, 4, "C7");

	vector[0]->mostrar();
	cout << "\n" << endl;
	vector[1]->mostrar();
	cout << "\n" << endl;
	vector[2]->mostrar();
	cout << "\n" << endl;
	vector[3]->mostrar();
	cout << "\n" << endl;

	system("pause");
	return 0;
}