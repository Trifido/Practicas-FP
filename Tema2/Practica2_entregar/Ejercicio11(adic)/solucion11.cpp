/* Calculo de la desviaci�n tipica con variable real. */
#include <iostream>
#include <cmath>                                            // A�adimos la biblioteca cmath para la funcioo sqrt.
using namespace std;

int main()
{
    double media, desv;                                     // Llamamos las variables media desv de tipo real.
    int xi;                                                 // La variable xi la hacemos de tipo entero como pide el ejercicio.

    cout << "Introduce la sumatoria xi: ";                  // Damos un valor para la sumatoria de los valores.
    cin >> xi;

    media= xi/3.0;                                          // Calculamos la media
    desv= sqrt(pow((xi - media)*1.0, 2));                   // Calculamos la desviacion, para que  no d� error de compilaci�n,
                                                            // en la base de la potencia multiplicamos por 1.0 para que se convierta en real.
    cout << "La desviaci�n tipica es: " << desv << endl;    // Salida de la variable desv con la desviacion tipica.
}
