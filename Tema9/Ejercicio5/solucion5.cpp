/* Metodo para Eliminar letras Mayusculas. */
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
                // cambio el ultimo valor por el caracter espacio.
                //vector_privado[total_utilizados-1]=' ';
                total_utilizados= total_utilizados - 1;
            }
        }
        void EliminaMayusculas(){
            //Un bucle que pasa por todas las posiciones de vector
            for(int j=0; j<total_utilizados; j++)
                // Si la posicion j es un caracter letra mayuscula, se elimina.
                if(vector_privado[j]>='A' && vector_privado[j]<='Z'){
                    Elimina(j);
                    j--;
                }
        }
};

int main()
{
    MiVectorCaracteres vector1;

    vector1.Aniade('S');
    vector1.Aniade('o');
    vector1.Aniade('Y');
    vector1.Aniade(' ');
    vector1.Aniade('y');
    vector1.Aniade('O');
    vector1.MostrarVector();
    vector1.EliminaMayusculas();
    vector1.MostrarVector();

}
