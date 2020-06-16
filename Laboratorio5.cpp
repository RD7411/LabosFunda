#include "iostream"
using namespace std;

int minimocomun (int num1, int num2);
bool bi( int );
int dias_meses(int mes, int anio);


int main()
{
    int lit;
    
    cout <<"Laboratorio #<<5." <<endl<<endl;
    cout << "Para ejecutar un ejercicio digita el numeral que le corresponde" <<endl<<endl;

    cout<< "1. Ejercicio 1: MCD de dos numeros." <<endl;
    cout<< "2. Ejercicio 2: Hora despues de un segundo." <<endl;
    cout<< "3. Ejercicio 3: Año bisiesto" <<endl;
    cout<< "4. Ejercicio 4: Fecha del siguiente dia" <<endl;
    cin >> lit;

    switch (lit)
    {
        case 1:
        int n1, n2;

    cout<< endl;
    cout<< "Ingrese el numero mayor: ";
    cin >> n1;

    cout<< "Ingrese el numero menor: ";
    cin >> n2;

    cout << "El MCD es: "<< minimocomun(n1, n2) <<endl;
    cout<< endl;
    break;
    
    case 2:
    int h,m,s;
       cout<< endl;
    cout<<"Calcular la hora pasado un segundo" <<endl<<endl;
    cout<<"El siguiente programa sirve para calcular la hora pasado un segundo." <<endl<<endl;
    cout<<"Digite la hora: ";
    cin>>h;
    cout <<endl;
    cout<<"Digite los minutos:"<<endl;
    cin>>m;
    cout <<endl;
    cout<<"Digite los segundos:"<<endl;
    cin>>s;
    cout <<endl;
    if(h < 24 && m < 60 && s < 60){
          if(s < 59 && s >= 0){
          cout<<h<<"h "<<m<<"m "<<(s+1)<<"s";
          }else{
          if(s==59){
                  if(m==59){
                      if(h==23){
                          cout<<"00h 00m 00s";
                      }else{
                          cout<<(h+1)<<"h 00m 00s";
                      }
                  }else{
                      cout<<h<<"h "<<(m+1)<<"m 00s";
                  }
              }
          }
      }else{
          cout<<"Fuera de Rango";
      }

      return 0;

      break;

      case 3:
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

 break;

 case 4:
 int dia,mes,anio;
    char barra;

    cout<< endl;
    cout<<"Calcular el dia siguiente" <<endl<<endl;
    cout<<"El siguiente programa sirve para saber el dia siguiente de una fecha cualquiera." <<endl<<endl;
   
    cout<<"Digite el dia: ";
    cin >> dia;
    cout<<"Digite el mes: ";
    cin >> mes;
     cout<<"Digite el anio: ";
    cin >> anio;
    dia++;
    if (dia > dias_meses(mes, anio)){
        dia = 1;
        mes++;
        if (mes > 12){
            mes = 1;
            anio++;
        }
    }
    cout<< endl;
    cout<<"Un dia despues sera: " << dia << "/" << mes << "/" << anio <<endl;
    cout<< endl;
}
}
    
    int minimocomun (int num1, int num2) {
    int residuo;
    do
    {
        residuo = num1 % num2;
        if(residuo !=0)
        {
            num1 = num2;
            num2 = residuo;
        }
    }
    while (residuo !=0);
    return num2; 

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
 bool bisiesto(int anio){
    return ((anio % 4) == 0 && (anio % 100) !=0) || ((anio % 400) == 0); 
}

int dias_meses(int mes, int anio){
    int dias = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias = 30;
    } else if (mes == 2){
        if (bisiesto(anio)){
            dias = 29;
        } else {
            dias = 28;
        }
    }
    return dias;
}
