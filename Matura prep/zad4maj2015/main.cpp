#include <iostream>
#include <fstream>
#include <algorithm>

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
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wynik4.txt");
    fout << "4.1" << endl;
    string a;
    int ilejed, ilezer;
    int ile=0;
    while(read >> a)
    {
        ilejed=0, ilezer=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='0')
            {
                ilezer++;
            }
            else
            {
                ilejed++;
            }
        }
       // cout << ilezer << " " << ilejed << endl;
        if(ilezer>ilejed)
        {
            ile++;
        }
    }
    fout << ile << endl;

}

void zadanie2()
{
    ifstream read;
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wynik4.txt", ios::app);
    fout << "4.2" << endl;
    string a;
    int przez2=0, przez8=0;
    while(read >> a)
    {
        if(a[a.size()-1]=='0')
        {
            przez2++;
        }
        if(a[a.size()-1]=='0' && a[a.size()-2]=='0' && a[a.size()-3]=='0')
        {
            przez8++;
        }
    }
    fout << przez2 << " " << przez8 << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wynik4.txt", ios::app);
    fout << "4.3" << endl;
    string a;
    long b;
    long maks=INT_MIN, mini=INT_MAX;
    int odpA=0, odpB=0;
    int numerwiersza=1;
    while(read >> a)
    {
        b=strtol(a.c_str(), NULL, 2);
        if(b>maks)
        {
            maks=b;
            odpA=numerwiersza;
        }
        if(b<mini)
        {
            mini=b;
            odpB=numerwiersza;
        }
        numerwiersza++;
    }
    fout << odpA << " " << odpB << endl;
}
