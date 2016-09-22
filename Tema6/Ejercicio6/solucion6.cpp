/* Transformar letra por funciones.*/
#include <iostream>
using namespace std;

char EsMayuscula(char letra, int amplitud){ //Paso por entrada amplitud para no tener que repetir codigo.
    letra= letra+amplitud;  // Para convertir en minusculas, le suma a la letra un valor entero que es la amplitud.
    return letra;
}
char EsMinuscula(char letra, int amplitud){
    letra= letra-amplitud;  // Para convertir en mayusculas, le resto la amplitud a la letra minuscula.
    return letra;
}
char EsOtro(char letra){
    return letra;
}
char Transforma(char letra){
    const int AMPLITUD= 'a' - 'A';          // Declaro AMPLITUD en una funcion principal, que llamará
    if(letra>='A' && letra<='Z')            // a la funcion requerida por las condicionales.
        letra= EsMayuscula(letra, AMPLITUD);
    else if(letra>='a' && letra<='z')
            letra= EsMinuscula(letra, AMPLITUD);
         else                               // Sino es ni mayuculas ni minusculas, se devuelve el caracter.
            letra= EsOtro(letra);
    return letra;
}
int main()
{
    char letra;

    cout << "Introduce letra: ";
    cin >> letra;

    letra=Transforma(letra);    // la variable letra cambia su valor mediante la llamada a la funcion.
    cout << letra << endl;
}
