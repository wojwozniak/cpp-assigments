#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadanie1();
void zadanie2();

vector <int> numerywierszy;

int main()
{
    ifstream read1, read2;
    read1.open("przyklad1.txt");
    read2.open("przyklad2.txt");
    ofstream fout;
    fout.open("wynik4_3.txt");
    int a[11];
    int b[11];
    int spr[11];
    int ile=0, numerwiersza=1, test=1;
    for(int i=1; i<=5; i++)
    {
      //  cout << test << endl;
        for(int i=1; i<=10; i++)
        {
            read1 >> a[i];
            read2 >> b[i];
        }
        for(int i=1; i<=10; i++)
        {
            test=0;
            for(int x=1; x<=10; x++)
            {
                spr[i]=0;
                if(b[i]==a[x])
                {
                    spr[i]++;
                }
            }
            for(int i=1; i<=10; i++)
            {
                if(spr[i]!=0)
                {
                    test++;
                    cout << spr[i] << endl;
              //      cout << test << " ";
                }
            }
            cout << " " << endl;
            if(test==10)
            {
                ile++;
               // cout << numerwiersza;
                numerywierszy.push_back(numerwiersza);
            }
        }
        numerwiersza++;
    }
    cout << ile;
}

void zadanie1()
{
    ifstream read1, read2;
    read1.open("dane1.txt");
    read2.open("dane2.txt");
    ofstream fout;
    fout.open("wynik4_1.txt");
    int a, b;
    int ile=0;
    for(int i=1; i<=1000; i++)
    {
        for(int i=1; i<=10; i++)
        {
            read1>> a;
        }
        //cout << a << " ";
        for(int i=1; i<=10; i++)
        {
            read2>> b;
        }
        //cout << b << endl;
        if(a==b)
        {
            ile++;
        }
    }
    fout << ile;
}

void zadanie2()
{
    ifstream read1, read2;
    read1.open("dane1.txt");
    read2.open("dane2.txt");
    ofstream fout;
    fout.open("wynik4_2.txt");
    int a, b;
    int ile=0;
    for(int i=1; i<=1000; i++)
    {
        int parzystea=0, parzysteb=0;
        for(int i=1; i<=10; i++)
        {
            read1 >> a;
            if(a%2==0)
            {
                parzystea++;
            }
            read2 >> b;
            if(b%2==0)
            {
                parzysteb++;
            }
        }
        if(parzystea==parzysteb&&parzystea==5)
        {
           // cout << "tak" << endl;
           ile++;
        }
    }
    fout << ile;
}

