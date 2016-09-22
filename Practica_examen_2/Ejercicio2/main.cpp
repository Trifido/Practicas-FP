#include <iostream>

using namespace std;

class Frecuencias{
    private:
        static const int tam= 100;
        char frase[tam];
        int repeticiones[tam];
        int total_utilizados;
        int n_repe;
    public:
        Frecuencias(){
            total_utilizados=0;
            n_repe=0;
        }

        char Frase(int i){
            return frase[i];
        }

        int Repeticiones(int j){
            return repeticiones[j];
        }

        int N_repe(){
            return n_repe;
        }

        int Total_utilizados(){
            return total_utilizados;
        }

        void Introducir(char letra){
            if(total_utilizados < tam && ((letra>='a' && letra<='z')||(letra>='A' && letra<='Z'))){
                frase[total_utilizados]= letra;
                total_utilizados++;
            }
        }

        void TransformarMinusculas(){
            int mayus= 'A'-'a';
            for(int i=0; i<total_utilizados; i++)
                if(frase[i]>='a'&&frase[i]<='z')
                    frase[i]+= mayus;
        }

        void Ordenar(){
            int izqd, i;
            char a_desplazar;

            for(izqd=1; izqd<total_utilizados; izqd++){
                a_desplazar= frase[izqd];
                for(i= izqd; i>0 && a_desplazar<frase[i-1]; i--)
                    frase[i]= frase[i-1];

                frase[i]= a_desplazar;
            }
        }
        void ObtenerRepeticiones(){
            int cont=1;
            for(int i=0; i<total_utilizados; i++){
                if(frase[i]==frase[i+1])
                    cont++;
                else{
                    repeticiones[n_repe]=cont;
                    cont=1;
                    n_repe++;
                }
            }
        }

        void Elimina(int pos){
            if(pos>-1 && pos<total_utilizados){
                for(int i=pos; i< total_utilizados-1; i++)
                    frase[i]=frase[i+1];
                total_utilizados= total_utilizados-1;
            }
        }

        void EliminarRepetidos(){
            int caracter, caracter_avanzado;
            for(int i= 0; i<total_utilizados; i++){
                caracter= frase[i];
                for(int j= i+1; j<total_utilizados; j++){
                    caracter_avanzado= frase[j];
                    if(caracter==caracter_avanzado){
                        Elimina(j);
                        j--;
                    }
                }
            }
        }
};

int main()
{
    Frecuencias frase1;
    char letra;

    do{
        cin >> letra;
        if(letra!='.')
            frase1.Introducir(letra);
    }while(letra!='.');

    cout << endl;

    frase1.TransformarMinusculas();
    frase1.Ordenar();
    frase1.ObtenerRepeticiones();
    frase1.EliminarRepetidos();

    for(int j=0; j<frase1.N_repe(); j++)
        cout << frase1.Frase(j) << " " << frase1.Repeticiones(j) << " ";
}
