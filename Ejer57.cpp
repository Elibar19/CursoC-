/*Plantear una clase llamada Punto con dos atributos llamados x e y.
Definir dos constructores uno sin par�metros donde cargue en los atributos x e y el valor cero y
otro con dos par�metros que cargue los atributos x e y con los valores que llegan al constructor.
Imprimir los valores de los atributos.*/

#include<iostream>

using namespace std;

class Punto {
    int x, y;
public:
    Punto();
    Punto(int x, int y);
    void imprimir();
};

Punto::Punto()
{
    x = 0;
    y = 0;
}

Punto::Punto(int x2, int y2)
{
    x = x2;
    y = y2;
}

void Punto::imprimir()
{
    cout << x << "-" << y;
    cout << endl;
}

int main()
{
    Punto p1;
    p1.imprimir();
    Punto p2(5, 10);
    p2.imprimir();
    return 0;

}