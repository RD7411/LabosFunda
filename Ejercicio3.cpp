#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    float a;
    float b;
    float c;
    float dos;
    float bcuadrado;
    float bnegativo;
    float bpordos;
    float cuatro;
    float raiz;
    float dentroraiz;
    float cuatroporac;
    float dosa;
    float arribamas;
    float arribamenos;
    float Xuno;
    float Xdos;

    cuatro = 4;
    dos = 2;
    
    cout << endl;

    cout << "Formula cuadratica" << endl << endl;
    cout << "El siguiente programa tiene por objetivo calcular X usando la formula cuadratica" << endl << endl;
    cout << "A continuacion ingrese el valor de las variables" << endl << endl;

    cout << "Digite el valor de a:";
    cin >> a;

    cout << "Digite el valor de b:";
    cin >> b;
    
    cout << "Digite el valor de c:";
    cin >> c;

    cout << endl;

    bpordos = b * dos;
    bnegativo = b - bpordos;
    bcuadrado = pow (b , dos);
    cuatroporac = cuatro * a * c;
    dentroraiz = bcuadrado - cuatroporac;
    raiz = sqrt (dentroraiz);
    dosa = dos * a;
    arribamas = bnegativo + raiz;
    arribamenos= bnegativo - raiz;
    Xuno = arribamas / dosa;
    Xdos = arribamenos / dosa;

    cout << "X1=" << Xuno; cout << " y X2=" << Xdos << endl << endl;
}
