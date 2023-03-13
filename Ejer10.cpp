#include<iostream>

using namespace std;

int main() {
	int n1, n2, n3;
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	cout << "Ingrese el tercer numero: ";
	cin >> n3;

	if (n1 > n2)
	{
		if (n1 > n3)
		{
			cout << n1;
		}
		else
		{
			cout <<n3;
		}
	}
	else {
		if (n2 > n3)
		{
			cout << n2;
		}
		else {
			cout << n3;
		}
	}
	return 0;
}