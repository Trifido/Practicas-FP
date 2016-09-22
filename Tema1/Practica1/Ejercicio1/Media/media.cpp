/*Media aritmetica de 3 valores. */
#include <iostream>

using namespace std;

int main()
{
    double dato1, dato2, dato3, suma, media;

    cout << "Introduce el dato 1: ";
    cin >> dato1;
    cout << "Introduce el dato 2: ";
    cin >> dato2;
    cout << "Introduce el dato 3: ";
    cin >> dato3;

    suma= dato1+dato2+dato3;
    media= suma/3;
    cout << "El resultado de la media de " << dato1 << ", " << dato2 << " y " << dato3 << " es: " << media << endl;
}
