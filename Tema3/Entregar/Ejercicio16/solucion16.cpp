#include <iostream>
using namespace std;

int main()
{
    int edad, anio;                                     // Declaro las variables.
    char letra;
    bool tof_edad= false, tof_anio= false, tof_letra;   // Declaro 3 variables booleanas.

    cout << "Introduce letra: ";
    cin >> letra;
    cout << "Introduce edad: ";
    cin >> edad;
    cout << "Introduce el año: ";
    cin >> anio;

    if(letra>='a' && letra<='z')                        // Si la letra esta entre el caracter
        tof_letra= true;                                // a y z entonces bool es igual a true.
    else
        tof_letra= false;
    if(tof_letra)                                       // Si bool es true entonces imprime.
        cout << "La letra " << letra << " es minuscula." << endl;
    else
        cout << "El caracter " << letra << " no es una letra minuscula." << endl;

    if(edad<18 || edad >65)                             // Si edad es menor de 18 o mayor de 65
        tof_edad= true;
    if(tof_edad)
        cout << "Edad es menor de 18 o mayor de 65." << endl;
    else
        cout << "Edad está comprendido entre 18 y 65." << endl;


    if((anio%4==0 && anio%100!=0)||(anio%400==0))       // Si anio es divisible por 4 y no entre 100, o anio es divisible entre 400
        tof_anio= true;                                 // bool es true.
    if(tof_anio)
        cout << "El año " << anio << " es bisiesto." << endl;
    else
        cout << "El año " << anio << " no es bisiesto." << endl;
}
