#include<iostream>
using namespace std;
int main() {
	int cantidadP, x;
	float altura, promedio, suma;

	x = 1;
	cantidadP = 0;
	altura = 0;
	promedio = 0;
	suma = 0;

	cout << "Ingrese cuantas personas van a ser medidas: ";
	cin >> cantidadP;

	while (x <= cantidadP)
	{
		cout << "Ingrese la altura de la persona: ";
		cin >> altura;
		
		suma = suma + altura;
		x = x + 1;
	}

	promedio = suma / cantidadP;
	cout << "El promedio de altura de todas las personas es: ";
	cout << promedio;
	
	return 0;


}