#include <iostream>
#include <vector>

using namespace std;

vector <int> czynniki;

bool czypierwsza(int spr)
{
    if(spr<2)
    {
        return false;
    }
    for(int i=2; i*i<=spr; i++)
    {
        if(spr%i==0)
        {
            return false;
        }
    }
    return true;
}

int sumacyfr(int a)
{
    int suma=0;
    while(a>0)
    {
        suma+=a%10;
        a/=10;
    }
    return suma;
}

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
int czyn(int x)
{
    int k=2;

    while(x>1)
    {
        while(x%k==0)
        {
            czynniki.push_back(k);
            cout << k;
            x/=k;
        }
        k++;
    }
}



int main()
{
    czyn(128);
    for(int i=0; i<czynniki.size(); i++)
    {
        cout << czynniki[i] << endl;
    }

}
