#include <iostream>

using namespace std;

void MayoresPares(int m, int n){
    if(m==0)
        cout << " (NINGUNO) " << endl;
    else if(n%2==0){
        cout << n << " ";
        MayoresPares(m-1, n-2);
    }
    else{
        MayoresPares(m, n-1);
    }
}

int main()
{
    MayoresPares(4,3);
}
