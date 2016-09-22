#include <iostream>
#include <cmath>

using namespace std;

class Matriz{
    private:
        //Elementos de la matriz.
        static int const TAM=100;
        int fil, col;
        int matriz[TAM][TAM];
        //Elementos del vector referencia.
        int total_usados;
        int referencia[TAM];
        int tam_referencia;
        //Elementos de filas a comparar.
        int total_us_fil;
        int compara_filas[TAM];
        int tam_comparar;
    public:
        //Constructor.
        Matriz(){
            fil=0;
            col=0;
            total_usados=0;
            total_us_fil=0;
        }
        //Vector Refencia.
        void ElementosReferencia(int n_referencia){
            tam_referencia=n_referencia;
        }

        void AniadeReferencia(int elementos){
            if(total_usados<tam_referencia){
                referencia[total_usados]=elementos;
                total_usados++;
            }
        }
        // Vector filas comparar.
        void NumeroComparar(int n_comparar){
            tam_comparar=n_comparar;
        }

        void AniadeFilComparar(int num_fil){
            if(num_fil>-1 && num_fil<tam_comparar){
                compara_filas[total_us_fil]=num_fil;
                total_us_fil++;
            }
        }
        //Matriz.
        void Filas(int filas){
            fil=filas;
        }

        void Columnas(int columnas){
            col=columnas;
        }

        void AniadeElemento(int n, int f, int c){
            matriz[f][c]=n;
        }

        int GetNumero(int fila, int columna){
            return matriz[fila][columna];
        }

        //Operacion
        double Distancia(int fila){
            double distancia = 0;

            for(int i = 0; i < col; i++)
                distancia += pow(referencia[i] - matriz[fila][i], 2);

            distancia = sqrt(distancia);

            return distancia;
        }


	int Representa(){
		double mejor_distancia;
		int marca_mejor, a;

//Inicializador
		a = compara_filas[0];
		mejor_distancia = Distancia(a);
		marca_mejor = a;

		for(int i = 1; i < total_us_fil; i++){
			a = compara_filas[i];
			Distancia(a);

			if(Distancia(a) < mejor_distancia){
				mejor_distancia = Distancia(a);
				marca_mejor = a;
			}

		}

		return marca_mejor;
	}


};

int main()
{
    Matriz A;
    int n_referencia, elementos, cont1=0;
    int n_comparar, num_fil, cont2=0;
    int filas, columnas;
    int num;

    cout << "Introduce numero de elementos del vector referencia: ";
    cin >> n_referencia;
    A.ElementosReferencia(n_referencia);

    cout << "Introduce los elementos: ";
    do{
        cin >> elementos;
        A.AniadeReferencia(elementos);
        cont1++;
    }while(cont1<n_referencia);

    cout << "Introduce numero de elementos del vector filas a comparar: ";
    cin >> n_comparar;
    A.NumeroComparar(n_comparar);

    cout << "Introduce los elementos: ";
    do{
        cin >> num_fil;
        A.AniadeFilComparar(num_fil);
        cont2++;
    }while(cont2<n_comparar);

    cout << "Numero de filas de la matriz: ";
    cin >> filas;
    A.Filas(filas);

    cout << "Numero de columnas de la matriz: ";
    cin >> columnas;
    A.Columnas(columnas);

    for(int fil=0; fil<filas; fil++)
        for(int col=0; col<columnas; col++){
            cin >> num;
            A.AniadeElemento(num, fil, col);
        }
    cout << "La fila mas cercana es: " << A.Representa() << endl;
}
