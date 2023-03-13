/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. 
Sumar componente a componente.*/

#include<iostream>

using namespace std;

class SumaVectores
{
private:
	int vec1[4];
	int vec2[4];
	int vec3[4];
public:
	void cargar();
	void sumar();
};

void SumaVectores::cargar()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese los valores del primer vector: ";
		cin >> vec1[f];
	}
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese los valores del segundo vector: ";
		cin >> vec2[f];
	}
}

void SumaVectores::sumar()
{
	for (int f = 0; f < 4; f++)
	{
		vec3[f] = vec1[f] + vec2[f];
		
	}
	cout << "Vector resultante.";
	cout << "\n";
	for (int f = 0; f < 4; f++)
	{
		cout << vec3[f];
		cout << "\n";
	}
	cin.get();
	cin.get();
}

int main() {
	SumaVectores pv5;
	pv5.cargar();
	pv5.sumar();
	return 0;
}