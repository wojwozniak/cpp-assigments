#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool czypierwsza(int spr)
{
    if(spr<2)
    {
        return false;
    }
    for(int i=2; i<=sqrt(spr); i++)
    {
        if(spr%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
 ifstream read;
 read.open("LICZBY.TXT");
 ofstream fout;
 fout.open("zad_5.txt");
 int liczba[500];
 float pierwiastek[500];
 int zaokraglona[500];
  for(int i=0; i<500; i++)
  {
     read >> liczba[i];
     pierwiastek[i]=sqrt(liczba[i]);
     zaokraglona[i]=sqrt(liczba[i]);
     if((pierwiastek[i]==zaokraglona[i])&&(czypierwsza(zaokraglona[i])==1))
     {
        cout << liczba[i] << endl;
        fout << liczba[i] << endl;
     }
  }
} // bool czypierwsza nie jest potrzebny przy podanych liczbach, problem by³by w przypadku np. 81 (3x3x3x3)
