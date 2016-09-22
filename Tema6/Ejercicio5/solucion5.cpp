/* Funcion gausiana en un punto x. */
#include <iostream>
#include <cmath>                                                            // Llamamos a la biblioteca cmath para realizar funciones matematicas
using namespace std;

double Gausiana(double media, double desv, double x){
    const double PI= 3.1415927;
    double gaus;
    gaus= exp((-1/2)*pow((x - media)/desv, 2))/(desv*sqrt(2*PI));
    return gaus;
}

int main()                                                                  // Programa principal.
{
    double gausiana, media, desv, x;                                        // Declaramos las variables de tipo real.

    cout << "Introduce el valor de la media: ";                             // Introducimos el valor para las variables media, desv y x.
    cin >> media;
    cout << "Introduce el valor de la desviación tipica: ";
    cin >> desv;
    cout << "Introduce el valor de la abcisa x: ";
    cin >> x;

    gausiana= Gausiana(media, desv, x);                                     // Llamamos a la funcion Gausiana.

    cout << "La funcion gausiana en " << x << " es: " << gausiana << endl;  // Salida de la variable gausiana con el resultado.
}
