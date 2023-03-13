#include<iostream>

using namespace std;

int main() 
{
	int x, y;
	cout << "Escriba la coordenada X distinta a 0: ";
	cin >> x;
	cout << "Escriba la coordenada Y distinta a 0: ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "La coordenada se encuentra en el primer cuadrante";
	}
	else
	{
		if (x > 0 && y < 0)
		{
			cout << "La coordenada se encuentra en el segundo cuadrante";
		}
		else
		{
			if (x < 0 && y < 0)
			{
				cout << "La coordenada se encuentra en el tercer cuadrante";
			}
			else
			{
				cout << "La coordenada se encuentra en el cuarto cuadrante";
			}
		}
	}
	return 0;
}