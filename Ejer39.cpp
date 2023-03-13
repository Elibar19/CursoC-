/*Plantear una clase que permita cargar un valor entero por teclado. Definir un m�todo que solicite la carga del entero y 
llame a otro m�todo al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como par�metro 
(es decir el ingresado por teclado)*/

#include<iostream>

using namespace std;

class MostrarHasta {
private:
	void correrNro(int n);
public:
	void cargar();
};


void MostrarHasta::cargar()
{
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	correrNro(num);
}
void MostrarHasta::correrNro(int n)
{
	for (int f = 1; f <= n; f++)
	{
		cout << f << endl;
	}
}

int main() {
	MostrarHasta mostrarHasta1;
	mostrarHasta1.cargar();
	return 0;
}
