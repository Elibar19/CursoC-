#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Vector
{
	int vec[5];
public:
	Vector();
	void imprimir(); //imprime todo el vector
	void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
	void imprimir(int desde, int hasta);//imprime un rango de valores del vector.
};

Vector::Vector()
{
	srand(time(NULL));
	for (int f = 0; f < 5; f++)
	{
		vec[f] = rand() % 5;
	}
}

void Vector::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		cout << vec[f] << " | ";
	}
	cout << endl;
}

void Vector::imprimir(int hasta)
{
	for (int f = 0; f <= hasta; f++)
	{
		cout << vec[f] << " | ";
	}
	cout << endl;
}

void Vector::imprimir(int desde, int hasta)
{
	for (int f = desde; f <= hasta; f++)
	{
		cout << vec[f] << " | ";
	}
	cout << endl;
}

int main()
{
	Vector v1;
	v1.imprimir();
	v1.imprimir(2);
	v1.imprimir(2, 4);
	return 0;
}