/*En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. 
En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.*/

#include<iostream>

using namespace std;

class Notas
{
private:
	char nombre[4][40];
	float nota[4];
public:
	void cargar();
	void condicion();
	void cantidadAlumnosMuyBueno();
};

void Notas::cargar()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese el nombre del alumno: ";
		cin.getline(nombre[f], 40);
		cout << "Ingrese la nota del examen: ";
		cin >> nota[f];
		cin.get();
	}
}

void Notas::condicion()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Nombre: " << nombre[f] << endl;
		cout << "Nota: " << nota[f] << endl;
		if (nota[f] > 8)
		{
			cout << "Condicion: Muy bueno" << endl;
		}
		else
		{
			if (nota[f] >= 4)
			{
				cout << "Condicion: Bueno";
			}
			else
			{
				cout << "Condicion: Insuficiente";
			}
		}
		cout << "\n";
		cout << "\n";
	}
}

void Notas::cantidadAlumnosMuyBueno()
{
	int cantidad = 0;
	for (int f = 0; f < 4; f++)
	{
		if (nota[f] >= 8)
		{
			cantidad++;
		}
	}
	cout << "Cantidad de alumnos muy buenos:";
	cout << cantidad;
}


int main()
{
	Notas notaslumnos1;
	notaslumnos1.cargar();
	notaslumnos1.condicion();
	notaslumnos1.cantidadAlumnosMuyBueno();
	return 0;
}