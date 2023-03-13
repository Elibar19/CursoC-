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

	if (n1 == n2 && n1 == n3)
	{
		suma = n1 + n2;
		producto = suma * n3;

		cout << suma;
		cout << "\n";
		cout << producto;

	}
	return 0;
}