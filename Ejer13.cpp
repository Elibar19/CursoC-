#include<iostream>

using namespace std;

int main() {
	int cantPreguntas, cantCorrectas, nota;
	cout << "Ingrese la cantidad de preguntas realizadas: ";
	cin >> cantPreguntas;
	cout << "Ingrese la cantidad de preguntas contestadas correctamente: ";
	cin >> cantCorrectas;
	nota = (cantCorrectas * 100) / cantPreguntas;

	if (nota >= 90)
	{
		cout << "Nivel maximo";
	}
	else 
	{
		if (nota >= 75)
		{
			cout << "Nivel medio";
		}
		else
		{
			if (nota >= 50)
			{
				cout << "Nota regular";
			}
			else
			{
				cout << "Fuera de nivel";
			}
		}
	}
	return 0;	
}
