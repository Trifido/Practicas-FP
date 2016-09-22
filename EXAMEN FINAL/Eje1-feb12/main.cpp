#include <iostream>

using namespace std;

bool Palindromo(int izd, int dec, string frase){
    if(izd<dec){
        if(frase[izd]==frase[dec] || frase[izd]==toupper(frase[dec]) || toupper(frase[izd])==frase[dec]){
            return Palindromo(izd+1,dec-1,frase);
        }
        else if(frase[izd]==' ')
            return Palindromo(izd+1,dec, frase);
        else if(frase[dec]==' ')
            return Palindromo(izd, dec+1, frase);
        else
            return false;
    }
    else{
        return true;
    }
}

int main()
{
    string frase= "aBba";
    cout << Palindromo(0,frase.size()-1,frase) << endl;
}
