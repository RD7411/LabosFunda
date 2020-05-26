#include "iostream"
#include "string"

using namespace std;

int main(void)

{
    int n;
    
    cout << endl;
    
    cout << "Verificar si un numero es positivo, negativo o cero." << endl << endl;
    cout << "El siguiente programa tiene como objetivo saber si un numero cualquiera es positivo, negativo o cero" << endl << endl;
    cout << "A continuacion digite el numero a verificar: " << endl << endl;

    cout << "Digite el numero: ";
    cin >> n;
    cout << endl;

    if (n == 0) 
    {
        cout << "El numero " << n; cout << " es igual a cero." <<endl << endl;
    }
    else
        if (n < 0)
        {
          cout << "El numero " << n; cout << " es negativo." <<endl << endl;  
        }
        else
        if (n > 0 )
        {
            cout << "El numero " << n; cout << " es positivo." <<endl << endl;
        }
    return 0;

}