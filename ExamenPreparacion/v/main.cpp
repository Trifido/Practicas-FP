/*Vicente Martínez Rodríguez, 74743571-B , Grupo 13*/
 #include <iostream>
  using namespace std;

    int main()
    {
        int codigo, anio, alquilado, ant_cod=0, ant_anio=0, ant_alq=0, cont=0;

        cout << "Introduce codigo de pelicula, anio y veces alquilada respectivamente." << endl;
      do{
          cin >> codigo;

           if(codigo>0 && codigo<201){     // Condicion que comprueba que codigo se encuentre en intervalo.
               cin >> anio >> alquilado;

               if((anio>1969 && anio<2013) && (alquilado>0)){  // Comprueba que anio y alquilado estan en el intervalo.

                   if(ant_anio<anio && ant_alq<=alquilado){    // Guarda los datos de la pelicula si se cumple la condicion.
                       ant_cod= codigo;
                       ant_anio= anio;     // anio y alquilado pasan a ser ant_anio y ant_alq, las variables que se comparan.
                       ant_alq= alquilado;
                   }
                   cont++;
               }
               else
                   cout << "Error introduciendo datos." << endl;
           }
           else if(codigo!=-1)
               cout << "Codigo no valido." << endl;
       } while(codigo!=-1);    // Continua mientras la variable codigo es distinto de -1.

       cout << endl;
      cout << "CODIGO: " << ant_cod << endl;
      cout << "FECHA: " << ant_anio << endl;
      cout << "ALQUILADA: " << ant_alq << endl;
   }
