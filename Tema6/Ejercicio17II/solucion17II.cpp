/* Funciones para calcular combinatorio */
#include <iostream>
using namespace std;

int Factorial(int n){                       // Funcion factorial.
    int fac=1;

    for(int j=n; j>0; j--)
        fac*=j;
    return fac;
}
int Combinatorio(int n, int m){             // Funcion combinatorio.
    int comb;

    comb= Factorial(n)/(Factorial(m)*Factorial(n - m));     //Llamo a la funcion factorial
    return comb;
}

int main()
{
    int comb, n, m;

    cout << "Introduce n y m respectivamente, (n>=m): ";
    cin >> n >> m;

    comb= Combinatorio(n,m);                // Llamo a la funcion ocmbinatorio.
    cout << "El combinatorio de n y m es: " << comb << endl;
}
