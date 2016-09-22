#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double h1, h2, h3, sumatoria;
    double media, desv;

    cout << "Introduce tres alturas: ";
    cin >> h1 >> h2 >> h3;

    sumatoria= h1 + h2 + h3;
    media= sumatoria/3;
    desv= sqrt(pow(sumatoria-media, 2)/3);

    if(h1<media)
        cout << h1 << " es menor que su media." << endl;
    else
        cout << h1 << " es mayor que su media." << endl;
    if(h2<media)
        cout << h2 << " es menor que su media." << endl;
    else
        cout << h2 << " es mayor que su media." << endl;
    if(h3<media)
        cout << h3 << " es menor que su media." << endl;
    else
        cout << h3 << " es mayor que su media." << endl;
}
