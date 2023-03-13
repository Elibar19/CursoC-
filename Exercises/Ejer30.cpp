#include<iostream>

using namespace std;

int main()
{
	int f, num, res;

	cout << "Ingrese un numero: ";
	cin >> num;

	for (f = num; f<= num*12; f=f+num)
	{
		cout << f << endl;
	}
	return 0;
}