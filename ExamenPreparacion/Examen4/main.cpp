#include <iostream>
using namespace std;

int main()
{
    bool polidivisible= true;
    int num, n, aux=1, cont=0;

    cout << "Introduce numero: ";
    cin >> num;

    if(num>0 && num<10)
        polidivisible=true;
    else{
        n= num;
        while(n>0){
            n= n/10;
            cont++;
        }
        for(int j=0; j<cont; j++)
            aux*= 10;
        for(int i=2; i<cont+1; i++){
            if(i==2)
                aux/= 100;
            else
                aux/= 10;
            n= num/aux;

            if(n%i!=0)
                polidivisible= false;
        }
    }

    if(polidivisible)
        cout << "RESULTADO = SI" << endl;
    else
        cout << "RESULTADO = NO" << endl;
}
