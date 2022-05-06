#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

void zadanie4_1();
void zadanie4_2();
void zadanie4_3();

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

string wagaliczby(string a)
{
    int pom=0;
    for(int i=0; i<a.size(); i++)
    {
        pom+=int(a[i]-'0');
    }
    return to_string(pom);
}

int main()
{
    zadanie4_1();
    zadanie4_2();
    zadanie4_3();
}

void zadanie4_1()
{
    ifstream read;
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wyniki4_1.txt");
    int a;
    while(read >> a)
    {
        if(a>=100&&a<=5000)
        {
            if(czypierwsza(a)==true)
            {
                fout << a << endl;
            }
        }
    }
}

void zadanie4_2()
{
    ifstream read;
    read.open("pierwsze.txt");
    ofstream fout;
    fout.open("wyniki4_2.txt");
    string a, b;
    int c;
    while(read >> a)
    {
        b="";
        for(int i=0; i<a.size(); i++)
        {
            b+=a[a.size()-i-1];
        }
        c=strtol(b.c_str(), NULL, 10);
        if(czypierwsza(c)==true)
        {
            fout << a << endl;
        }
    }
}

void zadanie4_3()
{
    ifstream read;
    read.open("pierwsze.txt");
    ofstream fout;
    fout.open("wyniki4_3.txt");
    string a;
    int ile=0;
    while(read >> a)
    {
        while(a.size()!=1)
        {
            a=wagaliczby(a);
        }
        if(a=="1")
        {
            ile++;
        }
    }
    fout << ile << endl;
}
