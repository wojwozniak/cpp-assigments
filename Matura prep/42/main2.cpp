#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
    cout << "Podaj 1. liczbe: ";
    cin >> x;
    cout << "Podaj 2. liczbe: ";
    cin >> y;
    system("cls");

    cout << "KALKULATOR" << endl;
    cout << "===================================" << endl;
    cout << "Podales liczby " << x <<" i " << y <<"." << endl;
    cout << "Jakie dzialanie chcesz wykonac?" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Wylacz program" << endl;
    cout << "==================================" << endl << endl;

    cout << "Wybierz: ";
    wybor=getchar(); wybor=getchar();
    system("cls");

    switch(wybor)
    {
      case '1':
          {
              cout "Suma tych liczb wynosi " << x+y;

          }
      case '2':
          {
              cout "Roznica tych liczb wynosi " << x-y;
              break;
          }
      case '3':
          {
              cout "Iloczyn tych liczb wynosi " << x*y;
              break;
          }

      case '4':
          {
              if(y==0)
              {
                  cout "Nie dzielimy przez 0!";
                  break;
              }
              else
              {
                  cout "Iloraz tych liczb wynosi " << x/y;
                  break;
              }
          }
    }

return 0;
}
