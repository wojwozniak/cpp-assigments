#include <iostream>
#include <fstream>
#include <algorithm>

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
    fstream read;
    read.open("slowa.txt");
    ofstream fout;
    fout.open("wynik5.txt");
    fout << "5.1 " << endl;
    string a[1000];
    int ile[13];
    for(int i=0; i<1000; i++)
    {
        read >> a[i];
    }
    for(int x=1; x<=12; x++)
    {
        fout << x << endl;
        for(int i=0; i<1000; i++)
        {
            if(a[i].size()==x)
            {
                ile[x]++;
            }
        }
        fout << ile[x] << endl;
    }

}

void zadanie2()
{
    fstream read1, read2;
    read1.open("slowa.txt");
    read2.open("nowe.txt");
    ofstream fout;
    fout.open("wynik5.txt", ios::app);
    fout << "5.2 " << endl;
    string slowa[1000];
    string nowe, odw;
    for(int i=0; i<1000; i++)
    {
        read1 >> slowa[i];
    }
    while(read2 >> nowe)
    {
        int ile=0, ileodw=0;
        odw=nowe;
        reverse(odw.begin(), odw.end());
        for(int i=0; i<1000; i++)
        {
            if(slowa[i]==nowe)
            {
                ile++;
            }
            if(slowa[i]==odw)
            {
                ileodw++;
            }
        }
        fout << nowe << " " << ile << " " << ileodw << endl;

    }
}
