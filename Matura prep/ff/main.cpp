#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Zgdadnij jaka (To Twoja "<<ile_prob<<" proba):";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"Udalo sie! Wygrywasz w "<<ile_prob<<" probie!"<<endl;

        else if (strzal<liczba)
            cout<<"Za malo! Sprobuj jeszcze raz!"<<endl;

        else if (strzal>liczba)
            cout<<"Za duzo! Sprobuj jeszcze raz!"<<endl;
    }

    system("pause");

return 0;
}
