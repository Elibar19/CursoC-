#include<iostream>
using namespace std;
int main() {
	int num, nP, nI, val, x;
	num = 0;
	nP = 0;
	nI = 0;
	val = 0;
	x = 1;

	cout << "Ingrese la cantidad de valores que desea ingresar: ";
	cin >> val;

	while (x <= val)
	{
		cout << "Ingrese un numero: ";
		cin >> num;
		x = x + 1;

		if (num % 2 == 0)
		{
			nP = nP + 1;
		}
		else
		{
			nI = nI + 1;
		}
	}

	cout << "Usted ha ingresado " << nP << " numeros pares" << endl;
	cout << "Usted ha ingresado " << nI << " numeros impares" << endl;
	return 0;
}