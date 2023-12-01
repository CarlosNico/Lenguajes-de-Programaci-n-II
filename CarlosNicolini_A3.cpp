#include <iostream>
#include<stdlib.h>

using namespace std;

class Tornillo {
private:
    string tipo;
    float medida;
public:
    Tornillo();
    ~Tornillo(); //Destructor
    void setTornillo(string, float);
    string getTornillotipo();
    float getTornillomedida();
};

//Constructor
Tornillo::Tornillo() {
}

//Destructor
Tornillo::~Tornillo() {
}

//Asignamos valores a los atributos
void Tornillo::setTornillo(string _tipo, float _medida) {
    tipo = _tipo;
    medida = _medida;
}

string Tornillo::getTornillotipo() {
    return tipo;
}

float Tornillo::getTornillomedida() {
    return medida;
}

class Cabeza : public Tornillo {
private:
    string forma;
public:
    Cabeza();
    ~Cabeza();
    void setCabeza(string, float, string);
    string getCabezaforma();

};

//Constructor
Cabeza::Cabeza() {
}

//Destructor
Cabeza::~Cabeza() {
}

//Asignamos valores a los atributos
void Cabeza::setCabeza(string _tipo, float _medida, string _forma) {
    forma = _forma;
}

string Cabeza::getCabezaforma() {
    return forma;
}

class Cantidad : public Tornillo {
private:
    int unidades;
public:
    Cantidad();
    ~Cantidad();
    void setCantidad(string, float, int);
    int getCantidadunidades();

};

//Constructor
Cantidad::Cantidad() {
}

//Destructor
Cantidad::~Cantidad() {
}
//Asignamos valores a los atributos
void Cantidad::setCantidad(string _tipo, float _medida, int _unidades) {
    unidades = _unidades;
}

int Cantidad::getCantidadunidades() {
    return unidades;
}

class Ubicacion : public Tornillo {
private:
    int pasillo;
    string estante;
public:
    Ubicacion();
    ~Ubicacion();
    void setUbicacion(string, float, int, string);
    int getUbipasillos();
    string getUbiestante();

};

//Constructor
Ubicacion::Ubicacion() {
}

//Destructor
Ubicacion::~Ubicacion() {
}

//Asignamos valores a los atributos
void Ubicacion::setUbicacion(string _tipo, float _medida, int _pasillo, string _estante) {
    pasillo = _pasillo;
    estante = _estante;
}

int Ubicacion::getUbipasillos() {
    return pasillo;
}

string Ubicacion::getUbiestante() {
    return estante;
}

int main() {
    Tornillo Tornillo1;
    Tornillo Tornillo2;
    Cabeza Cabeza1;
    Cantidad Cantidad1;
    Ubicacion Ubicacion1;

    Tornillo1.setTornillo("Madera", 20.5);
    cout << "El tornillo es para: " << Tornillo1.getTornillotipo() << endl;
    cout << "Tiene una medida de: " << Tornillo1.getTornillomedida() << " cm" << endl;
    cout << "\n" << endl;
   

    Cabeza1.setCabeza("Madera", 20.5, "Phillips");
    cout << "El tornillo es para: " << Tornillo1.getTornillotipo() << endl;
    cout << "Tiene una medida de: " << Tornillo1.getTornillomedida() << " cm" << endl;
    cout << "Tipo de cabeza es: " << Cabeza1.getCabezaforma() << endl;
    cout << "\n" << endl;
    

    Tornillo2.setTornillo("Metal", 3.5);
    //Cabeza1.setCabeza("Metal", 10.7, "Phillips");
    Cantidad1.setCantidad("Metal", 3.5, 10000);
    cout << "El tornillo es para: " << Tornillo2.getTornillotipo() << endl;
    cout << "Tiene una medida de: " << Tornillo2.getTornillomedida() << " cm" << endl;
    cout << "Tipo de cabeza es: " << Cabeza1.getCabezaforma() << endl;
    cout << "El numero de unidades disponibles en almacen es: " << Cantidad1.getCantidadunidades() << endl;
    cout << "\n" << endl;
    

    Ubicacion1.setUbicacion("Metal", 3.5, 4, "D7");
    cout << "El tornillo es para: " << Tornillo2.getTornillotipo() << endl;
    cout << "Tiene una medida de: " << Tornillo2.getTornillomedida() << " cm" << endl;
    cout << "Se encuentra en el pasillo numero: " << Ubicacion1.getUbipasillos() << endl;
    cout << "El numero de unidades disponibles en almacen es: " << Ubicacion1.getUbiestante() << endl;
    cout << "\n" << endl;
    Tornillo2.~Tornillo();
    Cabeza1.~Cabeza();
    Cantidad1.~Cantidad();
    Ubicacion1.~Ubicacion();


    system("pause");
    return 0;
}