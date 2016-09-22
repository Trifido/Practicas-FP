
#include <iostream>
#include <cmath>
using namespace std;

// Programa para el calculo de la hipotenusa a partir de
// los catetos
int main() {

    // Variables usadas en el programa
    double cateto1, cateto2, hip;

    // Se pide al usuario que introduzca el primer valor
    cout << "Introduce el primer cateto: ";

    // Se lee el primer valor
    cin >> cateto1;

    // Se pide al usuario que introduzca el segundo valor
    cout << "Introduce el segundo cateto: ";

    // Se lee el segundo valor
    cin >> cateto2;

    // Calculo de la hipotenusa: observad dos formas de
    // calcular el cuadrado, con pow (funcion en cmath y
    // de forma directa, con *)
    hip = sqrt(pow(cateto1, 2)) + cateto2*cateto2;

    // Se muestra el resultado
    cout << "La hipotenusa es: " << hip;
}




