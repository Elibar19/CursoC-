#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Ingrese un numero de hasta 3 cifras: ";
	cin >> num;

	if (num < 10)
	{
		cout << "El numero tiene un digito";
	}
	else
	{
		if (num < 100)
		{
			cout << "El numero tiene dos digitos";
		}
		else
		{
			if (num < 1000)
			{
				cout << "El numero tiene tres digitos";
			}
			else {
				cout << "El numero es incorrecto, tiene mas de 3 cifas";
			}
		}
			
	}
	return 0;
}