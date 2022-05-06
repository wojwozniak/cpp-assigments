#include <iostream>

using namespace std;

int sumacyfr(int x)
{
    int suma=0;
    while(x>0)
    {
        suma+=x%10;
        x/=10;
    }
    return suma;
}





int main()
{
cout << sumacyfr(1204);
}
