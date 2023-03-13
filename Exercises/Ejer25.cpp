#include <iostream>
using namespace std;
int main() {
	int lista1, lista2, num, x, y;
	num = 0;
	x = 1;
	y = 1;
	lista1 = 0;
	lista2 = 0;

	while (x <= 15)
	{
		cout << "Ingrese el valor nro " << x << " de la lista 1: ";
		cin >> num;

		lista1 = lista1 + num;
		x = x + 1;

	}

	while (y <= 15)
	{
		cout << "Ingrese el valor nro " << y << " de la lista 2: ";
		cin >> num;

		lista2 = lista2 + num;
		y = y + 1;

	}

	if (lista1 > lista2)
	{
		cout << "La lista 1 acumula un mayor valor" << endl;
	}
	else
	{
		if (lista2 > lista1)
		{
			cout << "La lista 2 acumula un mayor valor" << endl;
		}
		else
		{
			cout << "El valor de ambas listas es igual" << endl;
		}
	}
	return 0;
}