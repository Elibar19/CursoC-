#include <iostream>

using namespace std;

int main()
{
	int sueldo, años, sueldoTotal;
	cout << "Ingrese el valor de su sueldo: ";
	cin >> sueldo;
	cout << "Ingrese los años de antigüedad: ";
	cin >> años;

	if (sueldo < 500 && años >= 10)
	{
		sueldoTotal = sueldo * 1.2;
		cout << "Usted recibira un aumento del 20%, el sueldo total es ";
		cout << sueldoTotal;
	
	}
	else
	{
		if (sueldo < 500 && años < 10)
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