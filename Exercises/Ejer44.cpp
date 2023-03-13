#include<iostream>

using namespace std;

class Orden
{
private:
	int vec[10];
public:
	void cargar();
	void comprobarOrden();
};

void Orden::cargar()
{
	for (int f = 0; f < 10; f++)
	{
		cout << "Ingrese un numero: ";
		cin >> vec[f];
	}
}

void Orden::comprobarOrden()
{
    int orden = 1;
    for (int f = 0; f < 9; f++)
    {
        if (vec[f + 1] < vec[f])
        {
            orden = 0;
        }
    }
    if (orden == 1)
    {
        cout << "Esta ordenado de menor a mayor";
    }
    else
    {
        cout << "No esta ordenado de menor a mayor";
    }
    cin.get();
    cin.get();
}

int main()
{
    Orden orden1;
    orden1.cargar();
    orden1.comprobarOrden();
    return 0;
}