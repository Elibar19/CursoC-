#include <iostream>

using namespace std;

int main()
{
	int sueldo, a�os, sueldoTotal;
	cout << "Ingrese el valor de su sueldo: ";
	cin >> sueldo;
	cout << "Ingrese los a�os de antig�edad: ";
	cin >> a�os;

	if (sueldo < 500 && a�os >= 10)
	{
		sueldoTotal = sueldo * 1.2;
		cout << "Usted recibira un aumento del 20%, el sueldo total es ";
		cout << sueldoTotal;
	
	}
	else
	{
		if (sueldo < 500 && a�os < 10)
		{
			sueldoTotal = sueldo * 1.05;
			cout << "Usted recibira un aumento del 5%, el sueldo total es ";
			cout << sueldoTotal;
		}
		else 
		{
			cout << "Usted no recibira aumento";
		}
	}
	return 0;
}