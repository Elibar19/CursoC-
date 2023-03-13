#include<iostream>
using namespace std;
int main() {
	float n1, n2, n3, promedio;
	cout << "Ingrese la primer nota: ";
	cin >> n1;
	cout << "Ingrese la segunda nota: ";
	cin >> n2;
	cout << "Ingrese la tercer nota: ";
	cin >> n3;

	promedio = (n1 + n2 + n3) / 3;

	if (promedio > 7)
	{
		cout << "Promocionado";
	}
	return 0;
}