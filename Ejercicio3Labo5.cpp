 #include <iostream>
 using namespace std;

 bool bi( int );

 int main()
 {               
 int anio;

cout<< endl;
cout<<"Anio bisiesto" <<endl<<endl;
cout<<"El siguiente programa sirve para saber si un anio es bisiesto" <<endl<<endl;
cout <<"Introduzca un anio para saber si es bisiesto: ";
cin >> anio;

 if ( bi( anio ) )

 cout << anio << " es un anio bisiesto." << endl;
 else
 cout << anio << " no es un anio bisiesto." << endl;
 
 return 0;
 } 
 
 bool bi( int a  )

 { 

 if ( 0 != a%4 )
 return false;
 else if ( 0 != a % 100 )
 return true;
 else if ( 0 != a % 400 )
 return false;
 else 
 return true;
 } 