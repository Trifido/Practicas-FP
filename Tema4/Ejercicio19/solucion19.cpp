/* Progresion geometrica. */
#include <iostream>
using namespace std;

int main()
{
    int a1, r, tope;

    cout << "Introduce a1: ";
    cin >> a1;
    cout << "Introduce r: ";
    cin >> r;
    cout << "Introduce el tope de la sumatoria: ";
    cin >> tope;

    for(int i=0; i< tope; i++)                      // Es mas eficiente hacerlo por este metodo
        a1+= a1*r;                                  // que llamar a una funcion de una biblioteca.
    cout << "La sumatoria es: " << a1 << endl;
}
