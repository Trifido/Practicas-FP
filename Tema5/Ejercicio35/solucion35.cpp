/* Marcador de un partido de baloncesto. */
#include <iostream>
using namespace std;

int main()
{
    int suma1=0, suma2=0, dorsal, puntos;   // suma1 son los puntos del equipo 1 y suma2 del equipo2

    cout << "Introduce respectivamente dorsal y numero de puntos: ";
    do{
        cin >> dorsal;

        if(dorsal != -1){   // Si dorsal es distinto de -1 se permite avanzar en el bucle.
            cin >> puntos;

            if(puntos > -1){    // Si puntos es mayor de -1 se permite avanzar en el bucle.
                if((dorsal > 0) && (dorsal < 4))    // Si dorsal es 1,2 o 3
                    suma1+= puntos;                 // entonces se le suman los puntos a suma1
                else                                // sino, se le suman al equipo 2.
                    suma2+= puntos;
            }
        }
    }while((dorsal != -1) && (puntos != -1));       // El bucle continuará mientras no detecte un -1.

    if(suma1 == suma2)                              // si suma1 y suma 2 son iguales, entonces han empatado.
        cout << "Equipo 1 y equipo 2 han empatado." << endl;
    else if(suma1 > suma2)                          // si suma1 es mayor que suma2 el equipo 1 gana.
            cout << "Equipo 1 ha ganado." << endl;
         else
            cout << "Equipo 2 ha ganado." << endl;
}
