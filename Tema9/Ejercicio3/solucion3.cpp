/* Metodo para Intercambiar componentes. */
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
        void IntercambiarComponentes(int indice1, int indice2){
            char aux;
            //Una condicion para que los dos indices se encuentre dentro del rango de posiciones del vector.
            if(indice1>-1 && indice1<total_utilizados && indice2>-1 && indice2<total_utilizados){
                // A la variable auxiliar se le dael valor del vector en la posicion indice1.
                aux=vector_privado[indice1];
                // La posicion del vector en indice1 se sustituye por la de la indice2.
                vector_privado[indice1]= vector_privado[indice2];
                // La posicion del vector en indice2 se le da el valor de aux.
                vector_privado[indice2]= aux;
            }
            else
                cout << "ERROR: Posicion de indice erronea." << endl;
        }
        void InvertirVector(){
            //Hacemos un for que acaba i y total_utilizados-1-i coinciden en la misma posicion o se intecambian posiciones.
            // total_utilizados-1 para no se exceda de la ultima posicion.
            for(int i=0; i<(total_utilizados-1-i); i++)
            // Llamamos al metodo anterior que intercambia las posiciones.
                IntercambiarComponentes(i,total_utilizados-1-i);
        }
};

int main()
{
    MiVectorCaracteres vector1;
    MiVectorCaracteres vector2;

    vector1.Aniade('h');
    vector1.Aniade('o');
    vector1.Aniade('l');
    vector1.Aniade('a');
    // Vector antes de Intercambiar componente.
    cout << "Vector1: " << endl;
    vector1.MostrarVector();
    vector1.IntercambiarComponentes(1,3);
    vector1.MostrarVector();

    cout << "Vector2: " << endl;
    vector2.Aniade('a');
    vector2.Aniade('g');
    vector2.Aniade('t');
    vector2.Aniade('b');
    vector2.Aniade('i');
    vector2.Aniade('o');
    vector2.MostrarVector();
    // Invertimos el vector2
    vector2.InvertirVector();
    vector2.MostrarVector();

}
