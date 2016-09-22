/* Obtener mayor subsecuencia creciente de una cadena. */
#include <iostream>
using namespace std;

int main()
{
    int num, ant, longitud, cont= 0, l_maxima= 0, posicion;

    cout << "Introduce numeros comprendidos entre 0 y 100: ";
    do{
        cin >> num;

        if((num > -1) && (num < 101)){
            if(cont == 0){      // Esta condicion se utiliza solamente en la primera iteracion
                ant= num;       // para igualar la entrada al anterior y así empezar a sumar longitud.
                longitud= 0;    // la longitud comienza en cero ya que el numero va a ser el primero y posteriormente se sumara.
            }
            if(num >= ant)      // Si numero es mayor o igual al anterior, la longitud aumenta
                longitud++;
            else                // Sino, la longitud comienza en uno.
                longitud= 1;
            if(longitud > l_maxima){ // Si longitud maxima es menor que longitud
                l_maxima= longitud;  // la longitud maxima guarda el valor longitud
                posicion= cont;      // y en posicion se guarda el valor de contador
            }
            ant= num;                // al final del bucle, anterior pasa a ser el numero que introducimos y el contador aumenta en uno.
            cont++;
        }
    }while((num > -1) && (num < 101));  // Mientras el numero introducido se encuentre en el intervalo de 0 a 100, se repetirá el bucle.
    posicion= posicion + 2 - l_maxima;  // Para calcular la posicion donde comienza el bucle, a la posicion del ultimo elemento de la cadena
                                        // se le resta la longitud maxima de la cadena y se le suma dos para no tener la posicion 0.
    cout << "La longitud de la mayor subsecuencia es: " << l_maxima << endl;
    cout << "La posicion de inicio de la subsecuencia es: " << posicion << endl;
}
