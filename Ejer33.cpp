/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.*/

#include<iostream>

using namespace std;

int main()
{
	int f, num, numNeg, numPos, cantMultiplos, sumaPares;

	num = 0;
	numPos = 0;
	numNeg = 0;
	cantMultiplos = 0;
	sumaPares = 0;

	for (f = 1; f <= 10; f++)
	{
		cout << "Ingrese un numero: ";
		cin >> num;

		if (num > 0)
		{
			numPos++;
		}
		else
		{
			numNeg++;
		}
		if (num % 15 == 0)
		{
			cantMultiplos++;
		}
		if (num % 2 == 0)
		{
			sumaPares = sumaPares + num;
		}

	}
	cout << "Cantidad de valores negativos:";
	cout << numNeg;
	cout << "\n";
	cout << "Cantidad de valores positivos:";
	cout << numPos;
	cout << "\n";
	cout << "Cantidad de valores múltiplos de 15:";
	cout << cantMultiplos;
	cout << "\n";
	cout << "Suma de los valores pares:";
	cout << sumaPares;
	return 0;
}