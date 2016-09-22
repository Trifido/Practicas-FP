/* Programa que calcula el voltaje. */
#include <iostream>

using namespace std;

int main()                                  //Programa principal.
{
    double resistencia;                     //Nombramos a las tres varibles para guardar en ellas datos.
    double voltaje;
    double intensidad;
                                            //Introducimos el valor de las variables intensidad y resistencia.
    cout << "Introduce la intensidad: ";
    cin >> intensidad;
    cout << "Introduce la resistencia: ";
    cin >> resistencia;
                                            //Mediante la formula del voltaje y los datos
    voltaje= resistencia*intensidad;        //de las dos variables anteriores, obtenemos la solución.

    cout << "El voltaje es: " << voltaje << endl;   //Damos las salida del valor de la variable voltaje.
}
