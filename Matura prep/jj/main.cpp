#include <iostream>

using namespace std;

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

void skladniki(int a)
{
    int k=2;
    while(a>1)
    {
        while(a%k==0)
        {
            cout << k << endl;
            a/=k;
        }
        ++k;
    }

int sumacyfr(int a)
{
    while(a>0)
    {

    }
}


}




int main()
{
skladniki(65);



}
