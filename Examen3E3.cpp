#include "iostream"
#include "string"
#include "cstring"

using namespace std;

int main(void)

{
    // Se declaran las funciones:
     int anio;
    
    
    cout <<endl;

    cout << "Conocer si un año es bisiesto" << endl << endl;
    cout << "Ingrese un año para saber si este es bisiesto" << endl << endl;

    cout << "Digite el año: ";
    cin >> anio;
    cout << endl; 

// Funciones a utilizar
    if (anio % 4 != 0) cout << "El año no es bisiesto";
    else if (anio % 100 != 0) cout << "El año es bisiesto";
    else if (anio % 100 != 0) cout << "El año no es bisiesto";

return 0;
}