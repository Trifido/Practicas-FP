#include <iostream>

using namespace std;

class Biblioteca{
    private:
        static const int tam=100;
        int num[tam];
        int anio[tam];
        int num_utiliados, anio_utilizados, tope;
    public:
        Biblioteca(){
            num_utiliados=0;
            anio_utilizados=0;
        }

        int NumUtilizados(){
            return num_utiliados;
        }

        void Tope(int top){
            tope= top;
        }

        void IntroduceNum(int n){
            if(num_utiliados<tope){
                num[num_utiliados]=n;
                num_utiliados++;
            }
        }

        void IntroduceAnio(int a){
            if(anio_utilizados<tope){
                anio[anio_utilizados]=a;
                anio_utilizados++;
            }
        }

        void Intercambiar(int num1, int num2){
            int aux= num[num2];
            int aux2= anio[num2];
            num[num2]=num[num1];
            anio[num2]=anio[num1];
            num[num1]=aux;
            anio[num1]=aux2;
        }

        void Ordenar(){
            int izqd, i;
            int a_desplazar, a_desplazar2;

            for(izqd=1; izqd<tope; izqd++){
                a_desplazar= anio[izqd];
                a_desplazar2= num[izqd];
                for(i= izqd; i>0 && a_desplazar<anio[i-1]; i--){
                    anio[i]= anio[i-1];
                    num[i]= num[i-1];
                }
                num[i]= a_desplazar2;
                anio[i]= a_desplazar;
            }

            for(int i=0; i<tope; i++){
                if(anio[i]==anio[i+1])
                    if(num[i]<num[i+1]){
                        Intercambiar(i,i+1);
                        //i--;
                    }
            }

        }

        int Anios(int i){
            return anio[i];
        }

        int Numeros(int i){
            return num[i];
        }
};

int main()
{
    int tope, cont=0;
    int num, anio;
    Biblioteca ugr;

    cout << "Introduce el numero de libros que desea introducir: ";
    cin >> tope;
    ugr.Tope(tope);
    cout << "Introduce el numero de libro y fecha de edicion: ";
    do{
        cin >> num >> anio;
        ugr.IntroduceNum(num);
        ugr.IntroduceAnio(anio);
        cont++;
    }while(cont<tope);

    ugr.Ordenar();
    for(int i=0; i<tope; i++)
        cout << ugr.Anios(i) << "  " << ugr.Numeros(i) << endl;
}
