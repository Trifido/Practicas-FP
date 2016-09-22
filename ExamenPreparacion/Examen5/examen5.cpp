#include <iostream>

using namespace std;

int main()
{
    bool ondulado=true;
    int num, n, n_cifras=0, cont=1;
    int cifra, ant1, ant2, div, n_cont;

    cout << "Introduce un numero: ";
    cin >> num;

    if(num<0)
        ondulado= false;
    else if(num<100)
            ondulado= true;
         else{
             n= num;
             while(n>0){        // Obtenemos las cifras del numero introducido
                 n= n/10;
                 n_cifras++;
             }

             n_cont=n_cifras-1;   // n_cont la utilizamos para un bucle posterior
             while(cont<n_cifras && ondulado==true){    // Mientras cont sea menor que las cifras y ondulado sea true
                div=1;                                  // a div le damos valor 1
                for(int i=0; i<n_cont; i++)             // un bucle for que dice por cuanto dividir para obtener las cifras.
                    div*=10;

                cifra= num/div;
                if(num>div)
                    num-=div*cifra;

                if(cont<3){                              // cuando el bucle se inicializa
                    if(cont%2==0){                       // si cont es un numero par, entonces cifra se introduce en ant2(variable de la cifra de posicion par)
                        ant2=cifra;
                    }
                    else{                                // sino se introduce en ant1, (cifras de posicion impar)
                        ant1=cifra;
                    }
                }
                else{                                   // sino, cont ya ha tenido mas de dos valores entonces
                    if(cont%2==0) {                      // si cont es par
                        if(cifra!=ant2)                 // la nueva cifra la compara con la cifra de posicion par
                            ondulado=false;             // si es distinta ondulado = false
                    }
                    else
                        if(cifra!=ant1)
                            ondulado=false;
                }
                cont++;                                 // cont va aumentando
                n_cont--;                               // y n_cont va reduciendo ya que cada vez se divira por menos el numero.
             }
         }
    if(ondulado)
        cout << "RESULTADO= SI" << endl;
    else
        cout << "RESULTADO= NO" << endl;
}
