/*Se cuenta con la siguiente informaci�n:
Las edades de 5 estudiantes del turno ma�ana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.*/

#include<iostream>

using namespace std;

int main()
{
	float f, edad, suma1, suma2, suma3, promedioMa�ana, promedioTarde, promedioNoche;
	edad = 0;
	suma1 = 0;
	suma2 = 0;
	suma3 = 0;
	promedioMa�ana = 0;
	promedioTarde = 0;
	promedioNoche = 0;

	for (f = 1; f <= 22; f++)
	{
		if (f <= 5)
		{
			cout << "Ingrese la edad del estudiante del turno ma�ana: ";
			cin >> edad;

			suma1 = suma1 + edad;

		}

		promedioMa�ana = suma1 / 5;
	
		if (f>5 && f<=11)
		{
			cout << "Ingrese la edad del estudiante del turno tarde: ";
			cin >> edad;

			suma2 = suma2 + edad;

		}

		promedioTarde = suma2 / 6;

		if (f>11)
		{
			cout << "Ingrese la edad del estudiante del turno noche: ";
			cin >> edad;

			suma3 = suma3 + edad;

		}

		promedioNoche = suma3 / 11;
	}

	cout << "El promedio de edad del turno ma�ana es de: " << promedioMa�ana << endl;
	cout << "El promedio de edad del turno tarde es de: " << promedioTarde << endl;
	cout << "El promedio de edad del turno noche es de: " << promedioNoche << endl;
	if (promedioMa�ana < promedioTarde && promedioMa�ana < promedioNoche)
	{
		cout << "El turno ma�ana tiene un promedio menor de edades.";
	}
	else
	{
		if (promedioTarde < promedioNoche)
		{
			cout << "El turno tarde tiene un promedio menor de edades.";
		}
		else
		{
			cout << "El turno noche tiene un promedio menor de edades.";
		}
	}
	return 0;

}