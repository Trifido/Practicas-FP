#include <iostream>
#include <vector>

using namespace std;

class Examen{
    private:
        string asignatura;
        vector <string> lista_enum;
        vector <char> respuestas;
    public:
        Examen(string nombre){
            asignatura= nombre;
        }

        void NuevaPregunta(string enunciado, char resp_correcta){
            lista_enum.push_back(enunciado);
            respuestas.push_back(resp_correcta);
        }

        int NumPregunta(){
            return lista_enum.size()-1;
        }

        string GetEnunciado(int n){
            if(n<lista_enum.size()){
                return lista_enum.at(n);
            }
            else{
                return "Pregunta no encontrada.";
            }
        }

        char GetRespuesta(int n){
            if(n<respuestas.size()){
                return respuestas.at(n);
            }
        }
};

int main()
{
    Examen FP("FP");
    int n_preguntas, cont=0, n_alumnos, cont_alu=0, cont2=0, nota;
    string pregunta;
    char respuesta, resp_alu;

    cout << "Introduce el numero de preguntas: ";
    cin >> n_preguntas;

    do{
        cout << "Introduce pregunta: ";
        cin >> pregunta;
        cout << "Introduce respuesta correcta: " << endl;
        cin >> respuesta;

        FP.NuevaPregunta(pregunta, respuesta);
        cont++;
    }while(cont<n_preguntas);

    cout << "Introduce el numero de alumnos a examinarse: ";
    cin >> n_alumnos;

    do{
        nota=0;
        do{
            cout << FP.GetEnunciado(cont2) << endl;
            cin >> resp_alu;

            if(resp_alu== FP.GetRespuesta(cont2))
                nota++;
            else if(resp_alu= NULL){
                nota+=0;
            }
            else
                nota--;
            cont2++;
        }while(cont2<n_preguntas);

        cont2=0;
        if(nota<0)
            nota=0;
        cout << "Tu nota es de: " << nota << endl;
        cont_alu++;
    }while(cont_alu<n_alumnos);
}
