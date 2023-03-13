#include<iostream>
using namespace std;
int main() {
	int n1;
	cout << "Ingrese un numero entero entre 1 y 99: ";
	cin >> n1;

	if (n1 >= 10)
	{
		cout << "El numero tiene dos digitos";
	}
	else
	{
		cout << "El numero tiene un digito";
	}
}