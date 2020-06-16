#include "iostream"

using namespace std;

int minimocomun (int num1, int num2);

int main(void)
{
    int n1, n2;

    cout<< endl;
    cout<< "Ingrese el numero mayor: ";
    cin >> n1;

    cout<< "Ingrese el numero menor: ";
    cin >> n2;

    cout << "El MCD es: "<< minimocomun(n1, n2) <<endl;
    cout<< endl;

    

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
