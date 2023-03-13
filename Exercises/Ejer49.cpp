#include<iostream>

using namespace std;

class OrdenarPaises
{
private:
	int habitantes[5];
	char paises[5][40];
public:
	void cargar();
	void ordenarNombre();
	void imprimir();
	void ordenarHabitantes();
};

void OrdenarPaises::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese el nombre del pais: ";
		cin.getline(paises[f], 40);
		cout << "Ingrese cantidad de habitantes: ";
		cin >> habitantes[f];
		cin.get();
	}
}

void OrdenarPaises::ordenarNombre() 
{
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (strcmp(paises[f], paises[f + 1]) > 0)
			{
				char auxpais[40];
				strcpy_s(auxpais, 40, paises[f]);
				strcpy_s(paises[f], 40, paises[f + 1]);
				strcpy_s(paises[f + 1], 40, auxpais);
				int auxhabitante;
				auxhabitante = habitantes[f];
				habitantes[f] = habitantes[f + 1];
				habitantes[f + 1] = auxhabitante;
			}
		}
	}
}

void OrdenarPaises::ordenarHabitantes()
{
	for (int k = 0; k < 4; k++)
	{
		for (int f = 0; f < 4 - k; f++)
		{
			if (habitantes[f] < habitantes[f+1])
			{
				char auxpais[40];
				strcpy_s(auxpais, 40, paises[f]);
				strcpy_s(paises[f], 40, paises[f + 1]);
				strcpy_s(paises[f + 1], 40, auxpais);
				int auxhabitante;
				auxhabitante = habitantes[f];
				habitantes[f] = habitantes[f + 1];
				habitantes[f + 1] = auxhabitante;
			}
		}
	}
}

void OrdenarPaises::imprimir()
{
	for (int f = 0; f < 5; f++)
	{
		cout << paises[f] << " - " << habitantes[f] << endl;
	}
	cout << endl;
}

int main()
{
	OrdenarPaises ordenar;
	ordenar.cargar();
	ordenar.ordenarHabitantes();
	ordenar.imprimir();
	ordenar.ordenarNombre();
	ordenar.imprimir();
	return 0;
}