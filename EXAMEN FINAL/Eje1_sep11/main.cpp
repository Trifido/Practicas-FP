#include <iostream>

using namespace std;

int Recursiva(int n, int k){
    int num=0;
    if(k>0){
        num= n%10;
        n= n/10;
        return num + Recursiva(n, k-1);
    }
    else
        return num;
}

int main()
{
    cout << Recursiva(23,4) << endl;
}
