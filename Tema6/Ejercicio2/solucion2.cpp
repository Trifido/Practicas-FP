/* Progresion geometrica. */
#include <iostream>
using namespace std;

float Progresion(double r, double tope, double term){
    float suma= term;
    for(int i=2; i<tope; i++){
        term+= term*r;
        suma= suma + term;
    }
    return suma;
}

int main()
{
    double termino, constante, tope;

    cout << "Introduce una constante r: ";
    cin >> constante;
    cout << "Introduce el tope de la sumatoria: ";
    cin >> tope;
    cout << "Introduce el primer termino: ";
    cin >> termino;

    cout << "La progresion geometrica es: " << Progresion(constante, tope, termino) << endl;
}
