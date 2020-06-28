#include <iostream>

void encriptar(char palabra[]){
 for (int c=0; c<=1000; c++) {
 
switch (palabra[c]) {
{
case 'm':
palabra[c]=48;
break;
}
{
case 'u':
palabra[c]=49;
break;
}
{
case 'r':
palabra[c]=50;
break;
}
{
case 'c':
palabra[c]=51;
break;
}
{
case 'i':
palabra[c]=52;
break;
}
{
case 'e':
palabra[c]=53;
break;
}
{
case 'l':
palabra[c]=54;
break;
}
{
case 'a':
palabra[c]=55;
break;
}
{
case 'g':
palabra[c]=56;
break;
}
{
case 'o':
palabra[c]=57;
break;
}
default:
palabra[c]=palabra[c];
 
 
}
}

}
using namespace std;
int main () {
char palabra[1000];
cout << endl;
    cout<< "Codigo murcielago"<< endl << endl;
      cout<< "Este programa sirve para codificar palabras con el codigo murcielago"<< endl << endl;
cout<<"Ingrese el texto que desea encriptar : ";
cin.getline(palabra, 1000);
encriptar(palabra);
cout<< endl;
cout<<"El texto encriptado es: "<<palabra;
cout<< endl;
 
}