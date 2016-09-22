#include <iostream>

using namespace std;

int main()
{
    int numero, result;                                     // Introduzco dos variable de tipo entero.

    cout << "Introduce un numero de tres cifras entero: ";
    cin >> numero;                                          // Introduzco un entero de tres cifras en la variable numero.

    result= numero/100;                                     // result es un entero por lo que al dividirlo por 100 me queda la parte entera
    numero= numero%100;                                     // modifico la propia variable numero y la hago modulo 100
    cout << result << " ";                                  // doy salida a la primera cifra
    result= numero/10;                                      // divido esta vez por 10, me queda de nuevo la parte entera, el dato anterior es machacado
    numero= numero%10;                                      // el numero lo vulevo a modificar quedando unicamente un numero de una cifra
    cout << result << " " << numero << endl;                // doy salida a la segunda salida y a la ultima que se encuentra directamente en numero.
}
