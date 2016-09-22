/*Introduce reales, calcula el numero de reales introducidos y el minimo de ellos.*/
#include <iostream>
using namespace std;

int main()
{
    double dato, min= 1e10;             // A min se le asigna un valor imposible de introducir.
    int i=0;

    do{
        cout << "Introduce dato: ";
        cin >> dato;

        if(dato!=0){                    // si dato es diferente de 0, se opera.
            if(dato<min)                // si dato es menor que min, entonces se obtiene el minimo.
                min=dato;
            i++;
        }
    }while(dato != 0);                  // el bucle do-while continuará hasta que el dato introducido
                                        // sea igual a 0
    cout << "El numero de datos introducidos es: " << i << endl;
    if (i!=0)
       cout << "El minimo es: " << min << endl;
}
