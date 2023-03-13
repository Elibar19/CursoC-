/*
Se desea saber la temperatura media trimestral de cuatro paises pequeños. Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
a - Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
b - Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
c - Calcular la temperatura media trimestral de cada país.
d - Imprimir los nombres de los países y las temperaturas medias trimestrales.
e - Imprimir el nombre del país con la temperatura media trimestral mayor.*/

#include<iostream>

using namespace std;
class Temp
{
private:
	float temp[4][3];
	char pais[4][40];
	float promTemp[4];
public:
	void cargar();
	void imprimir();
	void calcularProm();
	void tempMayor();
};

void Temp::cargar()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese el nombre del pais: ";
		cin.get(pais[f], 40);
		for (int c = 0; c < 3; c++)
		{
			cout << "Ingrese la temperatura mensual: ";
			cin >> temp[f][c];
			cin.get();
		}

	}
}

void Temp::imprimir()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Pais: " << pais[f] << ":" << endl;
		for (int c = 0; c < 3; c++)
		{
			cout << temp[f][c] << " " << endl;
			
		}
		cout << "\n";
	}
}

void Temp::calcularProm()
{
	for (int f = 0; f < 4; f++)
	{
		int suma = 0;
		for (int c = 0; c < 3; c++)
		{
			suma += temp[f][c];

		}
		promTemp[f] = suma / 3;
		cout << "\n";
	}
}

void Temp::tempMayor()
{
	float tempMayor = promTemp[0];
	char nom[40];
	strcpy_s(nom, 40, pais[0]);
	for (int f = 0; f < 4; f++)
	{
		if (tempMayor < promTemp[f])
		{
			tempMayor = promTemp[f];
			strcpy_s(nom, 40, pais[f]);
			
		}
	}
	cout << "Pais con temperatura trimestral mayor es " << nom << " que tiene una temperatura de " << tempMayor;
}

int main()
{
	Temp temperatura;
	temperatura.cargar();
	temperatura.imprimir();
	temperatura.calcularProm();
	temperatura.tempMayor();
	return 0;
}
