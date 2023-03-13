#include<iostream>

using namespace std;

int main() {
	float n1, n2, suma, producto, diferencia, cociente;
	cout << "Ingrese el primer valor: ";
	cin >> n1;
	cout << "Ingrese el segundo valor: ";
	cin >> n2;
	if (n1 > n2)
	{
		cout << "La suma de los dos numeros es: ";
		suma = n1 + n2;
		cout << suma;
		cout << "\n";
		cout << "La diferencia de los dos numeros es: ";
		diferencia = n1 - n2;
		cout << diferencia;
	}
	else
	{
		cout << "El producto de los dos numeros es: ";
		producto = n1 * n2;
		cout << producto;
		cout << "\n";
		cout << "La division de los dos numeros es: ";
		cociente = n1 / n2;
		cout << cociente;
	}
		return 0;
}
