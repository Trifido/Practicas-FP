/*Busquedad binaria y Ordenacion*/
#include <iostream>
using namespace std;

class MiVectorEnteros{
    private:
        static const int TAMANIO=50;
        int v_privado[TAMANIO];
        int total_utilizados;
    public:
        MiVectorEnteros()
            : total_utilizados(0){}

        int TotalUtilizados(){
            return total_utilizados;
        }

        int Capacidad(){
            return TAMANIO;
        }

        void Aniade(int nuevo) {
            if (total_utilizados < TAMANIO){
                v_privado[total_utilizados] = nuevo;
                total_utilizados++;
            }
        }

        int Elemento(int indice) {
            return v_privado[indice];
        }

        void Mostrar(){
            for(int i= 0; i<total_utilizados; i++)
                cout << v_privado[i] << " ";
        }

        // Metodo que rellena el vector de los primero 50 pares.
        void RellenarPares(){
            for(int i= 1; i<TAMANIO+1; i++)
                Aniade(i*2);
        }

        // Metodo que hace una busquedad suponiendo que el vector esta ordenado.
        int BusquedaBinaria(int buscado){
            bool encontrado= false;
            int izqd= 0, der= total_utilizados - 1;
            int centro= (izqd + der)/2;
            // Mientras bool sea false e izquierda y derecha no se crucen,
            // la busqueda se va achicando a la mitad.
            while(!encontrado && izqd<= der){
                // Si el buscado es mayor que el centro, a la izquierda
                // se le suma el centro+1
                if(buscado>v_privado[centro]){
                    izqd= centro+1;
                }
                // Si es menor, se le suma a la derecha el centro-1,
                else if(buscado<v_privado[centro])
                    der= centro-1;
                else
                    encontrado= true;
                // El centro se actualiza en cada iteracion
                centro= (der+izqd)/2;
            }
            if(encontrado)
                return centro;
            else
                return -1;
        }

        // Metodo que devuelve posicion minima.
        int PosicionMinima(int a, int b){
            int min;

            if(v_privado[a]<v_privado[b])
                min= a;
            else
                min= b;
            return min;
        }

        // Metodo que devuelve posicion maxima.
        int PosicionMaxima(int a, int b){
            int max;

            if(v_privado[a]>v_privado[b])
                max= a;
            else
                max= b;
            return max;
        }

        // Metodo que Intercambia dos posiones.
        void Intercambiar(int a, int b){
            int aux;

            aux= v_privado[a];
            v_privado[a]= v_privado[b];
            v_privado[b]= aux;
        }

        // ORDENACION POR SELECCION.
        // Metodo que ordena de menor a mayor.
        void OrdenaCreciente(){
            int min;
            // El bucle indica como minimo la posicion i.
            for(int i=0; i<total_utilizados; i++){
                min= i;
                // Este bucle anidado busca un numero menor que el minimo.
                for(int j= i+1; j<total_utilizados; j++){
                    min= PosicionMinima(min, j);
                }
                // Se intercambia los valores i y minimo.
                Intercambiar(i, min);
            }
        }

        // Metodo que ordena de mayor a menor.
        // Igual que el metodo anterior, pero que busca el maximo.
        void OrdenaDecreciente(){
            int max;

            for(int i=0; i<total_utilizados; i++){
                max= i;
                for(int j= i+1; j<total_utilizados; j++){
                    max= PosicionMaxima(max, j);
                }
                Intercambiar(i, max);
            }


        }
};

int main (){
    MiVectorEnteros v1;

    cout << endl << "BUSQUEDAD BINARIA: " << endl;
    v1.RellenarPares();
    v1.Mostrar();
    cout << endl << "Busca el 7: " << v1.BusquedaBinaria(7);
    cout << endl << "Busca la penultima posicion, el 98: " << v1.BusquedaBinaria(98) << endl;

    cout << endl << "ORDENACION: " << endl;
    cout << "Ordenacion decreciente: " << endl;
    // Ordeno el vector anterior de mayor a menor.
    v1.OrdenaDecreciente();
    v1.Mostrar();
    // Ordeno de menor a mayor.
    cout << endl << "Ordenacion creciente: " << endl;
    v1.OrdenaCreciente();
    v1.Mostrar();
    cout << endl;








}

