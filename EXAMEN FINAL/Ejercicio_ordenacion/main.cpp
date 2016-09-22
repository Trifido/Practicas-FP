/* Ordenamos por seleccion. */

#include <iostream>

using namespace std;

int PosMin(int num1, int num2){
    int min;
    if(num1<=num2){
        min= num1;
    }
    else
        min= num2;
    return min;
}

void Intercambiar(int &izd, int &dec){
    int aux= izd;
    izd= dec;
    dec= aux;
}

/*int OrdenaPorSeleccion(int v1[], int tam){
    int pos_min;

    for(int izd=0; izd<tam; izd++){
        pos_min=PosMin(izd, tam-1);

    Intercambiar(v1[izd],v1[pos_min]);

    }
    return v1;
}*/

int main()
{
    int tam=4;
    int vec[4]={3,4,1,2};

    for(int i=0; i<tam; i++)
        cout << vec[i] << " ";
    cout << endl;

    int pos_min;

    for(int izd=0; izd<tam; izd++){
        pos_min=PosMin(izd, tam-1);

        Intercambiar(vec[izd],vec[pos_min]);
    }
    for(int i=0; i<tam; i++)
        cout << vec[i] << " ";
}
