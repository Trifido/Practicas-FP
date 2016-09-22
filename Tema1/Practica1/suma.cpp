#include <iostream>

using namespace std;

/**
  * Programa que calcula la suma de dos numeros
  */
int main()  {
    // Se usan tres variables: a y b para los sumandos
    // y res para resultado
    int a, b, res;

    // Se pide al usuario que teclee el primer numero
    cout << "Introduce el primer número: ";

    // Se lee el primer sumando (a)
    cin >> a;

    // Se pide al usuario que teclee el segundo numero
    cout << "Introduce el segundo número: ";

    // Se lee el segundo sumando
    cin >> b;

    // Se calcula el resultado
    res = a + b;

    // Se muestra el resultado por pantalla
    cout << "El resultado es: " << res << endl;
}




