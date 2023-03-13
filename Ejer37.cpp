#include<iostream>

using namespace std;

class Empleado {
private:
	char nombre[40];
	float sueldo;
public:
	void inicializar();
	void imprimir();
	void pagaImpuestos();
};

void Empleado::inicializar()
{
	cout << "Ingrese nombre:";
	cin.getline(nombre, 40);
	cout << "Ingrese sueldo:";
	cin >> sueldo;
}

void Empleado::imprimir()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Sueldo: " << sueldo << endl;
}

void Empleado::pagaImpuestos()
{
	if (sueldo > 3000)
	{
		cout << "Debe pagar impuestos";
	}
	else
	{
		cout << "No debe pagar impuestos";
	}
	cin.get();
	cin.get();
}

int main()
{
	Empleado empleado1, empleado2;
	empleado1.inicializar();
	empleado1.imprimir();
	empleado1.pagaImpuestos();
	empleado2.inicializar();
	empleado2.imprimir();
	empleado2.pagaImpuestos();
	return 0;

}