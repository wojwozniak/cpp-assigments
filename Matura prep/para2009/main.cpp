#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();

bool zadanko(string a, string b)
{
    string bp=b;
    if(a==b)
    {
        return false;
    }
    if(a.find(b)!=4294967295)
    {
        return false;
    }
    while(b.size()>0) // z tylu
    {
        b.erase(b.size()-1, 1);
        if(a.find(b)==a.size()-1)
        {
            cout << "3" << endl;
            return false;
        }
    }
    while(bp.size()>1)
    {
        if(a.find(bp)==0)
        {
            cout << "4 "<< endl;
            return false;
        }
        bp.erase(0, 1);
    }
    return true;
}


int main()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("zad_5.txt", ios::app);
    fout << "c ";
    string a, b;
    int ile=0;
    while(read >> a >> b)
    {
        if(zadanko(a,b)==true)
        {
            cout << a << " " <<  b << endl;
            ile++;
        }
    }
    cout << ile;
   //a="1011111"; b="000";
   //cout << zadanko(a, b);

}

void zadanie1()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("zad_5.txt");
    fout << "a " << endl;
    string a, ap;
    int ile=0;
    while(read >> a)
    {
        ap=a;
        reverse(ap.begin(), ap.end());
        if(ap==a)
        {
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("zad_5.txt", ios::app);
    fout << "b ";
    string a,b;
    int ile=0;
    while(read >> a >> b)
    {
        if(a.find(b)!=4294967295)
        {
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie3()
{

}

void zadanie4()
{

}
