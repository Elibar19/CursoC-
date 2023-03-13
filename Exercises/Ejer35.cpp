/*Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). 
Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.*/

#include<iostream>

using namespace std;

int main()
{
	int suma, num;
	suma = 0;
	num = 0;
	do {
		cout << "Ingrese el valor a sumar. (La operacion finalizara cuando ingrese el valor 9999 ";
		cin >> num;

		if (num != 9999)
		{
			suma = suma + num;
		}

	} while (num != 9999);
	
	cout << suma;
	return 0;

}