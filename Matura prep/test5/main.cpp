#include <iostream>
#include <vector>

using namespace std;


int sumacyfr(int x)
{
    int sumacyfr=0;
    while(x>0)
    {
        sumacyfr+=x%10;
        x/=10;
    }
    return sumacyfr;


}

int nwd(int a, int b)
{
    int pom=0;
    while(b!=0)
    {
        pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}


vector <int> skladniki;
int sklad(int x)
{
    int k=2;
    while(x>1)
    {
        while(x%k==0)
        {
            skladniki.push_back(k);
            cout << k;
            x/=k;

        }
        k++;
    }
}







int main()
{
cout << sklad(64);
}

