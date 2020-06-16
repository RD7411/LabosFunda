#include <iostream>
using namespace std;
int main(){
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
}