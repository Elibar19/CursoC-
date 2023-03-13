#include<iostream>

using namespace std;

int main()
{
	int f, cantPuntos, x, y,c1,c2,c3,c4;
	c1 = 0;
	c2 = 0;
	c3 = 0;
	c4 = 0;
	x = 0;
	y = 0;

	cout << "Cuantos puntos ingresara?";
	cin >> cantPuntos;

	for (f = 1; f <= cantPuntos; f++)
	{
		cout << "Ingrese el valor de x del punto nro " << f <<": ";
		cin >> x;
		cout << "Ingrese el valor de y del punto nro " << f << ": ";
		cin >> y;

		if (x > 0 && y > 0)
		{
			c1++;
		}
		else
		{
			if (x < 0 && y > 0)
			{
				c2++;
			}
			else
			{
				if (x > 0 && y < 0)
				{
					c3++;
				}
				else
				{
					c4++;
				}
			}
		}
	}
	cout << "Cantidad de puntos en el primer cuadrante:";
	cout << c1;
	cout << "\n";
	cout << "Cantidad de puntos en el segundo cuadrante:";
	cout << c2;
	cout << "\n";
	cout << "Cantidad de puntos en el tercer cuadrante:";
	cout << c3;
	cout << "\n";
	cout << "Cantidad de puntos en el cuarto cuadrante:";
	cout << c4;
	return 0;
}