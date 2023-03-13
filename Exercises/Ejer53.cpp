#include<iostream>

using namespace std;

class Operaciones
{
private:
	int n1, n2;
public:
	Operaciones(int num1, int num2);
	void suma();
	void resta();
	void multi();
	void divi();
};

Operaciones::Operaciones(int num1, int num2)
{
	n1 = num1;
	n2 = num2;
}

void Operaciones::resta()
{
	cout << "La resta es: " << n1 - n2 << endl;
}

void Operaciones::multi()
{
	cout << "La multiplicacion es: " << n1 * n2 << endl;
}
void Operaciones::suma()
{
	cout << "La suma es: " << n1 + n2 << endl;
}
void Operaciones::divi()
{
	cout << "La division es: " << n1 / n2 << endl;
}

int main()
{
	Operaciones cuentas(100,50);
	cuentas.suma();
	cuentas.resta();
	cuentas.multi();
	cuentas.divi();
	return 0;
}