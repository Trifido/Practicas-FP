#include <iostream>
#include <vector>

using namespace std;

class Permutacion{
    private:
        vector <int> v1;
    public:
        void Aniade(int num){
            v1.push_back(num);
        }

        int Ciclos(int card){
            int cont=0;
            int min=1;
            while(min<=card){
                for(int i=0; i<card; i++)
                if(v1[i]==min)
                    min++;
                cont++;
            }
            return cont;
        }

        int getVector(int pos){
            return v1.at(pos);
        }


};

int main()
{
    Permutacion A;
    int cardinal, num, cont=0;

    cout << "Introduce el cardinal del conjunto a introducir: ";
    cin >> cardinal;

    cout << "Introduce los componentes de conjunto: ";
    do{
        cin >> num;
        A.Aniade(num);
        cont++;
    }while(cont<cardinal);

    cout << "El numero de permutaciones es: " << A.Ciclos(cardinal) << endl;
}
