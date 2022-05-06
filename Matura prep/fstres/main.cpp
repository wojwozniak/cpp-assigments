#include <iostream>
#include <fstream>
#include <cstdlib>

int nr_tel;


using namespace std;

int main()
{
   string imie, nazwisko;
   fstream plik;
   plik.open("wizytowka.txt", ios::in);

   if(plik.good()==false)
   {
       cout << "Plik nie istnieje!";
       exit(0);
   }

   string linia;
   int nr_linii=1;
   while(getline(plik, linia))
   {
       switch(nr_linii)
       {
           case 1: imie = linia; break;
           case 2: nazwisko = linia; break;
           case 3: nr_tel = atoi(linia.c_str()); break;
       }


       nr_linii++;
   }

   cout<<imie<<endl;
   cout<<nazwisko<<endl;
   cout<<nr_tel<<endl;

   plik.close();

    return 0;
}
