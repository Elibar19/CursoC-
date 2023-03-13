#include<iostream>

using namespace std;

int main()
{
	int precio, cantidad, total;

	cout << "Ingrese el precio";
	cout << "\n";
	cin >> precio;
	cout << "Ingrese la cantidad que va a llevar";
	cout << "\n";
	cin >> cantidad;
	total = precio * cantidad;
	cout << "El total a pagar es:";
	cout << total;
	return 0;
}
