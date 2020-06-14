#include <time.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
   // Se declaran las funciones:
   int x;
   int numero;
   int cont;
 // Formula para definir el rango de numeros del 1 al 100
   srand((unsigned)time(NULL));
   x = 1 + rand ()%(101-1);

   cout<<endl;

   cout << "El numero magico"<<endl<<endl;
   cout << "En el siguiente juego tendras que adivinar el numero que esta pensando tu computadora, para eso dispones de 5 intentos"<<endl<<endl;
   int a = 0;
   cont = 0;
   while (cont < 5)
{
cout<< "Introduce un numero cualquiera: ";
cin>> numero;
// Funciones a utilizar
cont = cont + 1;
if(numero>x)
cout<<endl << "El numero tiene que ser menor" << endl<<endl;
else if (numero < x)
cout << "El numero tiene que ser mayor"<<endl<<endl;
else if (cont = 5)
cout <<endl << "Se te han acabado los intentos" << endl;

else
{
 cout << endl << "Has adivinado el numero :)"<<endl;
 cout << "Numero de intentos: "<<cont; 
 cont = 6;
}
}


}