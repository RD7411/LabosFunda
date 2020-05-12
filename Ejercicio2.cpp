#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    float radio;
    float radiocua;
    float dosperi;
    float pi; 
    float area;
    float perimetro;

    pi = 3.1416;
    dosperi = 2;

    cout << endl;

    cout << "Area y perimetro de un circulo" << endl << endl;
    cout << "El siguiente programa tiene como objetivo calcular el area y perimetro de un circulo en base a su radio" << endl << endl;
    cout << "A continuacion ingrese el valor del radio para calcular el area y perimetro de un circulo:" << endl << endl;

    cout << "Digite el valor del radio:";
    cin >> radio;

    radiocua = pow (radio , dosperi);
    area = pi * radiocua;

    perimetro = dosperi * pi * radio;

    cout << endl;

    cout << "El area del circulo es:" << area; cout <<" y el perimetro es:" << perimetro << endl << endl;
}