#include <iostream>
#include <iomanip>

using namespace std;

long double fib[10000];
int suma=0;

int main()
{
   fib[0]=1, fib[1]=1;
   for(int i=2; fib[i]<=4000000; i++)
   {
       fib[i]=fib[i-1]+fib[i-2];
       cout<<setprecision(10000);
       cout << fib[i] << endl;
       if(fib[i]>=4000000) break;
   }
    for (int i=0; i<=4000000; i++)
   {
       if(fib[i]%2==0) suma+=fib[i];
   }

   cout << suma;

}
