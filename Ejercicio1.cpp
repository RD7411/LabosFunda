#include "iostream"
#include "cmath"
using namespace std;
int main(void)

{
    float a;
    float b;
    float c;
    float prom;
    float numprom;
    float total;

    cout << endl;

    cout << "Promedio de 3 numeros " << endl << endl;
    cout << "El siguiente programa tiene por objetivo obtener el promedio entre 3 numeros cualesquiera." << endl << endl;
    cout << "A continuacion ingrese los numeros de los cuales desea obtener el promedio:" << endl << endl;

    cout << "Digite el primer valor:";
    cin >> a;

    cout << "Digite el segundo valor:";
    cin >> b;

    cout << "Digite el tercer valor:";
    cin >> c;

    numprom =3;

    prom = a + b + c;
    total = prom / numprom;
    cout << endl;
    cout << "El promedio de los tres numeros es:" << total << endl <<endl;
}