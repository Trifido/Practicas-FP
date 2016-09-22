#include <iostream>

using namespace std;

int main()
{
    int num;
    int pos_ini, pos=0, longi=0, long_maxi=0, cont=0, ant;

    do{
        cin >> num;
        if(num>-1 && num<101){
            if(cont==0){
                ant= num;
            }
            if(num>=ant){
                longi++;
                ant= num;
            }
            else{
                longi= 1;
                pos= cont;
            }
            if(longi>long_maxi){
                long_maxi= longi;
                pos_ini= pos+1;
            }
            cont++;
        }
    }while(num>-1 && num<101);

    cout << "POSICION= " << pos_ini << endl;
    cout << "LONGITUD= " << long_maxi << endl;
}
