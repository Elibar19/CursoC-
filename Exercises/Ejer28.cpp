//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.

#include<iostream>

using namespace std;

int main()
{
	int n, suma, valor;

	suma = 0;
	valor = 0;

	for (n = 1; n <= 10; n++)
	{
		cout << "Ingrese el valor del numero " << n << " :";
		cin >> valor;

		if (n > 5)
		{
			suma = suma + valor;
		}

	}

	cout << "La suma de los ultimos 5 numeros es: " << suma;
	return 0;
}