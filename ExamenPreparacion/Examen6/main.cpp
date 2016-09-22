#include <iostream>
using namespace std;

int main()
{
    int cont=0, sum=0, tope=1, num;

    cout << "Introduce un numero: ";
    cin >> num;

    for(int i=1; i<num; i++){
        if(sum<num)
            sum+=i;
        else {
            if(sum==num)
                cont++;
            sum=0;
            tope++;
            i=tope;
        }
    }
    cout << "RESULTADO= " << cont << endl;
}
