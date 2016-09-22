/* Clase polinomio de grado 2 */

#include <iostream>
#include <cmath>
using namespace std;

class Polinomio
{
    double a;
    double b;
    double c;
public:
    Polinomio  ()
        :a(1), b(1), c(1)
    {
    }
    Polinomio(double coa,double cob,double coc)
    {
        a=coa;
        b=cob;
        c=coc;
    }
    void Set_coa(double coa)
    {
        a=coa;
    }
    void Set_cob(double cob)
    {
        b=cob;
    }
    void Set_coc(double coc)
    {
        c=coc;
    }
    double Get_coa()
    {
        return a;
    }
    double Get_cob()
    {
        return b;
    }
    double Get_coc()
    {
        return c;
    }
    /**
    @brief Encuentra las raices reales de un polinomio
           de segundo grado "a x^2 + b x + c". Devuelve
           tambien el numero de raices reales
           encontradas (0, 1 o 2)
    @param nraices (referencia) el numero de raices
           reales encontradas
    @param x1 (referencia) la primera raiz encontrada
    @param x2 (referencia) la segunda raiz encontrada
    */

    void Encontrar_Raices_Pol(int &nraices,double &x1,double &x2)
    {
        double rad;
        if (a!=0)
        {
            rad=pow(b,2)-4.0*a*c;
            if (rad >= 0)
            {
                x1=(-b+sqrt(rad))/(2*a);
                x2=(-b-sqrt(rad))/(2*a);
                nraices=2;
            }
            else
                nraices=0;
        }
        else
        {
            nraices=1;
            x1= -c/b;
        }
    }
    /**
    @brief Evalua el polinomio en un punto dado por teclado
           devuelve el valor calculado
    **/

    double Evaluar_Pol(double x)
    {
        double v;
        v = a*pow(x,2)+b*x+c;
        return v;
    }
    /**
    @brief Obtiene la derivada del polinomio entrado como argumento
      Devuelve los 2 coeficientes de la ecuacion de 1er grado
      resultado en 0x^2+ 2ax+ b
    **/
    void Obtener_Dvada_Pol(Polinomio &dvada)
    {
        dvada.Set_coa(0);
        dvada.Set_cob(2*a);
        dvada.Set_coc(b);
    }
    // Metodo de Grado
    int Grado(){
        int grado;
        if(a!=0)
            grado=2;
        else if(b!=0)
            grado=1;
        else
            grado=0;
        return grado;
    }
};

/**
@brief Ofrece un menú con las opciones del programa
       y pide al usuario que elija una de las
       opciones.

No permite que el usuario escoja una opción inválida.
Sólo seis valores son permitidos:
- '1'  Lectura de los coeficientes del
       polinomio de segundo grado.
- '2'  Encontrar las raices del polinomio.
- '3'  Evaluación del polinomio en un punto
       determinado.
- '4'  Obtener la derivada del polinomio.
- '5'  Evaluar la derivada en un punto determinado.
- '6'  Salir del programa.
devuelve la opción elegida por el usuario.
*/
char Menu()
{
    char opcion;
    cout << "*********************************************\n";
    cout << "*    Menú Principal \n";
    cout << "*                \n";
    cout << "*********************************************\n";

    cout << "\t 1. Lectura de los coeficientes del "
         << "polinomio de segundo grado\n";
    cout << "\t 2. Encontrar las raices del "
         <<"polinomio\n";
    cout << "\t 3. Evaluación del polinomio en un "
         << "punto determinado\n";
    cout << "\t 4. Obtener la derivada del "
         << "polinomio\n";
    cout << "\t 5. Evaluar la derivada en un punto "
         << "determinado\n";
    cout << "\t 6. Salir del programa\n";
    cout << "\t 7. Mostrar el grado del polinomio\n";
    do
    {
        cout << "\n\t\tElige una opcion: ";
        cin >> opcion;
    }
    while (opcion<'1' || opcion>'7');
    return opcion;
}


/**
@brief Pide al usuario que introduzca los
       coeficientes a, b, y c de un polinomio
       de segundo grado: "a x^2 + b x + c"
*/
void Leer_Coeficientes_Pol(Polinomio &p)
{
    double a,b,c;
    cout << "Introduce el coeficiente \"a\": ";
    cin >> a;
    p.Set_coa(a);
    cout << "Introduce el coeficiente \"b\": ";
    cin >> b;
    p.Set_cob(b);
    cout << "Introduce el coeficiente \"c\": ";
    cin >> c;
    p.Set_coc(c);
}

/**
@brief Imprime en la salida estandar un polinomio
       de segundogrado "a x^2 + b x + c"
*/
void Imprimir_Pol(Polinomio p)
{
    cout<< p.Get_coa() << " x^2 + "<< p.Get_cob() << " x + "<< p.Get_coc()<<endl;
}

int main()
{
    const string MENSJ= " Aun no se ha introducido ningun polinomio";

    char opcion; // Opcion seleccionada en el menu
    bool haypol=false; // Hemos leido coeficientes?
    bool terminar=false; // Debemos terminar?
    Polinomio p_uno, p_dvada;
    double x;     // un punto
    double x1,x2; // Raices del polinomio
    int nraices; // Numero de raices del polinomio

    do
    {
        opcion=Menu(); // Se elige una opcion del menu.
        switch (opcion)
        {
        case '1':
            Leer_Coeficientes_Pol(p_uno);
            haypol=true;
            cout<< "El polinomio leido es: ";
            Imprimir_Pol(p_uno);
            cout<<endl;
            break;
        case '2':
            if(haypol)
            {
                p_uno.Encontrar_Raices_Pol(nraices,x1, x2);
                cout<< "El polinomio ";
                Imprimir_Pol(p_uno);
                if(nraices==1)
                {
                    cout<<" tiene como raiz doble a "<<
                        x1 << endl;
                }
                else if(nraices==2)
                {
                    cout<<" tiene como raices a "<< x1
                        << " y " << x2 << endl;
                }
                else
                {
                    cout<<" no tiene raices reales"
                        << endl;
                }
            }
            else
                cerr << MENSJ<< endl;
            break;
        case '3':
            if(haypol)
            {
                cout << "Introduce el punto a evaluar :";
                cin >> x;
                x1= p_uno.Evaluar_Pol(x) ;
                cout << "El valor de la parábola en el punto es :" << x1 << endl;
            }
            else
                cerr << MENSJ<< endl;
            break;
        case '4':
            if(haypol)
            {
                p_uno.Obtener_Dvada_Pol(p_dvada);
                Imprimir_Pol(p_uno);
                cout<<" tiene como derivada  ";//<< x1 << "x +" << x2 << endl;
                Imprimir_Pol(p_dvada);
            }
            else
                cerr << MENSJ<< endl;
            break;
        case '5':
            if(haypol)
            {
                p_uno.Obtener_Dvada_Pol(p_dvada);
                cout << "Introduce el punto a evaluar :";
                cin >> x;
                x1 = p_dvada.Evaluar_Pol(x);
                cout << "El valor de la recta en el punto es :" << x1 << endl;
            }
            else
                cerr << MENSJ<< endl;
            break;
        case '6':
            terminar=true;
            break;
        case '7':
            if(haypol)  // Si existe polinomio.
                cout << "El polinomio tiene grado: " << p_uno.Grado() << endl;  // Metodo Grado()
            else
                cerr << MENSJ<< endl;
            break;
        } //del switch

    }
    while (!terminar);
}
