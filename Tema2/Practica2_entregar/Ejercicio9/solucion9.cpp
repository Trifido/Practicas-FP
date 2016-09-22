/* Horas, minutos y segundos. */
#include <iostream>
using namespace std;

int main()
{
    int p_entera;                                                    // Variable entera que contendrá la parte entera de las variables.
    int dias, horas, mins, segs;                                     // Variables entera.

    cout << "Introduce horas, minutos, segundos respectivamente: ";
    cin >> horas >> mins >> segs;                                    // Asigno los datos a las variables.

    p_entera= segs/60;
    segs= segs%60;
    mins+= p_entera;
    p_entera= mins/60;
    mins= mins%60;
    horas+= p_entera;
    p_entera= horas/24;
    horas= horas%24;
    dias= p_entera;

    cout << dias << " dias, " << horas << " horas, " << mins << " minutos, " << segs << " segundos." << endl;
}
