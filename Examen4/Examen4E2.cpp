#include "iostream"

using namespace std;

float media(float p[25]);
void mediaa(float p[25],float media);
void mediab(float p[25],float media);

int main(){
    float est[25],i,f;
    cout<< "Promedio de estatura de una clase de 25 alumnos."<< endl << endl;
      cout<< "Este programa sirve para conocer el promedio de estatura de una clase de 25 alumnos y cuantos sobrepasan o estan debajo de la media."<< endl << endl;
    for(int i=0;i<25;i++){
        cout<<"Digite la edad del estudiante: "<<i+1<<endl;
        cin>> est[i];
    }

    f=media(est);

    cout<<"La media entre los estudiantes es: "<<media(est)<<endl;
    mediaa(est,f);
    mediab(est,f);
}

float media(float f[25]){
    float suma,media;
    for(int i=0;i<25;i++ ){
        suma=suma+f[i];
    }
    media=suma/25;

    return media;
}

void mediaa(float p[25],float media){
    int mayor=0;
    
    for(int i=0;i<25;i++){
        if(p[i]>media){
            mayor ++;

        }
    }

    cout<<"Los estudiantes que sobrepasan la media son: "<<mayor<<endl;

}

void mediab(float p[25],float media){
    int menor=0;
    
    for(int i=0;i<25;i++){
        if(p[i]<media){
            menor++;
        }
    }

    cout<<"Los estudiantes que no sobrepasan la media son: "<<menor<<endl;
}