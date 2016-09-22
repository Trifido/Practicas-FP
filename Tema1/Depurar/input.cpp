#include <iostream>
using namespace std;

// Programa que muestra el funcionamiento de la entrada
// y salida de datos mediante el uso de cin y cout
int main() {
    // Se usaran varias variables para introducir
    // datos y gurdarlos sobre ellas
    int v;
    double r;
    char c, c2;

    // Se indica al usuario que debe introducir un numero entero
    // Comprobar que ocurre si se teclea algo distinto a un numero
    // entero
    cout << "Introduce un valor entero: ";

    // El valor tecleado, si todo esta OK, se almacena en v
    cin >> v;

    // Ahora se introducira un valor real (ya que el tipo de r
    // es real)
    cout << "Y ahora un valor real: ";

    // El valor tecleado se almacena en r
    cin >> r;

    // Finalmante se pide al usuario que introduzca un caracter
    cout << "Y finalmente un caracter: ";

    // El caracter se almacena en c
    cin >> c2;

    // Ahora se muestra lo que se almaceno en las variables
    cout << "El primer numero era (guardado en v es): " << v << endl;
    cout << "El segundo numero era (guardado en r es): " << r << endl;
    cout << "El caracter era (guardado en c es): " << c << endl;
}




