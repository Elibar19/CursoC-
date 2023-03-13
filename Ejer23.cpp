#include<iostream>
using namespace std;
int main()
{
	int num, x;
	x = 1;
	num = 0;

	while (x <= 25)
	{
		cout << num << endl;
		x = x + 1;
		num = num + 11;
	}

	return 0;
}