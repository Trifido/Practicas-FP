/* Metodo Modifica */
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
        void MostrarVector(){
            for(int i=0; i<total_utilizados; i++)
                cout << vector_privado[i] << " ";
        }
        void Modifica(int indice_componente, char nuevo){
            // if para indicar que la componente no se salga del vector
            if(indice_componente>-1 && indice_componente<total_utilizados)
            // En la posicion indicada del vector, se sustituye el valor por el nuevo caracter.
                vector_privado[indice_componente]= nuevo;
            else
                cout << "ERROR: Indice fuera del vector." << endl;
        }
};

int main()
{
    MiVectorCaracteres vector1;

    vector1.Aniade('a');
    vector1.Aniade('b');
    vector1.Aniade('b');
    vector1.Aniade('a');
    vector1.Modifica(2, 'c');
    vector1.MostrarVector();
    cout << endl;
    // En los siguientes casos el indice para sustituir estan fuera del rango del vector.
    vector1.Modifica(-1, 'c');
    vector1.Modifica(4, 'c');
}
