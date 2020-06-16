#include "iostream"
#include "math.h"

using namespace std;

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

int main(){

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