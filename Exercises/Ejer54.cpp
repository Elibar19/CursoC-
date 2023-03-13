#include <iostream>

using namespace std;

class Sumatoria
{
private:
	int suma;
public:
	Sumatoria();
	~Sumatoria();

};

Sumatoria::Sumatoria()
{
	int num;
	suma = 0;
	do
	{
		cout << "Ingrese un numero (ingrese 0 para finalizar)";
		cin >> num;
		suma += num;
	} while (num != 0);
}

Sumatoria::~Sumatoria()
{
	cout << "La suma de todos los numeros es: " << suma << endl;
	cin.get();
	cin.get();
}

int main()
{
	Sumatoria sumatoria1;
	return 0;
}