#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, k, n_aux, mod, sum;
    bool feliz=false;
    cout << "Introduce numero y coeficiente: ";
    cin >> num >> k;

    n_aux= num;
    for(int i=0; i<k; i++){
        sum=0;
        while(n_aux>0){
            mod= n_aux%10;
            n_aux= n_aux/10;
            sum+= pow(mod, 2);
        }
        n_aux=sum;
        if(n_aux==1)
            feliz=true;
    }

    if(feliz)
        cout << "El numero es feliz." << endl;
    else
        cout << "El numero no es feliz." << endl;
}
