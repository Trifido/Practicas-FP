#include <iostream>
using namespace std;

int main()
{
    int m, n, mult;

    cout << "Introduce multiplicando(n) y multiplicador(m) respectivamente: ";
    cin >> n >> m;

    if(n%2!=0)
        mult=m;

    while(n!=1){
        m*=2;
        n=n/2;
        if(n%2!=0)
            mult+= m;
    }
    cout << "RESULTADO = " << mult << endl;
}
