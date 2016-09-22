#include <iostream>

using namespace std;

class Matriz{
    private:
        int matriz[25][25];
        int fil, col;
        int minimo[25];
        int total_min;
    public:
        Matriz(){
            fil=0;
            col=0;
            total_min=0;
        }

        void SetFila(int f){
            fil=f;
        }

        void SetColumna(int c){
            col=c;
        }

        void Aniade(int f, int c, int num){
            matriz[f][c]=num;
        }

        int GetElemento(int f, int c){
            return matriz[f][c];
        }

        void MinimoFila(int fila){
            int min= matriz[fila][0];
            for(int c=1; c<col; c++)
                if(min>matriz[fila][c])
                    min=matriz[fila][c];
            minimo[total_min]=min;
            total_min++;
        }

        int MaximoMin(){
            int max= minimo[0];
            for(int i=1; i<total_min; i++)
                if(max<minimo[i])
                    max=minimo[i];
            return max;
        }

        int PosFilas(){
            int num= MaximoMin();
            for(int f=0; f<fil; f++)
                for(int c=0; c<col && num!= matriz[f][c]; c++)
                    if(num== matriz[f][c])
                        num= f;
            return num;
        }



};

int main()
{
    Matriz A;
    int num_fil, num_col, num;
    bool encontrado= false;

    cout << "Introduce el numero de filas: ";
    cin >> num_fil;
    A.SetFila(num_fil);

    cout << "Introduce el numero de columnas: ";
    cin >> num_col;
    A.SetColumna(num_col);

    cout << "Introduce los elementos de la matriz: ";
    for(int i=0; i<num_fil; i++)
        for(int j=0; j<num_col; j++){
            cin >> num;
            A.Aniade(i, j, num);
        }
    for(int i=0; i<num_fil; i++)
        A.MinimoFila(i);

    for(int f=0; f<num_fil; f++)
        for(int c=0; c<num_col && !encontrado; c++){
            if(A.MaximoMin()==A.GetElemento(f,c)){
                cout << f << " " << c << endl;
                encontrado=true;
            }
        }
}
