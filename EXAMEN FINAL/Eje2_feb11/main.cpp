#include <iostream>

using namespace std;



int main()
{
    string p, b;
    unsigned i, j=0;
    int pos;
    bool result= false;

    cout << "Introduzca la primera cadena: ";
    getline(cin,b);
    cout << "Introduzca la segunda cadena: ";
    getline(cin,p);

    for(i=0; i<p.size(); i++){
        if(j<b.size()){
            if(p.at(i)==b.at(j))
                j++;
            else{
                if(j>0)
                    i--;
                j=0;
                pos= i+1;
            }
        }
    }

    if(j==b.size())
        result=true;


    if(result){
        cout << b << "Se encuentra en la posicion " << pos << " de " << p << endl;
    }
    else
        cout << "No se encontró la subcadena." << endl;
}
