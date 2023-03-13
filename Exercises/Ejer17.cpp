#include<iostream>

using namespace std;

int main() {
	int n1, n2, n3, suma, producto;
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	cout << "Ingrese el tercero numero: ";
	cin >> n3;

	if (n1 < 10 || n2 < 10 || n3 < 10)
	{

		cout << "Al menos un numero es menor a diez";


	}
	return 0;
}