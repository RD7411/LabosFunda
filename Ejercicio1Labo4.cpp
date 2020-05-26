#include "iostream"
#include "string"

using namespace std;

int main(void)

{
    int a;
    int b;
    string res;

    cout << endl;

    cout << "Verificar si un numero es divisible entre otro." << endl << endl;
    cout << "El siguiente programa tiene como objetivo saber si un numero cualquiera es divisible entre otro." << endl << endl;
    cout << "A continuacion ingrese los valores del dividendo y divisor:" << endl << endl;

    cout << "Ingrese el valor del dividendo: ";
    cin >> a;
    cout << endl;

    cout << "Ingrese el valor del divisor: ";
    cin >> b;
    cout << endl;

    res = a % b == 0 ? "es divisible." : "no es divisible.";

    cout << "El numero ingresado " << res << endl;
    cout << endl;

    return 0;

}