#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void zadanie1();

int main()
{
    ifstream read;
    read.open("przyklad.txt");
    ofstream fout;
    fout.open("wyniki6.txt", ios::app);
    fout << "6.3 " << endl;
    string a;
    int pom, suma=0;
    while(read >> a)
    {
        for(int i=0; i<11; i++)
        {
            pom=a[i];
            cout << a[i] << endl << 2*char(a[i]) << endl;
        }
    }

}

void zadanie1()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("wyniki6.txt");
    string pesel;
    int maz=0, baba=0, pom;
    fout << "6.1 " << endl;
    while(read >> pesel)
    {
        pom=pesel[9];
        if(char(pom)%2==0)
        {
            baba++;
        }
        else maz++;
    }
    fout <<  "Mezczyzni: " << maz << endl << "Kobiety: " << baba << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("wyniki6.txt", ios::app);
    fout << "6.2 " << endl;
    string a, pom;
    int x, ile=0;
    while(read >> a)
    {
       pom=a[2];
       pom+=a[3];
       x=strtol(pom.c_str(), NULL, 10);
       if(x==11||x==31)
       {
           ile++;
       }
    }
    fout << ile << endl;

}
