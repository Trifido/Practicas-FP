#include <iostream>

using namespace std;

class SecuenciaLetras{
    private:
        string c1, c2;
    public:

};

int main()
{
    char letra;

    cout << "Introduce cadena1: ";
    do{
        cin >> letra;
        if(letra!='#')
            cout << "hola!";
            //A.AniadeC1(letra);
    }while(letra!='#');

    cout << "Introduce cadena2: ";
    do{
        cin >> letra;
        if(letra!='#')
            cout << "hola!";
            //A.AniadeC2(letra);
    }while(letra!='#');
}
