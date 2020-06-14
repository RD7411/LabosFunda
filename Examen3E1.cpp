#include "iostream"

using namespace std;

// Se declaran las funciones: 

float sueldo (int hor, int horex); 
float sueldo2 (int hor2, int horex2);
float sueldo3 (int hor3, int horex3);

int main(){
    int empleados;
    int horas;
    int horase;
    float sneto;

    cout << endl;
    cout<< "Calculo de salarios"<< endl << endl;
      cout<< "Este programa tiene como objetivo saber el salario real de un empleado con todos los descuentos que se le realizan a este"<< endl << endl;
      
      cout<< "Ingrese la cantidad de empleados: ";
      cin>> empleados;

      // Formula utilizada para repetir el procedimiento segun el numero de empleados 
      for(int m=1; m<=empleados; m++){ 
   
    cout<< "Ingrese la cantidad de horas que ha trabajado el empleado: ";
    cin>> horas;

    cout<< "Ingrese la cantidad de horas extra que ha trabajado el empleado: ";    
    cin>> horase;

    if(sueldo(horas, horase)< 500){
        sneto= sueldo2(horas,horase);
    }
    else if (sueldo(horas,horase)>=500){
        sneto= sueldo3(horas,horase);
    }
    cout <<endl;
    cout<<"El salario total es : "<<sueldo(horas,horase) <<endl<<endl;
    cout<<"El salario real es :"<<sneto<<endl<<endl;
    }

}

// Primera función a utilizar

float sueldo(int uno, int dos){ 
    float s1;
    s1= (uno*1.75)+(dos*2.50);
    return s1; 
}

// Segunda función a utilizar

float sueldo2(int tres, int cuatro){ 
   float a,b;
    a = (sueldo(tres, cuatro)*0.04)+(sueldo(tres, cuatro)*0.0625);
    b = sueldo(tres, cuatro)-a;
    return b;
}

// Tercera función a utilizar

float sueldo3(int b, int c){ 
    float cinco, seis;
    cinco=((sueldo(b,c)*0.04)+(sueldo(b,c)*0.0625)+(sueldo(b,c)*0.10));
    seis=sueldo(b,c)-cinco;
    return seis;
}