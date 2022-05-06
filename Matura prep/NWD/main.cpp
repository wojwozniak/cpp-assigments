#include <iostream>
#include <fstream>

using namespace std;

void zadanie1();
void zadanie2();


int nwd(int a, int b)
{
    int pom;

    while(b!=0)
    {
        pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int sumasyfr(int cyfra)
{
    int suma=0;
    while(cyfra>0)
    {
        suma+=cyfra%10;
        cyfra/=10;
    }
    return suma;
}


int main()
{

}

void zadanie1()
{
ifstream read;
read.open("pary_liczb.txt");
ofstream fout;
fout.open("zadanie5.txt");
fout << "podpunkt a" << endl;
int a,b;
int ilosc=0;
while(read >> a >> b)
{
    if((a%b==0)||(b%a==0))
    {
        ilosc++;
    }

}
cout << ilosc;
}

void zadanie2()
{
 ifstream read;
read.open("pary_liczb.txt");
ofstream fout;
fout.open("zadanie5.txt", ios::app);
int ilejeden=0;
int a, b;
while(read >> a >> b)
{
    if(nwd(a,b)==1)
    {
        ilejeden++;
    }
}
cout << ilejeden;
}
