/* Metodo para Eliminar letras Mayusculas, con dos punteros. */
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

        void EliminaMayusculas2(){
            int pos_escritura=0, pos_lectura=0;
            for(int i=0; i<total_utilizados; i++){
                if(vector_privado[pos_lectura]>='a' && vector_privado[pos_lectura]<='z'){
                    vector_privado[pos_escritura]= vector_privado[pos_lectura];
                    pos_escritura++;
                }
                pos_lectura++;
            }
            total_utilizados=pos_escritura;
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
    vector1.EliminaMayusculas2();
    vector1.MostrarVector();

}
