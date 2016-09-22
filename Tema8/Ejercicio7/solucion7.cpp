#include <iostream>
using namespace std;

class Conjunto_3_Valores_vs1{
    public:
        double uno, dos, tres;
        double Max(){           //Metodo publico para obtener el maximo.
            double max;
            if(uno>dos)
                max=uno;
            else
                max=dos;
            if(tres>max)
                max=tres;
            return max;
        }
        double Media_Aritmetica(){  // Metodo publico para obtener la media.
            return (uno + dos + tres)/3;
        }
};
class Conjunto_3_Valores_vs2{
    private:
        double uno, dos, tres;
    public:
        double Max(){
            double max;
            if(uno>dos)
                max=uno;
            else
                max=dos;
            if(tres>max)
                max=tres;
            return max;
        }
        double Media_Aritmetica(){
            return (uno + dos + tres)/3;
        }
        Conjunto_3_Valores_vs2 (double dato1, double dato2, double dato3)   //Constructor
            :uno(dato1), dos(dato2), tres(dato3){
        }
        double GetPrimero(){    //Metodos Get para obtener las varaibles privadas
            return uno;
        }
        double GetSegundo(){
            return dos;
        }
        double GetTercero(){
            return tres;
        }
};
class Conjunto_3_Valores_vs3{
    private:
        double uno, dos, tres;
    public:
        double Max(){
            double max;
            if(uno>dos)
                max=uno;
            else
                max=dos;
            if(tres>max)
                max=tres;
            return max;
        }
        double Media_Aritmetica(){
            return (uno + dos + tres)/3;
        }
        Conjunto_3_Valores_vs3 ()
            :uno(2), dos(5), tres(7){
        }
        double GetPrimero(){
            return uno;
        }
        double GetSegundo(){
            return dos;
        }
        double GetTercero(){
            return tres;
        }
        void SetValores(double dato1, double dato2, double dato3){
            uno= dato1;
            dos= dato2;
            tres= dato3;
        }
};
class Conjunto_3_Valores_vs4{
    private:
        double uno, dos, tres;
    public:
        double Max(){
            double max;
            if(uno>dos)
                max=uno;
            else
                max=dos;
            if(tres>max)
                max=tres;
            return max;
        }
        double Media_Aritmetica(){
            return (uno + dos + tres)/3;
        }
        double GetPrimero(){
            return uno;
        }
        double GetSegundo(){
            return dos;
        }
        double GetTercero(){
            return tres;
        }
        void SetValores(double dato1, double dato2, double dato3){
            uno= dato1;
            dos= dato2;
            tres= dato3;
        }
};
class Conjunto_3_Valores_vs5{
    private:
        double uno, dos, tres;
    public:
        double Max(){
            double max;
            if(uno>dos)
                max=uno;
            else
                max=dos;
            if(tres>max)
                max=tres;
            return max;
        }
        double Media_Aritmetica(){
            return (uno + dos + tres)/3;
        }
        double GetPrimero(){
            return uno;
        }
        double GetSegundo(){
            return dos;
        }
        double GetTercero(){
            return tres;
        }
        void SetPrimero(double dato1){  // Metodo Set para modificar las variables privadas.
            uno= dato1;
        }
        void SetSegundo(double dato2){
            dos= dato2;
        }
        void SetTercero(double dato3){
            tres= dato3;
        }
};
int main()
{
    Conjunto_3_Valores_vs1 C1;
    Conjunto_3_Valores_vs2 C2(1,2,3);
    Conjunto_3_Valores_vs3 C3;
    Conjunto_3_Valores_vs4 C4;
    Conjunto_3_Valores_vs5 C5;

    // ------------- Salidas de Clase vs1 ------------------
    cout << " ------------- Salidas de Clase vs1 ------------------" << endl;
    C1.uno= 11;
    C1.dos= 12;
    C1.tres= 13;
    cout << "C1.uno= " << C1.uno << endl;

    // ------------- Salidas de Clase vs2 ------------------
    cout << " ------------- Salidas de Clase vs2 ------------------" << endl;
    cout << "Primero: " << C2.GetPrimero() << endl;
    cout << "Segundo: " << C2.GetSegundo() << endl;
    cout << "Tercero: " << C2.GetTercero() << endl;
    cout << "El Maximo: " << C2.Max() << endl;
    cout << "Media Aritmetica: " << C2.Media_Aritmetica() << endl;

    // ------------- Salidas de Clase vs3 ------------------
    cout << " ------------- Salidas de Clase vs3 ------------------" << endl;
    C3.SetValores(3,9,1);
    cout << "Primero: " << C3.GetPrimero() << endl;
    cout << "Segundo: " << C3.GetSegundo() << endl;
    cout << "Tercero: " << C3.GetTercero() << endl;
    cout << "El Maximo: " << C3.Max() << endl;
    cout << "Media Aritmetica: " << C3.Media_Aritmetica() << endl;

    // ------------- Salidas de Clase vs4 ------------------
    cout << " ------------- Salidas de Clase vs4 ------------------" << endl;
    C4.SetValores(3,9,1);
    cout << "Primero: " << C4.GetPrimero() << endl;
    cout << "Segundo: " << C4.GetSegundo() << endl;
    cout << "Tercero: " << C4.GetTercero() << endl;
    cout << "El Maximo: " << C4.Max() << endl;
    cout << "Media Aritmetica: " << C4.Media_Aritmetica() << endl;

    // ------------- Salidas de Clase vs5 ------------------
    cout << " ------------- Salidas de Clase vs5 ------------------" << endl;
    C5.SetPrimero(3);
    C5.SetSegundo(9);
    C5.SetTercero(1);
    cout << "Primero: " << C5.GetPrimero() << endl;
    cout << "Segundo: " << C5.GetSegundo() << endl;
    cout << "Tercero: " << C5.GetTercero() << endl;
    cout << "El Maximo: " << C5.Max() << endl;
    cout << "Media Aritmetica: " << C5.Media_Aritmetica() << endl;
}
