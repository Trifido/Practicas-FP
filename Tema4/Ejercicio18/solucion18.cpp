/* Sucursal con mejores ventas */
#include <iostream>
using namespace std;

int main()
{
    int sucursal, producto, ventas, anterior=0, suma, venta_total=0, mejor_sucur=0;

    cout << "Introduce entre 1 y 3 para identificar la sucursal, el producto y las ventas." << endl;
    cout << "Introduce -1 para terminar: " << endl;

    do{
        cin >> sucursal;

        if(sucursal!=-1){                           // Restrinjo la entrada del bucle para cuando se introduzca -1
            cin >> producto >> ventas;              // no se opere.

            if(sucursal!=anterior){                 // si la sucursal es diferente a la anterior, la suma se reinincia,
                suma=0;                             // y anterior pasa a ser la sucursal actual.
                anterior= sucursal;
            }
            suma+=ventas;                           // se suma las ventas en la variable suma.
            if(venta_total<suma){                   // si venta_total es menor que la suma de las ventas,
                venta_total=suma;                   // se actualiza venta_total y mejor_sucursal.
                mejor_sucur=sucursal;
            }
        }
    }while(sucursal!=-1);                           // El bucle do-while acaba cuando sucursal es igual a -1.

    cout << "SUCURSAL: " << mejor_sucur << endl;
    cout << "VENTAS: " << venta_total << endl;
}
