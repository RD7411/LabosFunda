#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    int a;
    int b;
    float pot;
    float rai;

    cout << endl;

    cout <<"Programa 2" << endl <<endl;

    cout << "Digite el primer valor" << endl;
    cin >> a;

    cout << "Digite el segundo valor" << endl;
    cin >> b;

    pot = pow(a, b);
    cout <<"La potencia es:" << pot << endl;

    rai = sqrt (a);
    cout << "La raiz es:" << rai << endl;
    }
