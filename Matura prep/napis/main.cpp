#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();

vector <string> takiesame;
vector <string> juzjest;

bool czypierwsza(int x)
{
    if(x<2)
    {
        return false;
    }
    if(x>=2)
    {
        for(int i=2; i*i<x; i++)
        {
            if(x%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
bool czyjuz(string x)
{
    for(int i=0; i<takiesame.size(); i++)
    {
        if(x==takiesame[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
zadanie1();
zadanie2();
zadanie3();

}

void zadanie1()
{
    ifstream read;
    read.open("NAPIS.TXT");
    ofstream fout;
    fout.open("ZADANIE5.TXT");
    fout << "Podpunkt a" << endl;
    string a;
    int pom=0, suma=0, ilepierw=0;
    while(read >> a)
    {
        for(int i=0; i<a.size(); i++)
        {
            pom=a[i];
            suma+=pom;
        }
        if(czypierwsza(suma)==1)
        {
            ilepierw++;
        }
        suma=0;
    }
    fout << ilepierw << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("NAPIS.TXT");
    ofstream fout;
    fout.open("ZADANIE5.TXT", ios::app);
    int pom1=0, pom2=0;
    fout << "Podpunkt b" << endl;
    string a;
    while(read >> a)
    {
        int x=0;
        for(int i=1; i<a.size(); i++)
        {
            pom1=a[i-1];
            pom2=a[i];
            if(a[i]<=a[i-1])
            {
                break;
            }
            x++;
        }
        if(x==(a.size()-1))
        {
            fout << a << endl;
        }
    }

}

void zadanie3()
{
    ifstream read;
    read.open("NAPIS.TXT");
    ofstream fout;
    fout.open("ZADANIE5.TXT", ios::app);
    string napis[1000];
    fout << "Podpunkt c" << endl;
    for(int i=0; i<1000; i++)
    {
        read >> napis[i];
    }
    for(int x=0; x<1000; x++)
    {
        for(int i=0; i<1000; i++)
        {
            if(napis[x]==napis[i]&&x!=i&&czyjuz(napis[x])==0)
            {
                takiesame.push_back(napis[x]);
                fout << napis[x] << endl;
            }
        }
    }
}

