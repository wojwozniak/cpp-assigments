#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

float liczba1, liczba2;
long double wynik;
int wybor, kontynouwac;

int main()
{
  cout << "Witaj w kalkulatorze!" << endl;

  for(;;)
    {

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    system("cls");

    cout << "KALKULATOR" << endl;
    cout << "==========================================" << endl << endl;
    cout << "Podane przez ciebie liczby to " << liczba1 << " i " << liczba2 << endl << endl;
    cout << "Jakie dzialanie chcesz wykonac?" << endl << endl;
    cout << "Dodawanie - wcisnij 1" << endl << endl;
    cout << "Odejmowanie - wcisnij 2" << endl << endl;
    cout << "Mnozenie - wcisnij 3" << endl << endl;
    cout << "Dzielenie - wcisnij 4" << endl << endl;
    cout << "==========================================" << endl;
    cin >> wybor;

      switch(wybor)
        {
       case 1:
          {
               wynik = liczba1 + liczba2; break;
          }
       case 2:
           {
               wynik = liczba1 - liczba2; break;
           }
       case 3:
           {
               wynik = liczba1 * liczba2; break;
           }
       case 4:
           {
               if(liczba2!=0)
                {
                   wynik = liczba1 / liczba2; break;
                }
               else
                {
                    system("cls");
                    cout << "\a";
                    cout << "Nie dziel przez 0!" << endl;
                    Sleep(2000);
                    wynik = 0;
                    break;
                }
           }
       default:
          {
              cout << "Nie ma takiej operacji!"; break;
          }
       }

   system("cls");
   cout << setprecision(100000);
   cout << "Twoj wynik to: " << wynik << endl << endl;
   cout << "Czy chcesz przeprowadzic kolejne obliczenie?" << endl;
   cout << "Tak - wcisnij 1. " << endl;
   cout << "Nie - wcisnij 2. " << endl;

   cin >> kontynouwac;
  if(kontynouwac!=2)
     {
       system("cls");
     }
     else
      {
        system("cls");
        break;
      }
    }

   cout << "Dziekuje za skorzystanie z mojej aplikacji!";
   Sleep(3000);
   system("cls");
   exit(0);
return 0;
}
