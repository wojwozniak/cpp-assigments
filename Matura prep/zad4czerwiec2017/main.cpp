#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();

bool czypierwsza(int a)
{
    if(a==1||a==2)
    {
        return true;
    }
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

bool zad2(string x, string y)
{
    string a=x;
    string b=y;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=1; i<a.size(); i++)
    {
        if(a[i]==a[i-1])
        {
            a.erase(i, 1);
            i--;
        }
    }
    for(int i=1; i<b.size(); i++)
    {
        if(b[i]==b[i-1])
        {
            b.erase(i, 1);
            i--;
        }
    }
    if(a==b)
    {
        return true;
    }
    else return false;
}


int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
}

void zadanie1()
{
    ifstream read;
    read.open("punkty.txt");
    ofstream fout;
    fout.open("wyniki4.txt");
    fout << "4.1: " << endl;
    int x, y;
    int ile=0;
    while(read >> x, read >> y)
    {
        if(czypierwsza(x)==true&&czypierwsza(y)==true)
        {
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("punkty.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << "4.2: " << endl;
    string x, y;
    int ile=0;
    while(read >> x, read >> y)
    {
        if(zad2(x, y)==true)
        {
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("punkty.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << "4.3: " << endl;
    int x[1000], y[1000];
    int pom1, pom2, pom;
    int maks=INT_MIN;
    int odpx1, odpx2, odpy1, odpy2;
    for(int i=0; i<1000; i++)
    {
        read >> x[i], read >> y[i];
    }
    for(int i=0; i<1000; i++)
    {
        for(int k=0; k<1000; k++)
        {
            pom1=pow(x[i]-x[k], 2);
            pom2=pow(y[i]-y[k], 2);
            pom=sqrt(pom1+pom2);
            if(pom>maks)
            {
                maks=pom;
                odpx1=x[i];
                odpy1=y[i];
                odpx2=x[k];
                odpy2=y[k];
            }
        }
    }
    fout << maks << endl;
    fout << "Punkt 1: " << odpx1 << " " << odpy1 << endl;
    fout << "Punkt 2: " << odpx2 << " " << odpy2 << endl;
}

void zadanie4()
{
    ifstream read;
    read.open("punkty.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << "4.4: " << endl;
    int ile1=0, ile2=0, ile3=0;
    int x, y;
    while(read >> x, read >> y)
    {
        if(x<5000&&y<5000)
        {
            ile1++;
        }
        else if(x>5000||y>5000)
        {
            ile3++;
        }
        else
            ile2++;
    }
    fout << ile1 << " " << ile2 << " " << ile3 << endl;
}
