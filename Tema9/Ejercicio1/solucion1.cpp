/* Metodo para comprobar si es palindromo*/
#include <iostream>
using namespace std;

class MiVectorCaracteres{
    private:
        static const int TAMANIO= 50;
        char vector_privado[TAMANIO];
        int total_utilizados;
    public:
        MiVectorCaracteres()
            :total_utilizados(0)
        {
        }
        int TotalUtilizados(){
            return total_utilizados;
        }
        void Aniade(char nuevo){
            if(total_utilizados < TAMANIO){
                vector_privado[total_utilizados]= nuevo;
                total_utilizados++;
            }
        }
        bool EsPalindromo(){
            bool espalindromo= true;
            // total_utilizados-1 se debe porque total_utilizados= 4, para que empieze en una posicion valida, la ultima posicion.
            for(int i= 0; i<total_utilizados-1-i && espalindromo; i++)
            // i se mueve hasta la ultima posicion y total_utilizados-1-i se mueve hasta la primera posicion, comparandose entre ellos.
            // si los caracteres son distintos, bool es false y termina el bucle.
                if(vector_privado[i] != vector_privado[total_utilizados-1-i])
                    espalindromo= false;

            return espalindromo;
        }
};

int main()
{
    MiVectorCaracteres vector1;
    bool espalindromo;
    vector1.Aniade('a');
    vector1.Aniade('b');
    vector1.Aniade('b');
    vector1.Aniade('a');

    espalindromo= vector1.EsPalindromo();

    if(espalindromo)
        cout << "El vector de caracteres es palindromo.";
    else
        cout << "El vector de caracteres no es palindromo.";

}
