#include "iostream"
#include "cstring"
#include "string"

using namespace std;
 
int main(void)

{
    char x;
    char palabra [40];

    cout << endl;

    cout << "Verificar si una palabra inicia y finaliza con la misma letra." << endl << endl;
    cout << "El siguiente programa tiene como objetivo saber si una palabra inicia y finaliza con la misma letra." << endl << endl;
    cout << "A continuacion ingrese la palabra a evaluar:" << endl << endl;

    cout << "Ingrese la palabra: ";
    cin >> palabra;
    cout << endl;

    x = strlen(palabra);

    if (palabra[0] == palabra [x - 1])
    {
        cout << "La palabra inicia y finaliza con la misma letra" << endl;
    }
    else
    {
        cout << "La palabra no inicia y finaliza con la misma letra" << endl;
    }
    
    cout << endl;
 
    return 0;

}