#include <iostream>
#include <fstream>
#include <vector>

void zadanie1();
void zadanie2();
void zadanie3();

using namespace std;

vector <int> dlugoscjeden;
vector <string> dwucykle;
vector <string> niepoprawne;

bool jeden(string napis, int dlugosc)
{
    for(int i=0; i<dlugosc; i++)
    {
        if(napis[i]!=napis[(i+dlugosc)])
        {
            return false;
        }
    }
    dlugoscjeden.push_back(dlugosc);
    dwucykle.push_back(napis);
    return true;
}

bool czypoprawna(string napis)
{
     int pom;
     pom = napis.size();
     for(int i=0; i<pom; i+=4)
     {
         if(napis[i]=='1'&&(napis[i+1]=='1'||napis[i+2]=='1'))
         {
             niepoprawne.push_back(napis);
             return false;
         }
     }
     return true;
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
    read.open("binarne.txt");
    ofstream fout;
    fout.open("zadanie4.txt");
    fout << "Podpunkt a" << endl;
    string napis[500];
    int pom[500];
    int ile=0;
    int najwieksza=INT_MIN;
    string najdluzszy="";
    for(int i=0; i<500; i++)
    {
        read >> napis[i];
        pom[i]=(napis[i].size()/2);
    }
    for(int i=0; i<500; i++)
    {
        if(jeden(napis[i], pom[i])==true)
        {
            ile++;
        }
    }
    fout << "Ilosc slow dwucyklicznych " << ile << endl;

    for(int i=0; i<dlugoscjeden.size(); i++)
    {
        if(dlugoscjeden[i]>najwieksza)
        {
            najwieksza=dlugoscjeden[i];
        }
    }
    fout << "Najwieksza dlugosc slowa dwucyklicznego to " << najwieksza*2 << endl;
    for(int i=0; i<dwucykle.size(); i++)
    {
        if(dwucykle.size()>najdluzszy.size())
        {
            najdluzszy=dwucykle[i];
        }
    }
    fout << "Najdluzsze slowo dwucykliczne to " << najdluzszy << endl;

}


void zadanie2()
{
    ifstream read;
    read.open("binarne.txt");
    ofstream fout;
    fout.open("zadanie4.txt", ios::app);
    fout << "Podpunkt b " << endl;
    string a;
    int ile=0;
    while(read >> a)
    {
        if(czypoprawna(a)==false)
        {
            ile++;
        }

    }
    fout << "Tyle niepoprawnych slow " << ile << endl;
    string najmniejsza="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    for(int i=0; i<niepoprawne.size(); i++)
    {
        //cout << niepoprawne[i] << endl;
        if(niepoprawne[i].size()<najmniejsza.size())
        {
            najmniejsza=niepoprawne[i];
        }
    }
    fout << "Taki najkrotszy " << najmniejsza.size() << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("binarne.txt");
    ofstream fout;
    fout.open("zadanie4.txt", ios::app);
    fout << "Podpunkt c" << endl;
    string a[500], b[500];
    int pom[500], najwiekszy=INT_MIN;
    for(int i=0; i<500; i++)
    {
        read >> a[i];
        b[i]=a[i];
        pom[i]=strtol(a[i].c_str(), NULL, 2);
        if(pom[i]<=65535)
        {
            if(pom[i]>najwiekszy)
            {
                najwiekszy=pom[i];
            }
        }
    }
    fout << najwiekszy << endl;
    for(int i=0; i<500; i++)
    {
        if(pom[i]==najwiekszy)
        {
            fout << b[i] << endl;
        }
    }
}
