#include <iostream>
#include <cmath>
using namespace std;

class ProgresionGeometrica{
    private:
        double constante, tope, termino;
    public:
        // Constructor.
        ProgresionGeometrica()
            :constante(1), tope(2), termino(1){}
        double GetConstante(){
            return constante;
        }
        double GetTope(){
            return tope;
        }
        double GetTermino(){
            return termino;
        }
        void SetConstante(double const1){
            constante= const1;
        }
        void SetTope(double tope_maximo){
            tope= tope_maximo;
        }
        void SetTermino(double primer_termino){
            termino= primer_termino;
        }
        // Metodo que suma mientras la operacion sea menor o igual que 1.
        double SumaHastaInfinito(){
            double result2;
            double term2=termino;
            result2=termino;
            do{
                term2+=term2/(1-constante);
                result2= result2 + term2;
            }while(result2<=1);
            return result2;
        }
        // Metodo que realiza la sumatoria.
        double SumaHasta(){
            double result;
            double term1= termino;
            result= term1*constante;
            for(int i=2; i<tope; i++){
                term1+= (result*(pow(constante,tope) - 1))/(constante-1);
                result= result + term1;
            }
            return result;
        }
        // Metodo que realiza la multiplicacion.
        double MultiplicaHasta(){
            double producto;
            double term2= termino;
            producto= term2*constante;
            for(int i=2; i<tope; i++){
                term2= sqrt(pow(termino*tope,tope));
                producto= producto * term2;
            }
            return producto;
        }
};
int main()
{
    ProgresionGeometrica A;
    double termino, constante, tope;

    cout << "Introduce el primer termino: ";
    cin >> termino;
    cout << "Introduce una constante r: ";
    cin >> constante;
    cout << "Introduce el tope de la sumatoria: ";
    cin >> tope;

    A.SetTope(tope);
    A.SetConstante(constante);
    A.SetTermino(termino);

    cout << "Sumatoria hasta infinito: " << A.SumaHastaInfinito() << endl;
    cout << "Sumatoria: " << A.SumaHasta() << endl;
    cout << "Multiplicacion: " << A.MultiplicaHasta() << endl;

}
