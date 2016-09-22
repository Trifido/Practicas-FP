/* Ejercicios 7 y 8 */
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
            for(int i= 0; i<total_utilizados-1-i && espalindromo; i++){
                if(vector_privado[i] != vector_privado[total_utilizados-1-i])
                    espalindromo= false;
            }
            return espalindromo;
        }

        void MostrarVector(){
            for(int i=0; i<total_utilizados; i++)
                cout << vector_privado[i] << " ";
        }

        void Modifica(int indice_componente, char nuevo){
            if(indice_componente>-1 && indice_componente<total_utilizados)
                vector_privado[indice_componente]= nuevo;
            else
                cout << "ERROR: Indice fuera del vector." << endl;
        }

        void IntercambiarComponentes(int indice1, int indice2){
            char aux;

            if(indice1>-1 && indice1<total_utilizados && indice2>-1 && indice2<total_utilizados){
                aux=vector_privado[indice1];
                vector_privado[indice1]= vector_privado[indice2];
                vector_privado[indice2]= aux;
            }
            else
                cout << "ERROR: Posicion de indice erronea." << endl;
        }

        void InvertirVector(){
            for(int i=0; i<(total_utilizados-1-i); i++)
                IntercambiarComponentes(i,total_utilizados-1-i);
        }

        void Elimina(int pos){
            if(pos>-1 && pos<total_utilizados){
                for(int i=pos; i< total_utilizados-1; i++)
                    vector_privado[i]=vector_privado[i+1];
                total_utilizados= total_utilizados-1;
            }
        }

        void EliminaMayusculas1(){
            for(int j=0; j<total_utilizados; j++)
                if(vector_privado[j]>='A' && vector_privado[j]<='Z'){
                    Elimina(j);
                    j--;
                }
        }

        void EliminaMayusculas2(){
            int pos_escritura=0;
            for(int pos_lectura=0; pos_lectura<total_utilizados; pos_lectura++){
                if((vector_privado[pos_lectura]>='a' && vector_privado[pos_lectura]<='z') || vector_privado[pos_lectura]== ' '){
                    vector_privado[pos_escritura]= vector_privado[pos_lectura];
                    pos_escritura++;
                }
            }
            total_utilizados=pos_escritura;
        }

    // EJERCICIO 8.
        void EliminarRepetidos(){
            int caracter, caracter_avanzado;
            // Bucle recorrido de caracteres.
            for(int i= 0; i<total_utilizados; i++){
                caracter= vector_privado[i];
                // Bucle que recorre el mismo vector una posicion adelantada.
                // Se comparan y si son el mismo caracter, se elimina la posicion j.
                for(int j= i+1; j<total_utilizados; j++){
                    caracter_avanzado= vector_privado[j];
                    if(caracter==caracter_avanzado){
                        Elimina(j);
                        j--;
                    }
                }
            }
        }

    // EJERCICIO 7.
        void EliminarEspacios(){
            int pos_escritura=0;

            for(int pos_lectura=0; pos_lectura<total_utilizados; pos_lectura++){
                // Si posicion de lectura o la siguiente posicion, es distinto de espacio
                // en posicion de escritura se copia posicion lectura y se aumenta escritura.
                if(vector_privado[pos_lectura]!= ' ' || vector_privado[pos_lectura+1]!= ' '){
                    vector_privado[pos_escritura]= vector_privado[pos_lectura];
                    pos_escritura++;
                }
            }
            total_utilizados=pos_escritura;
        }
};

int main()
{
    MiVectorCaracteres vector1;
    MiVectorCaracteres vector2;

    vector1.Aniade('b');
    vector1.Aniade('a');
    vector1.Aniade('a');
    vector1.Aniade('h');
    vector1.Aniade('a');
    vector1.Aniade('a');
    vector1.Aniade('a');
    vector1.Aniade('a');
    vector1.Aniade('c');
    vector1.Aniade('a');
    vector1.Aniade('a');
    vector1.Aniade('a');
    vector1.Aniade('g');

    vector2.Aniade(' ');
    vector2.Aniade('a');
    vector2.Aniade('h');
    vector2.Aniade(' ');
    vector2.Aniade(' ');
    vector2.Aniade(' ');
    vector2.Aniade('c');

    cout << "EJERCICIO 7: " << endl;
    cout << "vector normal: ";
    vector2.MostrarVector();
    cout << endl << "Sin exceso de espacios: " << endl;
    vector2.EliminarEspacios();
    vector2.MostrarVector();
    cout << endl;

    cout << endl << "EJERCICIO 8: " << endl;
    cout << "vector normal: ";
    vector1.MostrarVector();
    cout << endl << "Sin repeticiones: " << endl;
    vector1.EliminarRepetidos();
    vector1.MostrarVector();
}
