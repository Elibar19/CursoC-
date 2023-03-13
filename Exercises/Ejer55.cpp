/*Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. 
En el constructor cargarlo con valores aleatorios entre 0 y 10*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class enterosRandom {
	int vec[5];
public:
	enterosRandom();
	void mayor();
	void menor();
	void imprimir();
};

enterosRandom::enterosRandom()
{
	srand(time(NULL));
	for (int f = 0; f < 5; f++)
	{
		vec[f] = rand() % 11;
	}
}

void enterosRandom::mayor()
{
	int mayor = vec[0];
	for (int f = 0; f < 5; f++)
	{
		if (vec[f] > mayor)
		{
			mayor = vec[f];
		}

	}

	cout << "El numero mayor es: " << mayor << endl;
	cout << endl;
}

void enterosRandom::menor()
{
	int menor = vec[0];
	for (int f = 0; f < 5; f++)
	{
		if (vec[f] < menor)
		{
			menor = vec[f];
		}

	}

	cout << "El numero menor es: " << menor << endl;
	cout << endl;
}

void enterosRandom::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		cout << vec[f] << "|";
		

	}
	cout << endl;
}

int main()
{
	enterosRandom random;
	random.imprimir();
	random.menor();
	random.mayor();
	return 0;
}