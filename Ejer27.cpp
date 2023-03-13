#include<iostream>

using namespace std;

int main()
{
	int n, f, altura, base, superficie, sM12;
	altura = 0;
	base = 0;
	superficie = 0;
	sM12 = 0;

	cout << "Indique cantidad de triangulos: ";
	cin >> n;

	for (f = 1; f <= n; f++)
	{
		cout << "Ingrese la altura: ";
		cin >> altura;
		cout << "Ingrese la base: ";
		cin >> base;

		superficie = (base * altura) / 2;

		cout << "La base del triangulo es " << base << endl;
		cout << "La altura del triangulo es " << altura << endl;
		cout << "La superficie del triangulo es " << superficie << endl;

		if (superficie >= 12)
		{
			sM12 = sM12 + 1;
		}
	}

	cout << "La cantidad de triangulos con superficie mayor a 12 es de: " << sM12;
	return 0;
}