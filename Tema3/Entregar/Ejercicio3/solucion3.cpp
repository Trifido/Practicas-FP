/* Ver si existe division entera. */
#include <iostream>
using namespace std;

int main()
{
    int var1, var2;             // Creamos las variables.

    cout << "Introduce valor1 y valor2 respectivamente: ";
    cin >> var1 >> var2;

        if(var2%var1==0)                                        // Si el modulo o resto de var2 entre var1 es igual a 0,
            cout << "Existe division entera." << endl;          // entonces existe division entera.
        else                                                    // Sino, abrimos otra condicional preguntado por el modulo
            if(var1%var2==0)                                    // de var1 entre var2.
                cout << "Exite division entera." << endl;
            else                                                // sino, no existe la division entera.
                cout << "No existe division entera." << endl;
}
