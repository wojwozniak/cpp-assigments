#include <iostream>

using namespace std;
int x;
float oceny[100]; float suma=0, srednia;

int main()
{
    cout << "Z ilu ocen srednia chcesz obliczyc?: ";
    cin >> x;
    for(int i=0; i<x; i++)
    {
        cout<<"Podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        suma += oceny[i];
    }

    srednia = suma / x;
cout<<endl<< "Srednia = " << srednia;

    return 0;
}
