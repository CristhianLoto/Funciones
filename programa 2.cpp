/*

INDICA EL MAYOR DE DOS NUMEROS ENTEROS EN C++

*/


#include <iostream>
#include <stdio.h>

using namespace std;

void mayor (int a, int b);

int main()
{
    int N1, N2;

    cout << "Introduce el primer numero (N1): " << endl;
    cin >> N1;
    cout << "Introduce el segundo numero (N2): " << endl;
    cin >> N2;

    mayor(N1, N2);

    return 0;
}

void mayor (int a, int b)
{
    if (a > b)
        cout << a << " Es mayor que: " << b << endl;
    else if (a==b)
        cout << a << " Es igual a: " << b << endl;
    else
        cout << a << " Es menor que: " << b << endl;
}
