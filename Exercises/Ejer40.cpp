/*Desarrollar una clase con dos métodos, uno para la carga de dos enteros. }
Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.*/

#include<iostream>

using namespace std;

class Carga {
private:
	int devolverMayor(int n1, int n2);
public:
	void cargarNro();
};

void Carga::cargarNro()
{
	int n1, n2;
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	int resu = devolverMayor(n1,n2);
	cout << "El valor mayor de los numeros ingresados es:";
	cout << resu;
}

int Carga::devolverMayor(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}

int main()
{
	Carga comparacion1;
	comparacion1.cargarNro();
	return 0;
}