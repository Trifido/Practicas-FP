/* Simulacro de examen: Caracteres. */
#include <iostream>
#include <vector>

using namespace std;

class Frecuencias{
    private:
        vector <char> frase;
        vector <char> letras;
        vector <int> contador;

    public:

        // Constructor que inicializa el vector contador a ceros
        // y el vector letras con letras mayusculas ordenadas.
        Frecuencias(){
            letras={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
            contador={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        }

        // Metodo para introducir letras en el vector desde el main.
        void IntroducirLetras(char letra){
            frase.push_back(letra);
        }

        // Metodo que busca letras minusculas y las pasa a mayusculas.
        void ConvertirAMayusculas(){
            int mayus= 'A'-'a';

            for(unsigned i=0; i<frase.size(); i++)
                if(frase[i]<'A' || frase[i]>'Z')
                    frase[i]+=mayus;
        }

        // Metodo que cuenta cada letra y las anota en el vector contador.
        void ContarLetras(){
            int cont=0;

            for(unsigned i=0; i<letras.size(); i++){
                for(unsigned j=0; j<frase.size(); j++)
                    if(letras[i]==frase[j])
                        cont++;
                contador[i]=cont;
                cont=0;
            }
        }

        // Metodo que devuelve true si existe un numero distinto
        // de 0 en las posicion del vector contador.
        bool ComprobarLetras(int pos){
            bool result=false;

            if(contador[pos]!=0)
                result=true;
            return result;
        }

        // Metodo que devuelve char de la posicion indicada.
        char DevolverLetras(int pos){
            return letras[pos];
        }

        // Metodo que devuelve las veces repetidas de la posicion indicada.
        int DevolverFrecuencias(int pos){
                return contador[pos];
        }

        // Metodo para sacar el tamanio del vector letras y el vector contador.
        int TamanioLetrasCont(){
            return letras.size();
        }
};

int main()
{
    Frecuencias frase;
    char letra;

    cout << "Introduce la frase: " << endl;
    do{
        cin >> letra;

        if((letra>='a' && letra<='z')||(letra>='A' && letra<='Z'))
            frase.IntroducirLetras(letra);
    }while(letra!='.');

    // Paso todas las letras a mayusculas y cuento sus repeticiones.
    frase.ConvertirAMayusculas();
    frase.ContarLetras();

    // Recorre las posiciones y saca por pantalla la letra y su frecuencia
    // si la salida del metodo ComprobarLetras es true.
    for(int i=0; i<frase.TamanioLetrasCont(); i++)
        if(frase.ComprobarLetras(i))
            cout << frase.DevolverLetras(i) << ": " << frase.DevolverFrecuencias(i) << " ";

}
