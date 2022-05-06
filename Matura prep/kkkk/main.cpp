#include <iostream>

using namespace std;

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

int main()
{
   cout << sumacyfr(1419);


}
