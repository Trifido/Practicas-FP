#include <iostream>

using namespace std;

class Palabras{
    private:
        string frase;
        int n_busca;
        string encontrado;
    public:
        string Frase(){
            return frase;
        }

        void LeerFrase(string pal){
            frase=pal;
        }

        void IntroducirBusquedad(int n){
            n_busca= n;
        }

        void Busquedad(){
            int aux=0;
            for(int i=0; i<frase.size(); i++){
                if(frase[i]=='#')
                    for(i=i+1; i<frase.size() && frase[i]!='#' && aux<=n_busca; i++){
                        if(frase[i]==' ' && frase[i+1]!=' ')
                            aux++;
                        if(aux==n_busca)
                            if(frase[i]!=' ')
                                encontrado+=frase[i];
                    }
            }
        }

        string Encontrado(){
            return encontrado;
        }
};

int main()
{
    Palabras A;
    string frase;
    int n_busca;

    cout << "Escribe la frase: ";
    getline(cin,frase);
    A.LeerFrase(frase);

    cout << "Busca la palabra: ";
    cin >> n_busca;
    A.IntroducirBusquedad(n_busca);
    A.Busquedad();

    cout << A.Encontrado() << endl;
}
