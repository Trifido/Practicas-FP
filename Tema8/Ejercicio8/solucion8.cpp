#include <iostream>
#include <vector>
using namespace std;

class ParejaEnteros{
    private:
        int num1, num2, dividendo, divisor;
        bool se_dividen;
    public:
        ParejaEnteros()         // Constructor
            :num1(1), num2(2){}
        int GetNum1(){
            return num1;
        }
        int GetNum2(){
            return num2;
        }
        void SetNum1(int aux1){
            num1= aux1;
        }
        void SetNum2(int aux2){
            num2= aux2;
        }
        int Mayor(){        // Metodo para obtener el mayor.
            int max;
            if(num1>num2)
                max=num1;
            else
                max=num2;
            return max;
        }
        int Menor(){        // Metodo para obtener el menor
            int min;
            if(num1<num2)
                min= num1;
            else
                min= num2;
            return min;
        }
        bool SeDividen(){   // Metodo que devuelve un bool, si es true los numeros se dividen.
            bool se_dividen;
            if((num1%num2==0) || (num2%num1==0))
                se_dividen= true;
            else
                se_dividen= false;
            return se_dividen;
        }
        void DividendoyDivisor(){   // Si el bool se_dividen es true, entonces se da el dividendo y divisor.
            if(se_dividen==true){
                dividendo=Mayor();
                divisor=Menor();
            }
            else
                cout << "No hay division." << endl;
        }
        int GetDividendo(){
            return dividendo;
        }
        int GetDivisor(){
            return divisor;
        }
        void Intercambiar(){        // Metodo para intercambiar variables.
            int aux;
            aux= num1;
            num1= num2;
            num2= aux;
        }
        int MaximoComunDivisor(){       // Metodo para obtener el maximo comun divisor.
            int max= Mayor();
            int min= Menor();
            int mcd;
            for(int i=1;i<min+1; i++)
                if(max%i==0 && min%i==0)
                    mcd=i;
            return mcd;
        }

};

int main()
{
    ParejaEnteros A, B;
    A.SetNum1(8);
    A.SetNum2(4);

    cout << "Numero1: " << A.GetNum1() << endl;
    cout << "Numero2: " << A.GetNum2() << endl;
    cout << "El mayor es: " << A.Mayor() << endl;
    cout << "El menor es: " << A.Menor() << endl;

    if(A.SeDividen()){
        cout << "Los numeros se dividen." << endl;
        A.DividendoyDivisor();
        cout << "El dividendo es: " << A.GetDividendo() << endl;
        cout << "El divisor es: " << A.GetDivisor() << endl;
    }
    else
        cout << "Los numeros no se dividen." << endl;

    A.Intercambiar();
    cout << "Numero1: " << A.GetNum1() << endl;
    cout << "Numero2: " << A.GetNum2() << endl;

    cout << "El Maximo comun divisor es: " << A.MaximoComunDivisor() << endl;
//---------------------------------------------------------------------------------------------------------------------------
    vector <ParejaEnteros> v1;

    int a, b, mcd;
    for(int i=0; i<5; i++){
        cin >> a >> b;
        B.SetNum1(a);
        B.SetNum2(b);
        v1.push_back(B);

    }

    cout << "Maximo comun divisor: " << endl;
    for(int i=0; i< v1.size(); i++){
        cout << v1[i].MaximoComunDivisor() << endl;
    }
}
