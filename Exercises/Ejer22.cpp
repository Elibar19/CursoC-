#include<iostream>
using namespace std;
int main()
{
	int x, n, sueldo, nSueldos1, nSueldos2, totalSueldos;
	x = 1;
	sueldo = 0;
	nSueldos1 = 0;
	nSueldos2 = 0;
	totalSueldos = 0;

	cout << "Ingrese la cantidad de empleados: ";
	cin >> n;

	while (x <= n)
	{
		cout << "Ingrese el sueldo del empleado: ";
		cin >> sueldo;
		totalSueldos = sueldo + totalSueldos;
		if (sueldo > 100 && sueldo < 300)
		{
			nSueldos1 = nSueldos1 + 1;

		}
		else
		{
			nSueldos2 = nSueldos2 + 1;
		}
		x = x + 1;
	}
	cout << "Los empleados que cobran mas de 300 son: ";
	cout << nSueldos2;
	cout << "\n";
	cout << "Los empleados que cobran entre 100 y 300 son: ";
	cout << nSueldos1;
	cout << "\n";
	cout << "El total que se gasta en sueldos es de: ";
	cout << totalSueldos;
	return 0;

}