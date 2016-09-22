/* Maximo de tres valores. */
#include <iostream>
using namespace std;

double Max(double primer_valor, double segundo_valor, double tercer_valor){ // Realizo un funcion que tiene como entrada los valores
    double max;     // Declaro una variable donde se introduce el valor maximo

    if(primer_valor > segundo_valor)
        max= primer_valor;
    else
        max= segundo_valor;
    if(tercer_valor > max)
        max= tercer_valor;

    return max;         // Devuelve el valor maximo
}

int main()
{
    double v1, v2, v3, maximo;

    cout << "Introduce los tres valores: ";
    cin >> v1 >> v2 >> v3;

    maximo= Max(v1, v2, v3);

    cout << "El maximo es: " << maximo << endl;
}
