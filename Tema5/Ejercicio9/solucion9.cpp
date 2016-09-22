/* Obtener divisores de un numero. */
#include <iostream>
using namespace std;

int main()
{
    int tope;

    cout << "Introduce un numero: ";
    do{
        cin >> tope;
        if(tope>0){
            cout << "Los divisores son: ";
            for(int i=1; i<tope; i++)
                if(tope%i==0)               // Si tope modulo i es igual a cero, entonces i divide a tope
                    cout << i << " ";
        }
    }while(tope<1);                         // Se repite mientras tope sea menor que uno

}
