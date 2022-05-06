#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

void zadanie2();
void zadanie3();
bool czypierwsza(int spr)
{
    if(spr<2)
    {
        return false;
    }
    for(int i=2; i*i<=spr; i++)
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
zadanie2();
zadanie3();
}



void zadanie2()
{
    ifstream read;
    read.open("dane4.txt");
    ofstream fout;
    fout.open("wyniki_6.txt");
    fout << "Zadanie 6.2" << endl;
    int liczba=0;
    int najwiekszaliczba=INT_MIN, najmniejszaliczba=INT_MAX;
    while(read>>liczba)
    {
        if((liczba>najwiekszaliczba)&&(czypierwsza(liczba)==1))
        {
            najwiekszaliczba=liczba;
        }
        if((liczba<najmniejszaliczba)&&(czypierwsza(liczba)==1))
        {
            najmniejszaliczba=liczba;
        }

    }
        cout << najwiekszaliczba << endl << najmniejszaliczba << endl;
        fout << najwiekszaliczba << endl << najmniejszaliczba << endl;
}

void zadanie3()
{
ifstream read;
read.open("dane4.txt");
ofstream fout;
fout.open("wyniki_6.txt", ios::app);
fout << "Zadanie 6.3" << endl;
int liczba=0;
int ilepar=0;
vector <int> licz;
//licz.push_back(6);
while(read>>liczba)
{
    licz.push_back(liczba);
}
for(int i=1; i<licz.size(); i++)
{
   if(abs(licz[i]-licz[i-1])==2)
   {
       cout << licz[i-1] << endl << licz[i] << endl;
       ilepar++;
       fout << licz[i-1] << endl << licz[i] << endl;
   }
}
cout << ilepar << endl;
fout << ilepar << endl;

}
