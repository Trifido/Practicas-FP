/* Calcular la cantidad de dinero a un año. */
#include <iostream>

using namespace std;

int main()                          // Programa principal.
{
    double interes;                 // LLamamos las variable de tipo real.
    double capital;
    double total;

    cout << "Introduce el capital: ";   // Introducimos los datos a las
    cin >> capital;                     // variables capital e interes.
    cout << "Introduce el interes: ";
    cin >> interes;

    total= capital + capital*interes/100;   // Para darle el valor a capital que obtiene total,
                                            // se puede poner capital= capital + capital*interes/100,
                                            // aunque es mejor poner una asignacion en la siquiente linea
                                            // capital=total;
    cout << "El dinero que se obtendra al cabo de un año es: " << total << endl;    // Damos salida a la variable total.
}
