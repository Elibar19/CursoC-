#include<iostream>

using namespace std;

class Operaciones {
private:
	int n1,n2;
public:
	void inicializar();
	void sumar();
	void restar();
	void multiplicar();
	void dividir();
};

void Operaciones::inicializar()
{
	cout << "Escriba el primer numero: ";
	cin >> n1;
	cout << "Escriba el segundo numero: ";
	cin >> n2;
}

void Operaciones::sumar()
{
	int suma = n1 + n2;
	cout << suma << endl;
}

void Operaciones::restar()
{
	int suma = n1 - n2;
	cout << suma << endl;
}

void Operaciones::dividir()
{
	int suma = n1 / n2;
	cout << suma << endl;
}

void Operaciones::multiplicar()
{
	int suma = n1 * n2;
	cout << suma << endl;
}

int main()
{
	Operaciones operacion1, operacion2;
	operacion1.inicializar();
	operacion1.sumar();
	operacion1.restar();
	operacion1.multiplicar();
	operacion1.dividir();
	operacion2.inicializar();
	operacion2.sumar();
	operacion2.restar();
	operacion2.multiplicar();
	operacion2.dividir();
	return 0;
}