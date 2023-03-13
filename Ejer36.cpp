/*En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
b) La suma total de los saldos acreedores.*/

#include<iostream>

using namespace std;

int main()
{
	int saldo, nroCuenta, sumaAcreedores;
	sumaAcreedores = 0;

	do {
		cout << "Ingrese el numero de cuenta: ";
		cin >> nroCuenta;
		if (nroCuenta >= 0)
		{
			cout << "Ingrese el saldo de la cuenta: ";
			cin >> saldo;

			if (saldo > 0)
			{
				cout << "El estado de la cuenta es Acreedor.";
				sumaAcreedores = sumaAcreedores + saldo;
			}
			else
				if (saldo < 0)
				{
					cout << "El estado de la cuenta es Deudor.";
				}
				else
				{
					cout << "El estado de la cuenta es Nulo.";
				}


		}
	} while (nroCuenta >= 0);

	cout << "La suma total de los saldos acreedores es: " << sumaAcreedores;
}