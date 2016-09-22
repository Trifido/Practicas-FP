#include <iostream>

using namespace std;

class Matriz{
    private:
        static const int TAM=100;
        int matriz[TAM][TAM];
        int fil, col;
        double medias[TAM];
        int total_util;
    public:
        Matriz(){
            fil=0;
            col=0;
            total_util=0;
        }

        void SetFila(int f){
            fil=f;
        }

        void SetColumna(int c){
            col=c;
        }

        void Aniade(int num, int f, int c){
            matriz[f][c]= num;
        }

        void Mostrar(){
            for(int f=0; f<fil; f++){
                for(int c=0; c<col; c++)
                    cout << matriz[f][c] << " ";
                cout << endl;
            }
        }

        void Medias(){
            double media;
            for(int f=0; f<fil; f++){
                media=0;
                for(int c=0; c<col; c++)
                    media+=matriz[f][c];
                media= media/col;
                medias[total_util]=media;
                total_util++;
            }
        }

        void MostrarMedia(){
            for(int f=0; f<fil; f++)
                cout << medias[f] << " ";
        }

        void CopiarFila(int fila, int v1[TAM]){
            for(int c=0; c<col; c++)
                v1[c]=matriz[fila][c];
        }

        void Ordena_por_Insercion (){
            int izda, i;
            double valor_a_desplazar;
            int fila_a_despalazar[TAM];

            for (izda=1; izda < total_util; izda++){
                valor_a_desplazar = medias[izda];
                CopiarFila(izda, fila_a_despalazar);

                for (i=izda; i>0 && valor_a_desplazar < medias[i-1]; i--){
                    medias[i] = medias[i-1];
                    for(int c=0; c<col; c++)
                        matriz[i][c]=matriz[i-1][c];
                }

                medias[i] = valor_a_desplazar;
                for(int c=0; c<col; c++)
                        matriz[i][c]=fila_a_despalazar[c];
            }
       }
};

int main(){
    Matriz A;
    int fil, col, num;

    cout << "Introduce el numero de filas: ";
    cin >> fil;
    A.SetFila(fil);

    cout << "Introduce el numero de columnas: ";
    cin >> col;
    A.SetColumna(col);

    cout << "Introduce los valores de la matriz: ";
    for(int f=0; f<fil; f++)
        for(int c=0; c<col; c++){
            cin >> num;
            A.Aniade(num, f, c);
        }

    A.Medias();
    cout << endl;

    A.Ordena_por_Insercion();
    cout << endl;

    A.Mostrar();
}
