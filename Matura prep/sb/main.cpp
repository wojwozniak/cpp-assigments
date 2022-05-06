#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();


int main()
{
zadanie1();
zadanie2();
zadanie3();
}

void zadanie1()
{
    ifstream read;
    read.open("slowa.txt");
    ofstream fout;
    fout.open("wyniki6.txt");
    fout << "Zadanie 6.1" << endl;
    string a;
    int ileslow=0;
    while(read >> a)
    {
        if((a[a.size()-1])=='A')
        {
            ileslow++;
        }
    }
    fout << ileslow << endl;
}
void zadanie2()
{
    ifstream read;
    read.open("slowa.txt");
    ofstream fout;
    fout.open("wyniki6.txt", ios::app);
    fout << "Zadanie 6.2" << endl;
    string a, b;
    int ilezaw=0;
    while(read >> a >> b)
    {
        if(b.find(a)!=string::npos)
        {
            ilezaw++;
        }
    }
    fout << ilezaw << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("slowa.txt");
    ofstream fout;
    fout.open("wyniki6.txt", ios::app);
    fout << "Zadanie 6.3" << endl;
    string a, b, apom, bpom;
    while(read >> a >> b)
    {
        apom=a; bpom=b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a==b)
        {
            fout << apom << " " << bpom << endl;
        }
    }
}
