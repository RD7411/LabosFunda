#include "iostream"
#include "cstring"

using namespace std;
 
int main(void)

{
    char texto[40];
    string res;
    string poi;

    cout << endl;
    
    cout << "Verificar si una palabra contiene mas de 10 caracteres y si la longitud es par o impar." << endl << endl;
    cout << "El siguiente programa tiene como objetivo saber si una palabra esta formada por mas de diez caracteres y si la longitud de esta es par o impar." << endl << endl;
    cout << "A continuacion ingrese la palabra a evaluar:" << endl << endl;

    cout << "Ingrese la palabra: ";
    cin >>  texto;
    cout << endl;

    res = strlen(texto) > 10 ? "tiene mas de 10 caracteres" : "tiene menos de 10 caracteres";
    poi = strlen(texto) % 2 == 0 ? "es par." : "es impar.";

    cout << "La palabra " << res << " y " << poi << endl << endl;
 
    return 0;  
}