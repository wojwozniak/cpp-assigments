#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();

vector <int> rosnace;

bool czyrosnaca(string a)
{
    int pom=0;
    for(int i=1; i<a.size(); i++)
    {
        if(a[i]<a[i-1])
        {
            return false;
        }
    }
    pom=strtol(a.c_str(), NULL, 10);
    rosnace.push_back(pom);
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
    read.open("dane.txt");
    ofstream fout;
    fout.open("wyniki6.txt");
    fout << "Podpunkt a" << endl;
    string a;
    int ile=0;
    while(read >> a)
    {
        if(a[0]==a[a.size()-1])
        {
            //cout << a << endl;
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("wyniki6.txt", ios::app);
    fout << "Podpunkt b" << endl;
    string a;
    int pom, ile=0, dziesiec;
    while(read >> a)
    {
        dziesiec=strtol(a.c_str(), NULL, 8);
        a=to_string(dziesiec);
        pom=a.size();
        if(a[0]==a[pom-1])
        {
          //  cout << a << endl;
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("wyniki6.txt", ios::app);
    fout << "Podpunkt c " << endl;
    string a;
    int ile=0;
    int najwiekszy=INT_MIN, najmniejszy=INT_MAX;
    while(read >> a)
    {
        if(czyrosnaca(a)==true)
        {
            ile++;
        }
    }
    fout << ile << endl;
    for(int i=0; i<rosnace.size(); i++)
    {
        if(rosnace[i]>najwiekszy)
        {
            najwiekszy=rosnace[i];
        }
        if(rosnace[i]<najmniejszy)
        {
            najmniejszy=rosnace[i];
        }
    }
    fout << najwiekszy << endl << najmniejszy << endl;
}




