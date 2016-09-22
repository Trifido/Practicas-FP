#include <iostream>
using namespace std;

int main()
{
    char l1, l2, l3, car;
    bool en_l1= false, en_l2= false, en_l3=false, fin_palabra=false;

    cout << "Introduce palabra de 3 letras a buscar: ";
    cin >> l1 >> l2 >> l3;

    do{
        cin >> car;

        if(car=='@')
            fin_palabra=false;

        if(fin_palabra==false){
            if(car==l1 && en_l1==false){
                en_l1= true;
                fin_palabra= true;
            }
            else if(car==l2 && en_l2== false && en_l1==true){
                    en_l2=true;
                    fin_palabra=true;
                }
                 else if(car==l3 && en_l3==false && en_l2==true)
                         en_l3= true;
        }
    }while(car!='#');

    if(en_l3)
        cout << "RESULTADO = SI" << endl;
    else
        cout << "RESULTADO = NO" << endl;
}
