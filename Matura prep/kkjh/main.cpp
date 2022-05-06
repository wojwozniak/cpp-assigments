#include <iostream>

using namespace std;

int liczba[1000];
int suma=0;

int main()
{
    for (int i=0; i<1000; i++)
    {
       liczba[i]=i;
       if(liczba[i]%3==0 || liczba[i]%5==0)
       {
           suma+=liczba[i];
       }
    }
    cout << "Suma wszystkich dzielnikow 10 mniejszych niz 1000 wynosi " << suma;
return 0;
}
