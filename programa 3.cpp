/*

INDICA EL MAYOR DE 3 NUMEROS ENTEROS EN C++
(utilizando el resultado de una funcion)
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

    int mayor1 = Mayor(N1, N2);
    int mayor2 = Mayor(mayor1, N3);
    cout << "El numero mayor es: " << mayor2 << endl;

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
