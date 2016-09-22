/* Imprimir numeros */
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<7; i++){         // Realizo un for que llega de 1 a 7
        for(int j=i; j<7; j++)      // dentro introduzco un segundo for que imprime desde i a 7.
            cout << j << " ";       // Cuando i aumenta, el segundo bucle imprime un numero menos.
        cout << endl;
    }
}
