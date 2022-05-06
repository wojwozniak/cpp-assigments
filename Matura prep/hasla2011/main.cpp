#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();

bool jest(string a)
{
    for(int i=1; i<a.size(); i++)
        {
            if(int(a[i])+int(a[i-1])==220)
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
   read.open("hasla.txt");
   ofstream fout;
   fout.open("wynik4a.txt");
   string a;
   int parzyste=0, nieparzyste=0;
   while(read >> a)
   {
       if(a.size()%2==0)
       {
           parzyste++;
       }
       else nieparzyste++;
   }
   fout << parzyste << endl << nieparzyste << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("hasla.txt");
    ofstream fout;
    fout.open("wynik4b.txt");
    string a, b;
    while(read >> a)
    {
        b=a;
        reverse(a.begin(), a.end());
        if(a==b)
        {
            fout << a << endl;
        }
    }

}

void zadanie3()
{
    ifstream read;
    read.open("hasla.txt");
    ofstream fout;
    fout.open("wynik4c.txt");
    string a;
    while(read >> a)
    {
        if(jest(a)==true)
        {
            fout << a << endl;
        }
    }
}
