#include "iostream"

using namespace std;

int main (void)
{
   int a;
   int b;
   int sum;
   int rest;
   int mult;
   float div;
   
   cout <<endl;

   cout <<"Ejercicio de prueba" <<endl <<endl;

   cout <<"Digite el primer valor:";
   cin >> a;

   cout <<"Digite el segundo valor:";
   cin >> b;

   sum = a + b;

   cout << "La suma es:" << sum << endl;

   rest = a-b;

   cout << "La resta es es:" << rest << endl;

   mult = a * b;

   cout << "La multiplicacion es:" << mult << endl;

   div = (float)a / b;

   cout << "La division es:" << div << endl;

}