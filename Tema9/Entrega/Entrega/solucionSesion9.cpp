/* Ejercicios Sesion9 */
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
        // EJERCICIO 1: Metodo que comprueba si es palindromo el vector.
        bool EsPalindromo(){
            bool espalindromo= true;
            // total_utilizados-1 para que empieze en la ultima posicion del vector.
            for(int i= 0; i<total_utilizados-1-i && espalindromo; i++){
            // i y total_utilizados-1-i se comparan hasta que se crucen o espalindromo sea false.
            // si los caracteres son distintos, bool es false.
                if(vector_privado[i] != vector_privado[total_utilizados-1-i])
                    espalindromo= false;
            }
            return espalindromo;
        }
        void MostrarVector(){
            // Muestra pos pantalla el vector.
            for(int i=0; i<total_utilizados; i++)
                cout << vector_privado[i] << " ";
        }
        // EJERCICIO 2: Metodo que modifica posicion de vector.
        void Modifica(int indice_componente, char nuevo){
            // if para indicar que la componente no se salga del vector
            if(indice_componente>-1 && indice_componente<total_utilizados)
            // En la posicion indicada del vector, se sustituye el valor por el nuevo caracter.
                vector_privado[indice_componente]= nuevo;
            else
                cout << "ERROR: Indice fuera del vector." << endl;
        }
        // EJERCICIO 3: Metodos intercambiar posiciones e invertir vector mediante intercambio.
        void IntercambiarComponentes(int indice1, int indice2){
            char aux;
            // Condicion para que los dos indices se encuentre dentro del rango de posiciones del vector.
            if(indice1>-1 && indice1<total_utilizados && indice2>-1 && indice2<total_utilizados){
                // A la variable auxiliar se le da el valor del vector en la posicion indice1.
                // La posicion del vector en indice1 se sustituye por la de la indice2.
                // La posicion del vector en indice2 se le da el valor de aux.
                aux=vector_privado[indice1];
                vector_privado[indice1]= vector_privado[indice2];
                vector_privado[indice2]= aux;
            }
            else
                cout << "ERROR: Posicion de indice erronea." << endl;
        }
        void InvertirVector(){
            // Hacemos un for que acaba cuando i y total_utilizados-1-i se cruzan.
            for(int i=0; i<(total_utilizados-1-i); i++)
            // Llamamos al metodo anterior que intercambia las posiciones.
                IntercambiarComponentes(i,total_utilizados-1-i);
        }
        // EJERCICIO 4: Metodo eliminar posicion.
        void Elimina(int pos){
            // Condicion para que la posicion a borrar no sea erronea
            if(pos>-1 && pos<total_utilizados){
                // bucle que empieza en la posicion indicada, y la sustituye por la siguiente posicion.
                // al finalizar el bucle, la ultima posicion es la que hay que eliminar
                // reduzco el tamanio del vector en una posicion.
                for(int i=pos; i< total_utilizados-1; i++)
                    vector_privado[i]=vector_privado[i+1];
                total_utilizados= total_utilizados-1;
            }
        }
        // EJERCICIO 5: Metodo eliminar mayusculas.
        void EliminaMayusculas1(){
            // Si la posicion j es un caracter letra mayuscula, se elimina.
            // Dentro del if j-- para que al eliminar la mayucula, no se salte una letra.
            for(int j=0; j<total_utilizados; j++)
                if(vector_privado[j]>='A' && vector_privado[j]<='Z'){
                    Elimina(j);
                    j--;
                }
        }
        // EJERCICIO 6: Metodo de eliminar mayusculas mas eficiente.
        void EliminaMayusculas2(){
            int pos_escritura=0;
            for(int pos_lectura=0; pos_lectura<total_utilizados; pos_lectura++){
                // Si el caracter de la posicion lectura es letra minuscula o espacio en blanco, en posicion escritura
                // se copia el caracter y se aumenta el indice de pos_escritura.
                if((vector_privado[pos_lectura]>='a' && vector_privado[pos_lectura]<='z') || vector_privado[pos_lectura]== ' '){
                    vector_privado[pos_escritura]= vector_privado[pos_lectura];
                    pos_escritura++;
                }
            }
            // El tamaño del vector es igual a la ultima posicion de escritura.
            total_utilizados=pos_escritura;
        }
};

int main()
{
    MiVectorCaracteres vector1;
    MiVectorCaracteres vector2;
    MiVectorCaracteres vector3;
    MiVectorCaracteres vector4;
    MiVectorCaracteres vector5;
    bool espalindromo;

    cout << "- Solucion 1. Palindromo:" << endl;
    vector1.Aniade('a');
    vector1.Aniade('b');
    vector1.Aniade('b');
    vector1.Aniade('a');

    espalindromo= vector1.EsPalindromo();

    if(espalindromo)
        cout << "El vector de caracteres es palindromo." << endl;
    else
        cout << "El vector de caracteres no es palindromo." << endl;

    cout << endl << "- Solucion 2. Modificar vector:" << endl;

    vector1.Modifica(2, 'c');
    vector1.MostrarVector();
    cout << endl;
    // En los siguientes casos el indice para sustituir estan fuera del rango del vector.
    vector1.Modifica(-1, 'c');
    vector1.Modifica(4, 'c');

    cout << endl << "- Solucion 3. Modificar vector:" << endl;

    vector2.Aniade('h');
    vector2.Aniade('o');
    vector2.Aniade('l');
    vector2.Aniade('a');
    // Vector antes de Intercambiar componente.
    cout << "Vector2:" << endl;
    vector2.MostrarVector();
    vector2.IntercambiarComponentes(1,3);
    cout << endl;
    vector2.MostrarVector();

    cout << endl << "Vector3:" << endl;
    vector3.Aniade('a');
    vector3.Aniade('g');
    vector3.Aniade('t');
    vector3.Aniade('b');
    vector3.Aniade('i');
    vector3.Aniade('o');
    vector3.MostrarVector();
    // Invertimos el vector2
    vector3.InvertirVector();
    cout << endl;
    vector3.MostrarVector();

    cout << endl << "- Solucion 4. Eliminar letra:" << endl;

    vector2.Elimina(2);
    vector2.MostrarVector();

    cout << endl << "- Solucion 5. Eliminar Mayuculas:" << endl;

    vector4.Aniade('S');
    vector4.Aniade('o');
    vector4.Aniade('Y');
    vector4.Aniade(' ');
    vector4.Aniade('y');
    vector4.Aniade('O');
    vector4.MostrarVector();
    cout << endl;
    vector4.EliminaMayusculas1();
    vector4.MostrarVector();

    cout << endl << "- Solucion 6. Eliminar Mayuculas (Eficiente):" << endl;

    vector5.Aniade('S');
    vector5.Aniade('o');
    vector5.Aniade('Y');
    vector5.Aniade(' ');
    vector5.Aniade('y');
    vector5.Aniade('O');
    vector5.MostrarVector();
    cout << endl;
    vector5.EliminaMayusculas2();
    vector5.MostrarVector();
}
