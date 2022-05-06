#include <iostream>
#include <fstream>

using namespace std;

void zadanie1();
void zadanie2();

int main()
{
   zadanie1();
   zadanie2();
}

void zadanie1()
{
    fstream read1, read2;
    read1.open("tj.txt");
    read2.open("klucze1.txt");
    ofstream fout;
    fout.open("wynik4a.txt");
    string a, pom;
    int x, y;
    while(read1 >> a, read2 >> pom)
    {
        string zaszyfrowane="";
        if(a.size()==pom.size())
        {
        }
        else if(a.size()>pom.size())
        {
            y=(a.size()-pom.size());
            for(int i=0; i<y; i++)
            {
                pom+=pom[i];
            }
        }
        for(int i=0; i<a.size(); i++)
        {
            x=int(a[i])+int(pom[i])-64;
            while(x>90)
            {
                x-=26;
            }
            zaszyfrowane+=char(x);
        }
        fout << zaszyfrowane << endl;
    }

}

void zadanie2()
{
    fstream read1, read2;
    read1.open("sz.txt");
    read2.open("klucze2.txt");
    ofstream fout;
    fout.open("wynik4b.txt", ios::app);
    string a, pom;
    int x, y;
    while(read1 >> a, read2>> pom)
    {
        string zdeszyfrowane="";
        if(a.size()==pom.size())
        {
        }
        else if(a.size()>pom.size())
        {
            y=(a.size()-pom.size());
            for(int i=0; i<y; i++)
            {
                pom+=pom[i];
            }
        }
        for(int i=0; i<a.size(); i++)
        {
            x=int(a[i])-int(pom[i]-64);
            while(x<65)
            {
                x+=26;
            }
            zdeszyfrowane+=char(x);
        }
        fout << zdeszyfrowane << endl;

    }
}
