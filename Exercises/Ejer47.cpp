#include<iostream>

using namespace std;

class NroMenor
{
private:
    int vec[5];
    int menor;
public:
    void cargar();
    void comparar();
    void repiteMenor();
};

void NroMenor::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese un numero: ";
		cin >> vec[f];
	}
}

void NroMenor::comparar()
{
	int menor = vec[0];
	for (int f = 1; f < 5; f++)
	{
		if (vec[f] < vec[0])
		{
			menor = vec[f];
		}
	}
	cout << "El menor numero ingresado es el: " << menor;
}

void NroMenor::repiteMenor()
{
    int cant = 0;
    for (int f = 0; f < 5; f++)
    {
        if (vec[f] == menor)
        {
            cant++;
        }
    }
    if (cant >= 1)
    {
        cout << "Se repite el menor en el vector.";
    }
    else
    {
        cout << "No se repite el menor en el vector.";
    }
    cin.get();
    cin.get();
}

int main()
{
    NroMenor bm;
    bm.cargar();
    bm.comparar();
    bm.repiteMenor();
    return 0;
}