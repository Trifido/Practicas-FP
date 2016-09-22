#include <iostream>
using namespace std;

int main()
{
    int cont_a=0, cont_b=0, cont_c=0, ventas, max;
    char vendedor, vende_max;

    cout << "Introduce vendedores y ventas: " << endl;

    do{
        cin >> vendedor;

        if(vendedor!='@'){
            do{
                cin >> ventas;

                if(ventas!=-1){
                    if(vendedor=='A')
                        cont_a+=ventas;
                    if(vendedor=='B')
                        cont_b+=ventas;
                    if(vendedor=='C')
                        cont_c+=ventas;
                }
            }while(ventas!=-1);
        }
    }while(vendedor!='@');

    if(cont_a>cont_b){
        max= cont_a;
        vende_max= 'A';
    }
    else{
        max= cont_b;
        vende_max= 'B';
    }
    if(cont_c>max){
        max= cont_c;
        vende_max= 'C';
    }
    cout << "RESULTADO = " << vende_max << " " << max << endl;
}
