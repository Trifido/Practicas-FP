#include <iostream>

using namespace std;

int Recursivo(int num){
    if(num>1)
        return num*Recursivo(num-1);
    else
        return num;
}

int main(){
    cout << Recursivo(3) << endl;
}
