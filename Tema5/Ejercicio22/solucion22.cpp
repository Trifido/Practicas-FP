/* Metodo RLE */
#include <iostream>
using namespace std;

int main()
{
    int num, ant, sum, aux=0;       // aux es un contador, lo utilizo para la primera iteracion.
    cout << "Introduce la secuencia a codificar: ";

    do{
        cin >> num;

        if(aux==0){                 // Si aux es igual a 0
            ant=num;                // entonce anterior es igual a numero introducido
            sum=0;                  // suma de repeticiones empieza en 0
        }
        if(ant==num)                // Si anterior es igual a numero introducido
            sum++;                  // suma de repeticiones aumenta en 1.
        else{                       // Si no, primero imprime por pantalla las repeticiones y el anterior.
            cout << sum << " " << ant << " ";
            ant=num;                // anterior se convierte en numero introducido
            sum=1;                  // y repeticiones empieza de nuevo en 1
        }
        aux++;
    }while(num>0);                  // El bucle continuará hasta que se introduzca un numero negativo.
}
