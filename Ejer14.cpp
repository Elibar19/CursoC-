#include<iostream>

using namespace std;

int main() {
	int dia, mes;
	cout << "Ingrese el dia: ";
	cin >> dia;
	cout << "Ingrese el mes: ";
	cin >> mes;

	if (mes == 12 && dia == 25)
	{
		cout << "La fecha ingresada es navidad";
	}
	return 0;
}
