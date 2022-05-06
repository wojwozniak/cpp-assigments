#include <iostream>
#include <cmath>

using namespace std;

zmiana(string a, int s)
{
    int k=0, pom, suma=0;
    for(int i=a.size()-1; i>=0; i--)
    {
    pom=char(a[i])-'0';
    suma+=(pom*pow(s,k));
    k++;
    }
    return suma;
}

int main()
{
    string a;
    int s;
    // a = liczba do zmiany, s = system
    cout << zmiana(a="41317333", s=8);
}
