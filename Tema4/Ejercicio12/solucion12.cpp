/* Capital e intereses */
#include <iostream>
using namespace std;

int main()
{
    double capital_fin, capital_ini, interes;
    int anios;

    cout << "Introducir capital inicial: ";
    cin >> capital_ini;
    cout << "Introducir interes: ";
    cin >> interes;

    capital_fin=capital_ini;                                // A la variable capital_fin le damos el mismo valor que capital_ini
    for(anios=0; capital_fin <(capital_ini*2); anios++)     // para que al hacer el bucle, no se machaque los valores de capital_ini.
        capital_fin+= capital_fin*interes;                  // El bucle acaba cuando el capital_fin es mayor que el doble de capital_ini.

    cout << "Capital final: " << capital_fin << endl;
    cout << "Años que han de pasar para doblar capital: " << anios+1 << endl;
}
