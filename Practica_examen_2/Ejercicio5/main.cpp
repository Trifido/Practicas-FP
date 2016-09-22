#include <iostream>

using namespace std;

class Matriz{
    private:
        static const int tam= 100;
        int matriz[tam][tam];
        int total_fil, total_col;
        int fil, col;
    public:
        Matriz(){
            fil=0;
            col=0;
        }
        void Filas(int n_fil){
            total_fil=n_fil;
        }

        void Columnas(int n_col){
            total_col=n_col;
        }

        void LeerMatriz(int num, int fil, int col){
            if(fil<total_fil && col<total_col){
                matriz[fil][col]=num;
            }
        }

        int Elemento(int fil, int col){
            return matriz[fil][col];
        }

        bool Max_fil(int fil,int col){
            bool result= true;
            for(int f=0; f<total_fil && result; f++)
                if(matriz[fil][col]<matriz[f][col])
                    result=false;
            return result;
        }

        bool Min_col(int fil, int col){
            bool result= true;
            for(int c=0; c<total_col && result; c++)
                if(matriz[fil][col]>matriz[fil][c])
                    result= false;
            return result;
        }


};

int main()
{
    Matriz A;
    int n_fil, n_col;
    int num;

    cout << "Indica el numero de filas y columnas: ";
    cin >> n_col >> n_fil ;

    A.Filas(n_fil);
    A.Columnas(n_col);

    for(int col=0; col<n_col; col++)
        for(int fil=0; fil<n_fil; fil++){
            cin >> num;
            A.LeerMatriz(num, fil, col);
    }

    for(int col=0; col<n_col; col++)
        for(int fil=0; fil<n_fil; fil++){
            if(A.Max_fil(fil,col) && A.Min_col(fil,col))
                cout << "El numero es: " << A.Elemento(fil,col);
        }

}
