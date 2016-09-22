#include <iostream>
using namespace std;

int main()
{
    int num, i=6, sum=0, max=0;

    cout << "Introduce un numero > 5: ";
    cin >> num;

    while(i<num){
        sum=0;
        for(int j=1; j<i; j++){
            if(i%j==0)
                sum+=j;
        }
        if(sum==i){
            if(i>max)
                max=i;
        }
        i++;
    }
    cout << "El mayor numero perfecto es: " << max << endl;
}
