#include <iostream>
#include <vector>

using namespace std;

class VectorCaracteres{
    private:
        static const int TAM=100;
        char vec[TAM];
        int total_usados;
    public:
        VectorCaracteres(){
            total_usados=0;
        }

        void Aniade(char letra){
            vec[total_usados]= letra;
            total_usados++;
        }
};

class SopaLetras{
    private:
        static const int TAM=40;
        char matriz[TAM][TAM];
        int fil, col;
    public:
        SopaLetras(){
            fil=0;
            col=0;
        }
        int GetFil(){
            return fil;
        }

        void SetFil(int f){
            fil= f;
        }

        int GetCol(){
            return col;
        }

        void SetCol(int c){
            col=c;
        }

        char ObtenerElemento(int f, int c){
            return matriz[f][c];
        }

        void AniadeElemento(char letra, int f, int c){
            matriz[f][c]= letra;
        }

        void AniadeFila(char f[TAM]){
            for(int i=0; i<col; i++)
                matriz[fil][i]=f[i];
            fil++;
        }

        void InsertarFila(int pos, char f[TAM]){
            for(int i=fil; i>pos; i--)
                for(int c=0; c<col; c++)
                    matriz[i][c]=matriz[i-1][c];
            for(int i=fil; i>pos; i--)
                for(int c=0; c<col; c++)
                    matriz[pos][c]=f[c];
            fil++;
        }

        SopaLetras Transpuesta(){
            SopaLetras trap;
            trap.SetCol(fil);
            trap.SetFil(col);

            for(int f=0; f<GetFil();f++){
                for(int c=0; c<GetCol(); c++)
                    trap.AniadeElemento(ObtenerElemento(c,f),f,c);
            }
            return trap;
        }

        void Mostrar(){
            for(int f=0; f<GetFil(); f++){
                for(int c=0; c<GetCol();c++)
                    cout << ObtenerElemento(f,c) << " ";
                cout << endl;
            }
        }

};

int main()
{
    SopaLetras A, A_trap;
    int fil, col;
    char letra;

    cout << "Introduce numero de filas y columnas: ";
    cin >> fil >> col;

    A.SetFil(fil);
    A.SetCol(col);

    for(int f=0; f<fil; f++){
        for(int c=0; c<col; c++){
            cin >> letra;
            A.AniadeElemento(letra,f,c);
        }
    }
    A.Mostrar();

    char fila[40]={'e','e'};
    A.InsertarFila(1,fila);

   A_trap= A.Transpuesta();

    A.Mostrar();
    A_trap.Mostrar();
}
