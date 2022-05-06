#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();

int sumawszystkich=0;

int sumacyfr(int a)
{
    int suma=0;
    while(a>0)
    {
        suma+=a%10;
        sumawszystkich+=a%10;
        a/=10;
    }
    return suma;
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
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wyniki5.txt");
    fout << "5.1 " << endl;
    int a, najwieksza=INT_MIN;
    while(read >> a)
    {
        if(a>najwieksza&&(a%2==0))
        {
            najwieksza = a;
        }
    }
    fout << najwieksza << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wyniki5.txt", ios::app);
    fout << "5.2 " << endl;
    string a, ap;
    while(read >> a)
    {
        ap=a;
        reverse(a.begin(), a.end());
        if(ap==a)
        {
            fout << a << endl;
        }

    }
}

void zadanie3()
{
    ifstream read;
    read.open("liczby.txt");
    ofstream fout;
    fout.open("wyniki5.txt", ios::app);
    fout << "5.3 " << endl;
    int a;
    while(read >> a)
    {
        if(sumacyfr(a)>30)
        {
            fout << a << endl;
        }
    }
    fout << "Suma wszystkich cyfr wynosi: " << sumawszystkich << endl;
}
