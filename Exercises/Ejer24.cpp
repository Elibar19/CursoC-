#include<iostream>
using namespace std;
int main() {
	int num, x, res;
	x = 1;
	num = 8;
	res = 0;

	while (res <= 500)
	{
		res = num * x;
		x = x + 1;
		cout << res;

	}
	return 0;
}