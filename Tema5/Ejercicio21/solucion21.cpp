/* La suma de los cien primeros terminos de una sucesion. */
#include <iostream>
using namespace std;

int main()
{
    int result=1, ai=0;

    for(int i=1; i<101; i++){                   // Desde 1 hasta 100
        for(int j=0; j<i; j++)                  // Un bucle para calcular (-1)^i
            result*= -1;
        ai+= result*(-1)*(i*i - 1)/(2*i);       // Multiplico result por -1 para obtener la iteracion anterior.
    }                                           // Se suman los datos obtenidos en ai
    cout << "La sumatoria de los 100 primero numeros es: " << ai << endl;
}
