#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{

  cout << "Witaj w programie liczacym srednia!" << endl;

  for(;;)
  {
    int ilosc_ocen, wybor, oceny, suma_wag=0, kontynuacja=1;
    double srednia=0, suma=0;

    cout << "Z ilu ocen ma zostac policzona srednia?: ";
    cin >> ilosc_ocen;
    system("cls");
    cout << "Ilosc ocen: " << ilosc_ocen << endl;
    cout << "Czy srednia ma byc: " << endl;
    cout << "Wazona - wcisnij 1." << endl;
    cout << "Arymetryczna - wcisnij 2." << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;
    system("cls");



    switch(wybor)
    {
      case 1:
        {
          double ocena[ilosc_ocen], waga[ilosc_ocen];

          for(oceny=1; oceny<=ilosc_ocen; oceny ++)
            {
              cout << "Podaj " << oceny << " ocene: ";
              cin >> ocena[oceny];
              cout << "Podaj wage tej oceny: ";
              cin >> waga[oceny];

              suma += ocena[oceny]*waga[oceny];
              suma_wag += waga[oceny];
             }
           srednia=suma/suma_wag;
           break;
        }
      case 2:
        {
            double ocena[ilosc_ocen];

            for(oceny=1; oceny<=ilosc_ocen; oceny++)
              {
                cout << "Podaj " << oceny << " ocene: ";
                cin >> ocena [oceny];

                suma += ocena[oceny];
              }
           srednia=suma/ilosc_ocen;
           break;
         }
      default:
        {
            cout << "Nie ma takiego wyboru, sprobuj jeszcze raz!";
            getchar(), getchar();
            system("cls");
            break;
        }
    }

    if(srednia!=0)
    {
        cout << endl << "Twoja srednia wynosi: " << fixed << setprecision(2) << srednia << endl << endl;
        cout << "Czy chcesz obliczyc srednia jeszcze raz?: " << endl;
        cout << "Tak - wcisnij 1." << endl;
        cout << "Nie - wcisnij dowolny inny przycisk" << endl;
        cout << "Twoj wybor: " << endl;
        cin >> kontynuacja;
        system("cls");
    }


    if(kontynuacja!=1)
    {
        break;
    }

  }
    return 0;
}
