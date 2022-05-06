#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();

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


vector <int> skladniki;

int main()
{
zadanie1();
zadanie2();
zadanie3();
}

void zadanie1()
{
    ifstream read;
    read.open("pary.txt");
    ofstream fout;
    fout.open("wyniki4.txt");
    fout << endl << "4.1:" << endl << endl;
    int a, b, c;
    string t;
    for(int i=2; i<=100; i++)
    {
        if(czypierwsza(i)==1)
        {
            skladniki.push_back(i);
        }
    }
    while(read >> a, read >> t)
    {
        if(a%2==0)
        {
            for(int i=0; i<skladniki.size()-1; i++)
            {
                for(int y=skladniki.size()-1; y>=0; y--)
                {
                    if(skladniki[i]+skladniki[y]==a)
                    {
                        b=skladniki[i], c=skladniki[y];
                    }
                }
            }
            fout << a << " " << b << " " << c << endl;
        }
    }

}

void zadanie2()
{
    ifstream read;
    read.open("pary.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << endl << "4.2:" << endl << endl;
    int a;
    string t;
    int pocz, maksdl, dl, podp;
    while(read >> a, read >> t)
    {
        dl=1, maksdl=0; pocz=0, podp=0;
        for(int i=1; i<t.size(); i++)
        {
            if(t[pocz]==t[i])
            {
                dl++;
                if(dl>maksdl)
                {
                    podp=pocz;
                    maksdl=dl;
                }
            }
            else
            {
                pocz=i;
                dl=0;
            }
        }
        maksdl++;
        for(int i=0; i<maksdl; i++)
        {
            fout << t[i+podp];
        }
        fout << " " << maksdl << endl;
    }
}

void zadanie3()
{
    ifstream read;
    read.open("pary.txt");
    ofstream fout;
    fout.open("wyniki4.txt", ios::app);
    fout << endl << "4.3:" << endl << endl;
    int a[100], amin=INT_MAX;
    string t[100]; int tl[100];
    int tlmin=INT_MAX;
    for(int i=0; i<100; i++)
    {
        tl[i]=97;
        read >> a[i], read >> t[i];
        if(a[i]==t[i].size())
        {
            if(a[i]<amin)
            {
                amin=a[i];
            }
        }
    }
    for(int i=0; i<100; i++)
    {
        if(a[i]==amin)
        {
            for(int y=0; y<t[i].size(); y++)
            {
                if(int(t[i][y])>tl[i])
                {
                    //cout << t[i][y] << " " << int(t[i][y]) << endl;
                    tl[i]=int(t[i][y]);
                }
            }
      //  cout << a[i] << " " << t[i] << " " << tl[i] << endl;
        }
    }
    for(int i=0; i<100; i++)
    {
        if(a[i]==amin&&t[i].size()==a[i])
        {
            if(tl[i]<tlmin)
            {
           //     cout << tl[i] << endl;
                tlmin=tl[i];
            }
        }
    }
    for(int i=0; i<100; i++)
    {
        if(a[i]==amin&&tlmin==tl[i])
        {
            fout << a[i] << " " << t[i] << endl;
        }
    }
}
