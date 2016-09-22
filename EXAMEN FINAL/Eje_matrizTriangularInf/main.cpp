#include <iostream>
#include <vector>
using namespace std;

bool EsTriangularInf(vector< vector <int>> matriz){
    bool result= true;
    for(int i= matriz.at(0).size()-1; i>-1 && result; i--){
        if(i==0 && matriz[i][i]==0){
            result= false;
        }
        else{
            if(matriz[i][i]==0)
                result= false;
            else{
                for(int j=i-1; j>-1; j--)
                    if(matriz[j][i]!=0)
                        result=false;
            }
        }
    }
    return result;
}

bool EsTinf(vector <vector <int>> matriz, int f, int c, int tam){
     bool result;
    if(f==0 && c==0 && matriz[f][c]!=0){
        result= true;
    }
    else{
        if(f==0)
            EsTinf(matriz, tam-1, c-1, tam-1);
        else if(matriz[f][f]==0 || matriz[f-1][c]!=0){
            result= false;
        }
        else
            EsTinf(matriz, f-1, c, tam);
    }
    return result;
}

int main()
{
    int num;
    vector <vector <int>> matriz;

    for(int i=0; i<3; i++){
        vector <int> fila;
        for(int j=0; j<3; j++){
            cin >> num;
            fila.push_back(num);
        }
        matriz.push_back(fila);
    }

    for(unsigned f=0; f<matriz[0].size(); f++){
        for(unsigned c=0; c<matriz[0].size(); c++)
            cout << matriz[f][c];
        cout << endl;
    }

    if(EsTinf(matriz,2,2,2)==true)
        cout << "La matriz es triangular inferior." << endl;
    else
        cout << "La matriz no es triangular inferior." << endl;
}
