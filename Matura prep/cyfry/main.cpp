#include <iostream>
#include <fstream>

using namespace std;

void zadanie1();
void zadanie2();
void zadanie3();

int sumacyfr(int cyfra)
{
   int suma=0;
   while(cyfra>0)
   {
       suma+= cyfra % 10;
       cyfra/= 10;
   }
   return suma;
}
bool czyrosnacy(string cyfra)
{
    for(int i=1; i<cyfra.size(); i++)
    {
        if(cyfra[i]<=cyfra[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{

}

void zadanie1()
{
    ifstream read;
    read.open("cyfry.txt");
    ofstream fout;
    fout.open("zadanie4.txt");
    int cyfry;
    int parzyste = 0;
    while(read >> cyfry)
    {
        if(cyfry % 2 == 0)
        {
            parzyste++;
        }
    }
    cout << parzyste;
}

void zadanie2()
{
    ifstream read;
    read.open("cyfry.txt");
    ofstream fout;
    fout.open("zadanie4.txt",ios::app);
    int cyfry;
    // cout << sumacyfr(144) << endl ;
    int najwiekszacyfra=INT_MIN, najmniejszacyfra=INT_MAX;
    int najwiekszasuma=INT_MIN, najmniejszasuma=INT_MAX;
    while(read >> cyfry)
    {
        int sc = sumacyfr(cyfry);
        if(sc>najwiekszasuma)
        {
           najwiekszasuma = sc;
           najwiekszacyfra = cyfry;
        }
        if(sc<najmniejszasuma)
        {
            najmniejszasuma = sc;
            najmniejszacyfra = cyfry;
        }
    }
   cout << najwiekszacyfra << endl << najmniejszacyfra << endl;
}

void zadanie3()
{
    ifstream read;
    read.open("cyfry.txt");
    ofstream fout;
    fout.open("zadanie4.txt",ios::app);
    string cyfry;
   while(read >> cyfry)
   if(czyrosnacy(cyfry)==true)
    {
        cout << cyfry << endl;
    }

}
