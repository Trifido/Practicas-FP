#include <iostream>
using namespace std;

class ParejaEnteros{
    private:
        int num1, num2, max, min, dividendo, divisor;
        bool se_dividen;
    public:
        ParejaEnteros()
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
        int Mayor(){
            if(num1>num2)
                max=num1;
            else
                max=num2;
            return max;
        }
        int Menor(){
            if(num1<num2)
                min= num1;
            else
                min= num2;
            return min;
        }
        bool SeDividen(){
            if((num1%num2==0) || (num2%num1==0))
                se_dividen= true;
            else
                se_dividen= false;
            return se_dividen;
        }
        void DividendoyDivisor(){
            if(se_dividen==true){
                dividendo=max;
                divisor=min;
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
        void Intercambiar(){
            int aux;
            aux= num1;
            num1= num2;
            num2= aux;
        }
        int MaximoComunDivisor(){
            int mcd;
            for(int i=1;i<min+1; i++)
                if(max%i==0 && min%i==0)
                    mcd=i;
            return mcd;
        }

};

int main()
{
    ParejaEnteros Menu;
    int num1, num2;
    char opcion;

    cout << "Introduce los dos numeros enteros con los que operar: ";
    cin >> num1 >> num2;

    Menu.SetNum1(num1);
    Menu.SetNum2(num2);
    // Con un do-while controlamos los datos de entrada(las opciones).
    do{
        cout << "Elija operacion a realizar: " << endl;
        cout << "\t- Mostrar entero 1. (1)" << endl;
        cout << "\t- Mostrar entero 2. (2)" << endl;
        cout << "\t- Intercabiar enteros. (I)" << endl;
        cout << "\t- Numero mayor. (M)" << endl;
        cout << "\t- Numero menor. (m)" << endl;
        cout << "\t- Comprobar si se dividen. (C)" << endl;
        cout << "\t- Mostrar Dividendo. (D)" << endl;
        cout << "\t- Mostrar Divisor. (d)" << endl;
        cout << "\t- Mostrar Maximo Comun Divisor. (E)" << endl;
        cout << "\t- Salir. (X)" << endl;
        cin >> opcion;
        // Mediante un switch se realiza la opcion elegida.
        switch(opcion){
            case '1':   cout << Menu.GetNum1() << endl;
                        break;
            case '2':   cout << Menu.GetNum2() << endl;
                        break;
            case 'i':
            case 'I':   Menu.Intercambiar();
                        break;
            case 'M':   cout << Menu.Mayor() << endl;
                        break;
            case 'm':   cout <<  Menu.Menor() << endl;
                        break;
            case 'C':
            case 'c':   if(Menu.SeDividen()){
                            cout << "Los numeros se dividen." << endl;
                            Menu.DividendoyDivisor();
                        }
                        else
                            cout << "Los numeros no se dividen. " << endl;
                        break;
            case 'D':   cout << Menu.GetDividendo() << endl;
                        break;
            case 'd':   cout << Menu.GetDivisor() << endl;
                        break;
            case 'e':
            case 'E':   Menu.Mayor();
                        Menu.Menor();
                        cout << Menu.MaximoComunDivisor() << endl;
                        break;
            case 'X':
            case 'x':   cout << "Finalizado." << endl;
                        break;
            default:    cout << "Opcion erronea, vuelva a introducir opcion." << endl;
        }
    }while(opcion!='X' && opcion != 'x');
}
