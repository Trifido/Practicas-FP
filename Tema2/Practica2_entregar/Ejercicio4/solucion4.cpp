/* Calcular el area y la longitud de una circunferencia. */
#include <iostream>

using namespace std;

int main()
{
    const double PI=3.1415927;                                          // Constante de tipo real PI.
    double area, longitud, radio;                                       // Variable reales para calcular longitud
                                                                        // y area de una circunferencia.
    cout << "Introduce la longitud del radio de la circunferencia: ";
    cin >> radio;                                                       // Asignar un valor a la variable radio.

    area= PI*radio*radio;                                               // F�rmula para el �rea. Es mas eficiente radio*radio que llamar la funcion pow.
    longitud= 2*PI*radio;                                               // F�rmula para calcular la longitud.

    cout << "En la circunferencia de radio " << radio << " obtenemos: " << endl;
    cout << "\tArea: " << area << endl;
    cout << "\tLongitud: " << longitud << endl;
}
