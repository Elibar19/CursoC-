/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.*/

#include<iostream>

using namespace std;

class Parcial {
private:
	int cursoA[5];
	int cursoB[5];
public:
	void cargar();
	void calcular();
};

void Parcial::cargar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese la nota del alumno del curso A: ";
		cin >> cursoA[f];
		
	}
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese la nota del alumno del curso B: ";
		cin >> cursoB[f];

	}
}

void Parcial::calcular() 
{
	int sumaA = 0;
	int sumaB = 0;
	int promedioA = 0;
	int promedioB = 0;
	for (int f = 0; f < 5; f++)
	{
		sumaA = sumaA + cursoA[f];
		sumaB = sumaB + cursoB[f];

	}

	promedioA = sumaA / 5;
	promedioB = sumaB / 5;

	if (promedioA > promedioB)
	{
		cout << "El curso A obtuvo un mayor promedio general";
	}
	else
	{
		cout << "El curso B obtuvo un mayor promedio general:";
	}
	cin.get();
	cin.get();
}

int main()
{
	Parcial parcial;
	parcial.cargar();
	parcial.calcular();
	return 0;
}
