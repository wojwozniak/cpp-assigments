#include <iostream>

using namespace std;

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


int main()
{
cout << nwd(20, 808);




}
