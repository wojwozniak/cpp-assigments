#include <iostream>
#include <cstdlib>

using namespace std;


int wybor, ilosc_ocen=0, suma_ocen;
float srednia, ocena[ilosc_ocen];

int main()
{
    for(;;)
{

    cout << "Witaj w programie liczacym srednia ocen!" << endl;
    cout << "Z ilu ocen chcesz policzyc srednia?: ";
    cin >> ilosc_ocen;

    system("cls");
    cout << "Ilosc ocen: " << ilosc_ocen << endl;
    cout << "Podaj, czy srednia ma byc: " << endl;
    cout << "Arymetryczna - wcisnij 1" << endl;
    cout << "Wazona - wcisnij 2";

    cin >> wybor;
    switch(wybor)
    {
      case 1:
          {
           for (int ocena=1; ocena<=ilosc_ocen; ocena++)
             {
               cout << "Podaj " << ocena << "ocene:";
               cin >> ocena[ilosc_ocen];
               suma_ocen += ocena[ilosc_ocen];

             }
           srednia = suma_ocen/ilosc_ocen;
          }
     // case 2: wazona();
      default: cout << "Nie ma takiej funkcji, wybierz jeszcze raz!";
    }
}
    return 0;
}
