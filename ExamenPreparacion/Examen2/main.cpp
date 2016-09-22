#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radio, x0, y0, z0=0, x1, y1, z1;
    char tipo;
    bool aerea= false, tierra= false;

    cout << "Introduce radio de la esfera de detencion: ";
    cin >> radio;
    cout << "Introduce la posicion del centro de la esfera: ";
    cin >> x0 >> y0;

    do{
        cin >> tipo;
        if(tipo!='D'){
            if(tipo=='T'){
                cin >> x1 >> y1;
                if((pow(x1-x0,2)+pow(y1-y0,2))<(radio*radio))
                    tierra= true;
            }
            if(tipo=='A'){
                cin >> x1 >> y1 >> z1;
                if((pow(x1-x0,2)+pow(y1-y0,2)+pow(z1-z0,2))<(radio*radio))
                    aerea= true;
            }
        }
    }while(tipo!='D' && tierra==false && aerea==false);

    if(aerea==true)
        cout << "AMENAZA AEREA" << endl;
    else if(tierra==true)
            cout << "AMENAZA TERRESTRE" << endl;
         else
            cout << "NINGUNA AMENAZA" << endl;
}
