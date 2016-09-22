/* Metodo para Eliminar elemento del vector. */
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
            cout << endl;
        }

        void Elimina(int pos){
            // Condicion para que la posicion a borrar no sea erronea
            if(pos>-1 && pos<total_utilizados){
                // bucle que empieza en la posicion indicada, y la sustituye por la siguiente posicion.
                for(int i=pos; i< total_utilizados-1; i++)
                    vector_privado[i]=vector_privado[i+1];
                // al finalizar el bucle, la ultima posicion es la que hay que eliminar
                // la ultima posicion le doy el caracter espacio.
                // reduzco el tamanio del vector en una posicion.
                //vector_privado[total_utilizados-1]=' ';
                total_utilizados= total_utilizados-1;
            }
        }
};

int main()
{
    MiVectorCaracteres vector1;

    vector1.Aniade('h');
    vector1.Aniade('o');
    vector1.Aniade('l');
    vector1.Aniade('a');
    vector1.Elimina(2);
    vector1.MostrarVector();
}
