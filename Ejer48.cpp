/*Cargar un vector de 5 elementos enteros. 
Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.*/

#include<iostream>

using namespace std;

class Orden
{
private:
	int vec[5];
public:
	void cargar();
	void ordenarMenorAmayor();
	void ordenarMayorAmenor();
	void imprimir();
};

void Orden::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese un elemento: ";
		cin >> vec[f];
	}
}

void Orden::ordenarMenorAmayor()
{
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (vec[f] > vec[f + 1])
			{
				int aux;
				aux = vec[f];
				vec[f] = vec[f + 1];
				vec[f + 1] = aux;
			}

		}
	}
}

void Orden::ordenarMayorAmenor()
{
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (vec[f] < vec[f + 1])
			{
				int aux;
				aux = vec[f];
				vec[f] = vec[f + 1];
				vec[f + 1] = aux;
			}

		}
	}
}

void Orden::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		cout << vec[f] << " - ";
	}
	cout << endl;
}

int main()
{
	Orden ordenar;
	ordenar.cargar();
	ordenar.ordenarMayorAmenor();
	ordenar.imprimir();
	ordenar.ordenarMenorAmayor();
	ordenar.imprimir();
	return 0;

}