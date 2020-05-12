#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    string producto;
    float precio;
    float cantidad;
    float preciofinal;

    cout << endl;

    cout << "Producto comprado" << endl << endl;
    cout << "El siguiente programa tiene por objetivo saber el costo de algun producto comprado" << endl << endl;
    cout << "A continuacion ingrese el nombre del producto, cantidad comprada y precio de este:" << endl << endl;

    cout << "Escriba el nombre del producto: ";
    cin >> producto;

    cout << "Digite el precio del producto, incluyendo los centavos:";
    cin >> precio;

    cout << "Digite la cantidad del producto comprado (si no es exacto escribir los decimales):";
    cin >> cantidad;

    preciofinal = precio * cantidad;

    cout << "Usted compro " << cantidad; cout << " unidades de " << producto; cout << " que costaron " << precio; cout << " cada uno. Siendo un total de: " << preciofinal; cout << " dolares" << endl;
}