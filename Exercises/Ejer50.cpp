#include<iostream>

using namespace std;

class Matriz
{
private:
	int matriz[2][5];
public:
	void cargar();
	void imprimir();
};

void Matriz::cargar()
{
	for (int c = 0; c < 5; c++)
	{
		for (int f = 0; f < 2; f++)
		{
			cout << "Ingrese el elemento de la fila " << f << " y la columna " << c << ": ";
			cin >> matriz[f][c];
		}
	}
}

void Matriz::imprimir()
{
	{
		for (int f = 0; f < 2; f++)
		{
			for (int c = 0; c < 5; c++)
			{
				cout << matriz[f][c];
			}
			cout << "\n";
		}
	}
	cin.get();
	cin.get();
}

int main()
{
	Matriz m;
	m.cargar();
	m.imprimir();
	return 0;
}