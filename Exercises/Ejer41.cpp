/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.*/

#include<iostream>

using namespace std;

class Suma {
private:
    int num[8];
public:
    void cargar();
    void acumularElementos();
    void acumularMayores36();
    void CantidadMayores50();
};

void Suma::cargar()
{
    for (int f = 0; f < 8; f++)
    {
        cout << "Ingrese un valor: ";
        cin >> num[f];
    }
}

void Suma::acumularElementos()
{
    int suma;
    suma = 0;
    for (int f = 0; f < 8; f++)
    {
        suma += num[f];
    }
    cout << "La suma de los 8 elementos es:";
    cout << suma;
    cout << "\n";
}

void Suma::acumularMayores36()
{
    int M36;
    M36 = 0;
    for (int f = 0; f < 8; f++)
    {
        if (num[f] > 36)
        {
            M36 = M36 + num[f];
        }
    }
    cout << "EL valor acumulado de los numeros mayores a 36 es: " << M36 << endl;
}

void Suma::CantidadMayores50()
{
    int M50;
    M50 = 0;
    for (int f = 0; f < 8; f++)
    {
        if (num[f] > 50)
        {
            M50++;
        }
    }
    cout << "La cantidad de numeros mayores a 50: " << M50 << endl;
    cin.get();
    cin.get();
}

int main()
{
    Suma pv4;
    pv4.cargar();
    pv4.acumularElementos();
    pv4.acumularMayores36();
    pv4.CantidadMayores50();
    return 0;
}