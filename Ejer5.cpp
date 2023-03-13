#include<iostream>

using namespace std;

int main()
{
	int suma, promedio, n1, n2, n3, n4;
	cout << "Ingrese el primer valor";
	cout << "\n";
	cin >> n1;
	cout << "Ingrese el segundo valor";
	cout << "\n";
	cin >> n2;
	cout << "Ingrese el tercer valor";
	cout << "\n";
	cin >> n3;
	cout << "Ingrese el cuarto valor";
	cout << "\n";
	cin >> n4;
	suma = n1 + n2 + n3 + n4;
	promedio = suma / 4;
	cout << "La suma de los dos numeros es:";
	cout << suma;
	cout << "\n";
	cout << "El proemdio de los numeros es:";
	cout << promedio;
	return 0;
}

