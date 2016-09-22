/* Pasar de mayuscula a minuscula. */
#include <iostream>
using namespace std;

int main()
{
    /*
    char letra_convertida, letra_original;
    const int DISTANCIA_MAY_MIN = 'a'-'A';
    cout << "\nIntroduzca una letra --> ";
    cin >> letra_original;
    if ((letra_original >= 'A') && (letra_original <= 'Z')){
        letra_convertida = letra_original + DISTANCIA_MAY_MIN;  // Para no meter computos dentro de la condicional
        cout << letra_convertida;                               // podemos crear un bool como el programa final.
    }
    else{
        cout << letra_original << " no es una mayúscula";
    }
    */
    /*
    string tipo_letra;
    .............
    if ((letra_original >= 'A') && (letra_original <= 'Z'))     //Este metodo es poco eficiente porque compara dos cadenas.
        tipo_letra = "es mayúscula";
    if (tipo_letra == "es mayúscula")
        letra_convertida = letra_original + DISTANCIA_MAY_MIN;
    else
        letra_convertida = letra_original;
    cout << "\nEl carácter " << letra_original << " una vez convertido es: " << letra_convertida;
*/
    char letra_convertida, letra_original;
    const int DISTANCIA_MAY_MIN = 'a'-'A';
    bool es_mayuscula=false;                    // Damos de inicio al booleano un valor false, y se modificará dependiendo
                                                // de si la expresión logica es true.
    cout << "\nIntroduzca una letra --> ";      // Otra solución es crear un else que asigne false al booleano.
    cin >> letra_original;

    if ((letra_original >= 'A') && (letra_original <= 'Z'))     // Si es una mayuscula, se le asigna al booleano el valor true.
        es_mayuscula = true;

    if (es_mayuscula)                                           // Si mayuscula es true, entonces a la variable letra_convertida
        letra_convertida = letra_original + DISTANCIA_MAY_MIN;  // se le asigna la letra en minuscula.
    else                                                        // sino a letra_convertida le asignamos la misma letra mayucula.
        letra_convertida = letra_original;

    cout << "\nEl carácter " << letra_original << " una vez convertido es: " << letra_convertida;
}
