/*

OBTENER EL FACTORIAL DE UN NUMERO

*/


#include <iostream>
#include <stdio.h>

using namespace std;

int factorial (int a);

int main()
{
    int N1;
    cout << "Introduce el valor numero (N1): " << endl;
    cin >> N1;

    int fact = factorial (N1);
    cout << "El factorial del numero es: " << fact << endl;

}

int factorial (int a)
{
    int i;
    int resultado = 1;

    for (i = 1; i <= a; i++)
    {
        resultado *= i;
    }
    return resultado;
}
