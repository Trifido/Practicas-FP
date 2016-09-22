/* Calcular la paga de cada empleado de una fabrica. */
#include <iostream>
using namespace std;

int main(){                                                             // Programa principal.
    double fabricante, disenador, ganancia;

    cout << "Introduce la ganacias totales de la empresa: ";
    cin >> ganancia;                                                    // Introducimos valos a la variable ganancia.

    fabricante= ganancia/4;                                                 // Dividimos la paga entre los 4 empleados.
    disenador= fabricante*2;                                            // El diseñador se lleva el doble de lo que cobra un empleado.
    fabricante= (ganancia - disenador)/3;                               // El empleado gana la ganancia menos la que se lleva el diseñador
                                                                        // entre el numero de fabricantes, que son 3.
    cout << "Cada fabricante de la empresa gana: " << fabricante << endl;
    cout << "El diseñador gana: " << disenador << endl;
}
