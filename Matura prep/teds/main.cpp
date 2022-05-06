#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

float oceny[50];
float sumaocen, srednia;
int i, n;

int main()
{
    cout << "Podaj ilosc ocen z ktorych chcesz obliczyc srednia: ";
    cin >> n;
    // n = ilosc ocen

    for(i=1; i<=n; i++)
    {
          cout << "Podaj " << i << ". ocene: ";
          cin >> oceny[i];
    }
    for(i=1; i<=n; i++)
    {
        sumaocen = (oceny[i] += oceny[i-1]);
        srednia = sumaocen / n;
    }
     system("cls");
     cout << "Twoja srednia wynosi "<< srednia <<"!";
     getchar(), getchar();

    return 0;
}
