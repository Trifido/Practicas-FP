/* Quien divide a quien. */
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    bool se_dividen;
    int Dvdo, Dvsor;

    cout << "Introduce 2 numeros enteros: ";
    cin >> a >> b;

    if((a==0)||(b==0))                          // Si a o b es igual a 0, no se dividen.
        cout << "No se dividen." << endl;
    else {                                      // sino si el modulo de a entre b es igual 0
        if (a%b==0){                            // entonces dividendo es a y divisor es b.
            Dvdo = a;
            Dvsor = b;
            se_dividen=true;                    // el booleano se pone en true.
        }
        else if (b%a==0){
                Dvdo = b;
                Dvsor = a;
                se_dividen=true;
            }
            else                                // si no se dan ninguna condicion de las anteriores
                se_dividen=false;               // el booleano es false.

        if (se_dividen)                         // si el booleano es true se imprime quien divide a quien.
            cout << Dvsor << " divide a " << Dvdo << endl;
        else
            cout << "No se dividen. " << endl;
    }
}
