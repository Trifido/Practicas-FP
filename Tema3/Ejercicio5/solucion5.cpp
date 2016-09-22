#include <iostream>

using namespace std;

int main()
{
    char letra_convertida, letra_original;
    const int DISTANCIA_MAY_MIN = 'a'-'A';
    bool es_mayuscula=false;
    cout << "\nIntroduzca una letra --> ";
    cin >> letra_original;

    if ((letra_original >= 'A') && (letra_original <= 'Z')){
        letra_convertida = letra_original + DISTANCIA_MAY_MIN;
        cout << letra_convertida;
    }
    else{
    cout << letra_original << " no es una mayúscula";
    }

    if ((letra_original >= 'A') && (letra_original <= 'Z'))
        es_mayuscula = true;
    if (es_mayuscula)
        letra_convertida = letra_original + DISTANCIA_MAY_MIN;
    else
        letra_convertida = letra_original;
        cout << "\nEl carácter " << letra_original << " una vez convertido es: " << letra_convertida;
}
