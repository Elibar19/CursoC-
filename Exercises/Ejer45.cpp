/*Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. 
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.*/

#include<iostream>

using namespace std;

class Productos
{
private:
	char producto[5][40];
	int precio[5];
public:
	void cargar();
	void imprimir();
	void comparar();
};

void Productos::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Escriba el producto: ";
		cin.getline(producto[f],40);
		cout << "Escriba el precio: ";
		cin >> precio[f];
		cin.get();
	}
}

void Productos::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		cout << producto[f] << " - " << "$" << precio[f] << endl;
	}
}

void Productos::comparar()
{
	int precioMayor = 0;

	for (int f = 0; f < 5; f++)
	{
		if (precio[0] < precio[f])
		{
			precioMayor += 1;
		}
	}
	cout << "Hay " << precioMayor << " productos que tienen un precio mayor al primero";
	cin.get();
}


int main()
{
Productos productos;
productos.cargar();
productos.imprimir();
productos.comparar();
}
