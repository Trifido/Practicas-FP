#include <iostream>
#include <vector>

using namespace std;

class MatrizEnteros{
    private:
        vector <vector <int>> matriz;
        int col;
    public:
        MatrizEnteros(int columnas){
            col= columnas;
        }

        void IntroduceNCol(int c){
            col=c;
        }

        int GetCol(){
            return col;
        }

        int Elemento(int f,  int c){
            return matriz[f][c];
        }

        void AniadeElemento(int elemento, int f, int c){
            matriz[f][c]= elemento;
        }

        void AniadeFila(vector <int> fi){
            matriz.push_back(fi);
        }

        void InsertaFila(vector <int> f, int pos){
            vector <int> aux;
            matriz.push_back(aux);

            for(int i=matriz.size()-1; i>pos; i--)
                matriz[i]=matriz[i-1];
            matriz[pos]=f;
        }

        MatrizEnteros Transpuesta(){
            MatrizEnteros trap(matriz.size());

            for(int c=0; c<col; c++){
                vector <int> v1;
                for(unsigned f=0; f<matriz.size(); f++){
                    v1.push_back(Elemento(f,c));
                }
                trap.AniadeFila(v1);
            }
            return trap;
        }

        void MostrarMatriz(){
            for(unsigned i=0; i<matriz.size(); i++){
                for(int j=0; j<col; j++)
                    cout << Elemento(i,j) << " ";
                cout << endl;
            }
        }

};

int main()
{

    MatrizEnteros A(4), trap(4);
    vector <int> v={1,2,3,4};
    vector <int> v1={5,6,7,8};
    vector <int> v2={3,3,3,3};

    //trap.IntroduceNCol(3);

    A.AniadeFila(v);
    A.AniadeFila(v1);
    A.InsertaFila(v2,1);
    trap= A.Transpuesta();

    A.MostrarMatriz();
    trap.MostrarMatriz();

}
