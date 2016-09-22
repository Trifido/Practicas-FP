/* Numero narcisista. */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, pot, cifra, num_aux, result=0, num_aux2;
    bool es_narcisista=false;

    cout << "Introduce un numero: ";
    cin >> num;

    num_aux= num;                       // Declaro variables auxiliares para no modificar la variable original num.
    num_aux2= num;
    for(pot=0; num_aux>0; pot++)        // Este bucle obtiene el numero de cifras.
        num_aux= num_aux/10;            // Termina cuando num_aux sea menor que 0.
    for(int aux=0; aux<pot; aux++){     // Este bucle se encarga de obtener el resultado.
        cifra= num_aux2%10;             // La variable cifra obtiene el modulo del numero, una cifra.
        result+= pow(cifra*1.0, pot);   // cifra se multiplica po 1.0 para pasarlo a real y poder realizar el pow.
        num_aux2= num_aux2/10;          // num_aux2 se machaca por su division entre 10.
    }
    if(result==num)                     // Si result es igual a num
        es_narcisista=true;             // entonces el bool es true.

    if(es_narcisista)
        cout << "El numero " << num << " es narcisista." << endl;
    else
        cout << "El numero " << num << " no es narcisista." << endl;
}
