#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona {
private: //Atributos
	string nombre;
	int edad;
public: //Metodos
	Persona(string, int);
	virtual void mostrar();
};

Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrar() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}


class Alumno : public Persona {
private:
	float NotaFinal;
public:
	Alumno(string, int, float);
	void mostrar();
};

Alumno::Alumno(string _nombre, int _edad, float _NotaFinal) : Persona(_nombre, _edad) {
	NotaFinal = _NotaFinal;
}

void Alumno::mostrar() {
	Persona::mostrar();
	cout << "Nota Final: " << NotaFinal << endl;
}

class Profesor : public Persona {
private:
	string Materia;
public:
	Profesor(string, int, string);
	void mostrar();
};
Profesor::Profesor(string _nombre, int _edad, string _Materia) : Persona(_nombre, _edad) {
	Materia = _Materia;
}

void Profesor::mostrar() {
	Persona::mostrar();
	cout << "La materia es: " << Materia << endl;
}
int main() {
	Persona* vector[3];

	vector[0] = new Alumno("Carlos", 28, 8.9);
	vector[1] = new Alumno("Brizeida", 19, 9.5);
	vector[2] = new Profesor("Miguel", 38, "Matematica");

	vector[0]->mostrar();
	cout << "\n" << endl;
	vector[1]->mostrar();
	cout << "\n" << endl;
	vector[2]->mostrar();
	cout << "\n" << endl;

	system("pause");
	return 0;
}