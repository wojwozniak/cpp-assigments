#include <iostream>

using namespace std;

int ile=0, m=0;

int main()
{
    cout << "Ile liczb chcesz porownac?: ";
    cin >> ile;

    int * tablica;
    tablica=new int[ile];

    cout << "Podaj " << ile << " liczby rozdzielone spacja: ";
    for (int i=0; i<ile; i++)
    {
        cin >> tablica[i];
    }

    m=tablica[0];

    for(int i=0; i<ile; i++)
    {
        if(m<tablica[i])
            tablica[i]=m;
    }

    cout << "Najwieksza liczba to " << m;

    delete []tablica;
    return 0;
}
