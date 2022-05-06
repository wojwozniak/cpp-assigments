#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();

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
    read.open("napisy.txt");
    ofstream fout;
    fout.open("zadanie4.txt");
    fout << "Zadanie 4" << endl << "Podpunkt a" << endl;
    int parzyste=0;
    string napis;
    while (read >> napis)
    {
        if(napis.size()%2==0)
        {
            parzyste++;
        }
    }
    //cout << parzyste;
    fout << parzyste << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("napisy.txt");
    ofstream fout;
    fout.open("zadanie4.txt", ios::app);
    fout << "Podpunkt b" << endl;
    string napis;
    int ilenapisow=0;
    while(read >> napis)
    {
        int liczbazer=0, liczbajedynek=0;
        for(int i=0; i<napis.size(); i++)
        {
            if(napis[i]=='0')
            {
                liczbazer++;
            }
            if(napis[i]=='1')
            {
                liczbajedynek++;
            }

        }
        if(liczbajedynek==liczbazer)
        {
            ilenapisow++;
        }


    }
//cout << ilenapisow;
    fout << ilenapisow << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("napisy.txt");
    ofstream fout;
    fout.open("zadanie4.txt", ios::app);
    fout << "Podpunkt c" << endl;
    string napis;
    int liczbazer=0, liczbajedynek=0, ilezer=0, ilejedynek=0;
    while(read >> napis)
    {
        for(int i=0; i<napis.size(); i++)
        {
            if(napis[i]=='0')
            {
                liczbazer++;
            }
            if(napis[i]=='1')
            {
                liczbajedynek++;
            }
        }
        if((liczbajedynek>0)&&(liczbazer==0))
        {
            ilejedynek++;
        }
        if((liczbazer>0)&&(liczbajedynek==0))
        {
            ilezer++;
        }
        liczbajedynek=0;
        liczbazer=0;
    }
//cout << ilejedynek << endl << ilezer << endl;
    fout << ilejedynek << endl << ilezer << endl;
}

void zadanie4()
{
    ifstream read;
    read.open("napisy.txt");
    ofstream fout;
    fout.open("zadanie4.txt", ios::app);
    fout << "Podpunkt d" << endl;
    string napis;
    int dlugosc[17];
    for(int i=0; i<=16; i++)
    {
        dlugosc[i]=0;
    }
    while(read >> napis)
    {
        for(int k=2; k<=16; k++)
        {
            if(napis.size()==k)
            {
                dlugosc[k]++;
                break;
            }
        }
    }
    for(int k=2; k<=16; k++)
    {
        fout << dlugosc[k] << endl;
    }

}
