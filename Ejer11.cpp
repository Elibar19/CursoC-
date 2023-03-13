#include<iostream>

using namespace std;

int main() {
	int n1;
	cout << "Ingrese un numero: ";
	cin >> n1;

	if (n1 == 0)
	{
		cout << "Se ingreso el valor 0";
	}
	else
	{
		if (n1 > 0)
		{
			cout << "Se ingreso un numero positivo";
		}
		else
		{
			cout << "Se ingreso un numero negativo";
		}
	}
	return 0;

}