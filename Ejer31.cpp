/* Realizar un programa que lea los lados de n triángulos, e informar :
a) De cada uno de ellos, qué tipo de triángulo es : equilátero(tres lados iguales), isósceles(dos lados iguales), o escaleno(ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.*/

#include<iostream>

using namespace std;

int main() {

	int f, nT, l1, l2, l3, equi, iso, esca;

	l1 = 0;
	l2 = 0;
	l3 = 0;
	equi = 0;
	iso = 0;
	esca = 0;

	cout << "Cuantos triangulos medira? ";
	cin >> nT;

	for (f = 1; f <= nT; f++)
	{
		cout << "Escriba la medida del primer lado del triangulo nro " << f << endl;
		cin >> l1;
		cout << "Escriba la medida del segundo lado del triangulo nro " << f << endl;
		cin >> l2;
		cout << "Escriba la medida del tercer lado del triangulo nro " << f << endl;
		cin >> l3;

		if (l1 == l2 && l1 == l3)
		{
			equi = equi + 1;
		}
		else
		{
			if (l1 == l2 || l1 == l3 || l2 == l3)
			{
				iso = iso + 1;
			}
			else
			{
				esca = esca + 1;
			}

		}
	}

	cout << "Hay " << equi << " triangulos equilateros." << endl;
	cout << "Hay " << iso << " triangulos isoceles." << endl;
	cout << "Hay " << esca << " triangulos escalenos." << endl;

	if (equi < iso && equi < esca)
	{
		cout << "El triangulo de menor cantidad es el equilatero";
	}
	else {
		if (iso < equi && iso < esca)
		{
			cout << "El triangulo de menor cantidad es el isoceles";
		}
		else
		{
			if (esca < equi && esca < iso)
			{
				cout << "El triangulo de menor cantidad es el escaleno";
			}
			else
			{
				if (equi == esca)
				{
					if (equi < iso) cout << "La cantidad de triangulos Equilateros y Escalenos es igual y es la menor cantidad";
					else cout << "Hay menos cantidad de triangulos Isosceles";
				}
				else if (equi == iso)
				{
					if (equi < esca) cout << "La cantidad de triangulos Equilateros e Isosceles es igual y es la menor cantidad";
					else cout << "Hay menos cantidad de triangulos Escalenos";
				}
				else
				{
					if (esca < equi) cout << "La cantidad de triangulos Escalenos e Isosceles es igual y es la menor cantidad";
					else cout << "Hay menos cantidad de triangulos Equilateros";
				}
			}
		}

		return 0;
	}
}