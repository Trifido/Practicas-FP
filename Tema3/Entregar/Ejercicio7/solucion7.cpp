#include <iostream>
using namespace std;

int main()
{
    int const tarifa_base= 150;                                             //Declaro las variables, tarifa base es una constante.
    double distancia, precio_final, precio_inicio;
    char letra;

    cout << "Introduce la distancia de viaje: ";                            // Se le dá un valor a la varible distancia
    cin >> distancia;

    precio_final= tarifa_base;                                              // y le damos al precio final el valor de la constante.
    if(distancia>=200){                                                     // Si distancia es mayor de 200 se calcula el precio por medio
        precio_final+= (distancia - 200)*0.10;                              // de las dos politicas de descuento.
        precio_inicio= precio_final;                                        // precio_incio guarda el valor de precio_final para usarlo en la politica 2,
                                                                            // ya que el valor de precio_final será modificado en la politica 1.
        cout << "Política de descuento 1: " << endl;
        cout << "¿Es el comprador cliente previo de la empresa?(S/N): ";
        cin >> letra;

        if(distancia>1100)                                                  // Si la distancia es mayor de 1100 hacemos el descuento b.
            precio_final-= precio_final*0.04;                               // sino si descuento es mayor que 600 hacemos el descuento a.
        else if(distancia>600)
                precio_final-= precio_final*0.03;
        if(letra=='s')                                                      // Si la letra introducida es la 's' de confirmacion,
            precio_final-= precio_final*0.05;                               // se hace el descuento c.
        cout << "Precio final mediante política 1 es: " << precio_final << endl;

        precio_final=precio_inicio;                                         // La politica 2 cambia. Si se introduce la 's', se realiza el descuento c.
        if(letra=='s')
            precio_final-= precio_final*0.05;
        else{
            if(distancia>1100)
                precio_final-= precio_final*0.04;
            else if(distancia>600)
                    precio_final-= precio_final*0.03;
        }
        cout << "Precio final mediante política 2 es: " << precio_final << endl;
    }
    else                                                                   // Sino, el destino esta a menos de 200, y el precio final es el precio base.
        cout << "El precio final es: " << precio_final << endl;
}
