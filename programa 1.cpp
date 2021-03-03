/*

REALIZAR LA SUMA DE DOS NUMEROS ENTEROS EN C++

*/


#include <iostream>
#include <stdio.h>

using namespace std;

int suma(int a, int b);

int main()
{
    int N1, N2, res;

    cout << "Introduce el primer valor (N1): " << endl;
    cin >> N1;
    cout << "Introduce el segundo valor (N2): " << endl;
    cin >> N2;

    res = suma (N1,N2);
    cout << "El resultado de la suma es: " << res;

    return 0;
}

int suma(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
