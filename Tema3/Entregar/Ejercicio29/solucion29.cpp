/* Comprobar si un a�o es bisiesto. */
#include <iostream>
using namespace std;

int main()
{
    bool bisiesto= false;           // Creo una variable bool que le doy valor false.
    int anio;                       // y una variable entera a la que se le introduce
                                    // el a�o.
    cout << "Introduce el a�o: ";
    cin >> anio;

    if((anio%4==0 && anio%100!=0)||(anio%400==0))   // Si a�o es multiplo de 4 y no es multiplo de 100
        bisiesto= true;
    if(bisiesto==true)              // Si el a�o no haceptase ninguna de estas condiciones, el bool seguir�a en 0.
        cout << "El a�o " << anio << " es bisisesto." << endl;
    else
        cout << "El a�o " << anio << " no es bisisesto." << endl;
}
