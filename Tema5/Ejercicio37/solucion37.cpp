/* Juego de adivinar numeros. */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int objetivo, max=100, min=0, n_introd=50, n_partidas, cont=0;

    srand(time(0)); // inicializacion generador, solo 1 vez

    cout << "Numero de partidas: ";
    cin >> n_partidas;
    cout << "Para terminar el juego introduzca un numero >= 100 o <= 0." << endl;

    while((cont < n_partidas) && ((n_introd < max) && (n_introd > min))){       // El bucle terminará cuando cont sea igual al numero de partidas o
        cout << "Juego numero " << cont+1 << ": " << endl;                      // el numero introducido se encuentre fuera del rango de 0 a 100.
        cout << "Empieza ha introducir numeros: " << endl;

        objetivo = rand()%max; // Se genera el numero objetivo.
        do{
            cin >> n_introd;

            if((n_introd < max) && (n_introd > min)){       // Si el numero esta comprendido entre 0 y 100
                if(n_introd == objetivo)                    // Si numero introducido es igual al objetivo
                    cout << "¡¡Correcto!!" << endl;         // Imprime es corecto
                else if(n_introd > objetivo)                // Sino si numero introducido es mayor que objetivo
                        cout << "¡Mas pequeño!" << endl;    // Imprimer que se busca un numero mas pequeño.
                     else                                   // Sino imprime que se busca un numero mas grande.
                        cout << "¡Mas grande!" << endl;
            }
        }while((n_introd != objetivo) && ((n_introd < max) && (n_introd > min)));   // El bucle continuará mientras numero introducido sea distinto de objetivo
        cont ++;                                                                    // y numero introducido se encuentre entre 0 y 100.
    }
}
