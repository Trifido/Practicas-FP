/* Comprobar si un año es bisiesto. */
#include <iostream>
using namespace std;

int main()
{
    bool bisiesto= false;           // Creo una variable bool que le doy valor false.
    int anio;                       // y una variable entera a la que se le introduce
                                    // el año.
    cout << "Introduce el año: ";
    cin >> anio;

    if((anio%4==0 && anio%100!=0)||(anio%400==0))   // Si año es multiplo de 4 y no es multiplo de 100
        bisiesto= true;
    if(bisiesto==true)              // Si el año no haceptase ninguna de estas condiciones, el bool seguiría en 0.
        cout << "El año " << anio << " es bisisesto." << endl;
    else
        cout << "El año " << anio << " no es bisisesto." << endl;
}
