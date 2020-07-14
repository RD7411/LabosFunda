#include "iostream"
#include "string"
#include "string.h"

using namespace std;

const int LargoCade=15;

struct PrecioxArticulo{
    char nombreArticul[LargoCade + 1];
    float costo;
    float costoPorArticulos;
    int cantidad;
};

void info(int n,PrecioxArticulo cuenta[]);
void calculo(int n,PrecioxArticulo cuenta []);
void mostrarinfo(int n2,PrecioxArticulo cuenta[]);
void total(int n,PrecioxArticulo cuenta[]);

int main(){
    int n;  
    cout<< endl;
    cout<<"Procesamiento de una factura de compra." <<endl<<endl;
    cout<<"El siguiente programa sirve para procesar una factura de compra en una tienda." <<endl<<endl;
    cout<< "Ingrese la cantidad de articulos que lleva. (Si el articulo se repite unicamente ingresarlo una vez): ";
    cin>>n;

    cin.ignore(100,'\n');
    PrecioxArticulo cuenta[n]; 
    info(n,cuenta);
    calculo (n,cuenta);
    mostrarinfo(n,cuenta);
    total(n,cuenta);
    
}

void info(int n,PrecioxArticulo cuenta[]){
    string cad;    
    cout<< endl;
    cout<<"A continuacion ingrese el nombre del producto, cantidad del producto y precio unitario de este"<<endl;
    for(int i=0; i<n; i++){ 
        cout<<endl;
      cout<<"Ingrese el nombre del producto: ";
      getline(cin,cad,'\n');
      strncpy(cuenta[i].nombreArticul, cad.c_str(),LargoCade);
      cuenta[i].nombreArticul[LargoCade]='\0'; 
      cout<<"Ingrese la cantidad de articulos: ";
      cin>>cuenta[i].cantidad;
      cout<<"Ingrese el precio del producto: ";
      cin>>cuenta[i].costo;
      cin.ignore(100,'\n');
    }
}

void calculo(int n,PrecioxArticulo cuenta[]){
    for(int i=0;i<n;i++)

    {
        cuenta[i].costoPorArticulos=cuenta[i].costo*cuenta[i].cantidad;   

    }

}

void mostrarinfo(int n,PrecioxArticulo cuenta[]){
    for(int i=0;i<n;i++){

        cout<<"Ingrese el nombre del producto: "<<cuenta[i].nombreArticul<<endl;
        cout<<"Ingrese la cantidad del producto: "<<cuenta[i].cantidad<<endl;
        cout<<"Ingrese el precio individual del producto :"<<cuenta[i].costo<<" dolares"<<endl;
        cout<<"El costo total del articulo es: "<< cuenta[i].costoPorArticulos<<" dolares"<<endl<<endl;;
    }
}

void total(int n,PrecioxArticulo cuenta[]){
    for(int i=0;i<n;i++){
        cuenta[i].costoPorArticulos++;
        cout<<"El costo total del articulo es: "<<cuenta[i].costoPorArticulos<<endl<<endl;
    }
}