/*Calcular combinatorio*/
#include <iostream>
using namespace std;

int main()
{
    int n, m, combinatorio;
    int cont_n=1, cont_m=1, resta=1;                                // Se declarana los contadores todos igual a 1.

    cout << "Introduce los valores de n y m respectivamente (n >= m): ";     // Se introduce los valores n y m.
    cin >> n >> m;

    for(int i=n; i>1; i--)                                          // El factorial, lo realizo mediante un bucle
        cont_n*=i;                                                  // el contador empieza en 1 y va multiplicandose por
    for(int j=m; j>1; j--)                                          // valores (i y j) que van disminuyendo hasta llegar a 1 donde termina.
        cont_m*=j;                                                  // i y j van decreciendo.
    for(int aux= n - m; aux>1; aux--)
        resta*=aux;
    combinatorio= cont_n/(cont_m*resta);                            // El combinatorio lo realizo mediante los valores de los contadores.

    cout << "EL combinatorio de " << n << " y " << m << " es: " << combinatorio << endl;
}
