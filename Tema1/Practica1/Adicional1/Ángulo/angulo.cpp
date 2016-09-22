/*Pasar los grados a radianes. */
#include <iostream>
using namespace std;

int main()
{
    double grados, radianes;
    double const PI=3.14159265;

    cout << "Introduce los grados a convertir: ";
    cin >> grados;

    radianes= grados*PI/180;
    cout << "El angulo " << grados << "º pasados a radianes es: " << radianes << endl;
}
