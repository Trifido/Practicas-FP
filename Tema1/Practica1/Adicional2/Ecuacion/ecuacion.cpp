/*Introduce dos valores y resuelve la ecuacion ax+b=0 */
#include <iostream>

using namespace std;

int main()
{
    double a, b, resultado;

    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;

    resultado= -b/a;
    cout << "El resultado de la ecuacion es: " << resultado << endl;
}
