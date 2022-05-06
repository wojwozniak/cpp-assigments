#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while(b!=a)
    {
        if(a>b)
        {
            a-=b;
        }
        else b-=a;
    }
    return a;
}

int main()
{
   cout << nwd(256, 113);
}
