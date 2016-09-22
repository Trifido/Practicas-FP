#include <iostream>

using namespace std;

class Sopa{
    private:
        static const int TAM=40;
        char matriz[TAM][TAM];
        int fil, col;
    public:
        Sopa(){
            fil=0;
            col=0;
        }

        void TamFil(int f){
            fil=f;
        }

        int Mfil(){
            return fil;
        }

        void TamCol(int c){
            col=c;
        }

        int Mcol(){
            return col;
        }

        void Aniade(char letra, int f, int c){
            if(f<fil && c<col)
                matriz[f][c]=letra;
        }

        char Elemento(int f, int c){
            if(f<fil && c<col)
                return matriz[f][c];
        }

        Sopa Transpuesta(){
            Sopa trasp;

            trasp.TamCol(fil);
            trasp.TamFil(col);

            for(int f=0; f<fil; f++)
                for(int c=0; c<col; c++){
                    trasp.Aniade(Elemento(f,c),c,f);
                }
            return trasp;
        }

        bool IzquierdA(string palabra){
            bool result= false;
            int j=0;
            for(int i=0; i<fil; i++){
                if(j<palabra.size()){
                    if(matriz[i][i]==palabra.at(j))
                    j++;
                    else{
                        if(j>0)
                            i--;
                        j=0;
                    }
                }
            }

            if(j==palabra.size())
                result=true;
            return result;
        }

        bool Diagonal(string palabra){
            bool result= false;
            if(IzquierdA(palabra))
                result= true;
        }
};

int main()
{
    string pal;
    int fil, col;
    char letra;
    Sopa sopa, transpuesta;

    cout << "Introduce el numero de filas y columnas: ";
    cin >> fil >> col;

    sopa.TamFil(fil);
    sopa.TamCol(col);

    for(int f=0; f<fil; f++)
        for(int c=0; c<col; c++){
            cin >> letra;
            sopa.Aniade(letra,f,c);
        }

    transpuesta= sopa.Transpuesta();

    for(int f=0; f<transpuesta.Mfil(); f++){
        for(int c=0; c<transpuesta.Mcol(); c++){
            cout << transpuesta.Elemento(f,c) << " ";
        }
        cout << endl;
    }

    /*cout << "Busca la palabra: ";
    cin >> pal;

    if(sopa.Diagonal(pal))
        cout << "Se encuentra." << endl;
    else
        cout << "No se esncuentra." << endl;*/
}
