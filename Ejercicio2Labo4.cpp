#include "iostream"
#include "string"

using namespace std;

int main(void)

{
    int n;
    string res;

    cout << endl;
    
    cout << "Verificar si un numero es par o impar." << endl << endl;
    cout << "El siguiente programa tiene como objetivo saber si un numero cualquiera es par o impar." << endl << endl;
    cout << "A continuacion ingrese el numero del cual se desea saber si es par o impar: " << endl << endl;

    cout << "Digite el numero: ";
    cin >> n;
    cout << endl;

    res = n % 2 == 0 ? "es par." : "es impar.";

    cout << "El numero indicado " << res << endl; 
    cout << endl;

    return 0;
 
}