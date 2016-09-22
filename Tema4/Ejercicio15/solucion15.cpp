/* Calcular potencia y factorial sin usar funciones de cmath. */
#include <iostream>
using namespace std;

int main()
{
    int n, x, fac=1, pot=1;

    cout << "Introduce la base: ";
    cin >> x;
    cout << "Introduce el exponente: ";
    cin >> n;

    for(int i=0; i<n; i++)
        pot*=x;             // x se multiplica por si mismo tantas veces como indica la n.
    for(int j=n; j>0; j--)
        fac*=j;             // fac añade la multiplicacion de j por un valor menor hasta llegar a 1.

    cout << "La potencia es: " << pot << endl;
    cout << "El combinatorio de " << n << " es " << fac << endl;
}
