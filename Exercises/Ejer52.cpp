/*
Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. 
En el constructor cargar los atributos y luego en otro método imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos 
(si el sueldo supera a 3000)*/

#include<iostream>

using namespace std;

class Empleado
{
private:
	char nombre[40];
	int sueldo;
public:
	Empleado();
	void datos();
	void impuestos();
};

Empleado::Empleado() 
{
	cout << "Ingrese el nombre del empleado: ";
	cin.get(nombre, 40);
	cout << "Ingrese el sueldo: ";
	cin >> sueldo;
}

void Empleado::datos()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Sueldo: " << sueldo << endl;
}

void Empleado::impuestos()
{
	if (sueldo > 3000)
		cout << "El empleado debe pagar impuestos.";
}

int main()
{
	Empleado empleado1;
	empleado1.datos();
	empleado1.impuestos();
	return 0;
}