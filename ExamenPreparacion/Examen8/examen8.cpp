#include <iostream>

using namespace std;

int main()
{
    int num, sum=0, term=0, result=1;

    cout << "Introducir secuencia de numeros: ";

    do
    {
        cin >> num;

        if(num==1)
        {
            sum++;
            term=0;
        }
        else if(num==0)
        {
            if(sum>0)
                result*=sum;
            term++;
            sum=0;
        }
    }
    while(term<5);
    cout << "El numero cabalistico es: " << result << endl;
}
