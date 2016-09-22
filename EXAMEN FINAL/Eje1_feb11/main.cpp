#include <iostream>

using namespace std;

double f(double num){
    return (2*num*num + num + 2);
}

double Biseccion(double i, double d){
    double const e= 0.0001;
    double diff= d-i;
    double m=(i+d)/2;

    if(diff>e && f(m)!=0){
        if(f(m)*f(i)<0)
            return Biseccion(i,m);
        else if(f(m)*f(d)<0)
            return Biseccion(m,d);
        }
    return m;
}

int main()
{
    cout << "La raiz es: " << Biseccion(-3, 90) << endl;
}
