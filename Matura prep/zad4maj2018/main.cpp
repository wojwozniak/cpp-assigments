#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();

vector <char> lit;

int main()
{
    zadanie1();
    zadanie2();
    zadanie3();
}

void zadanie1()
{
    ifstream read;
    read.open("sygnaly.txt");
    ofstream fout;
    fout.open("wyniki4.txt");
    fout << "4.1." << endl;
    string a;
    string output="";
    int i=1;
    while(read >> a)
    {
        if(i%40==0)
        {
            output+=a[9];
        }
        i++;
    }
    fout << output << endl;

}

void zadanie2()
{
    ifstream read;
    read.open("sygnaly.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << "4.2." << endl;
    string a;
    int c=0;
    int maks=0;
    string wynik;
    while(read >> a)
    {
        lit.clear();
        for(int i=0; i<a.size(); i++)
        {
            c=0;
            for(int y=0; y<lit.size(); y++)
            {
                if(a[i]==lit[y])
                {
                    c++;
                }
            }
            if(c==0)
            {
                lit.push_back(a[i]);
            }
        }
        if(lit.size()>maks)
        {
            maks=lit.size();
            wynik=a;
        }
    }
    fout << wynik << " " << maks << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("sygnaly.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << "4.3." << endl;
    string a;
    int maks, mini;
    while(read >> a)
    {
        maks=INT_MIN, mini=INT_MAX;
        for(int i=0; i<a.size(); i++)
        {
            if(int(a[i])>maks)
            {
                maks=int(a[i]);
            }
            if(int(a[i])<mini)
            {
                mini=int(a[i]);
            }
        }
        if(maks-mini<=10)
        {
            fout << a << endl;
        }
    }
}
