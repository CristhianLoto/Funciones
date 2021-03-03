/*

INDICA EL MAYOR DE 3 NUMEROS ENTEROS EN C++
(simplificando a 1 sola funcion de llamada)
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int Mayor (int a, int b);

int main()
{
    int N1, N2, N3;

    cout << "Introduce el primer numero (N1): " << endl;
    cin >> N1;
    cout << "Introduce el segundo numero (N2): " << endl;
    cin >> N2;
    cout << "Introduce el tercer numero (N3): " << endl;
    cin >> N3;

    int mayor1 = Mayor(Mayor(N1, N2), N3);
    cout << "El numero mayor es: " << mayor1 << endl;

    return 0;
}

int Mayor (int a, int b)
{
    int c;

    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return c;
}
