#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int jd;

int main()
{
    srand(time(NULL));
    for(int i=1; i<=50000; i++)
    {
      jd=rand()%10000000+1;
      cout<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<jd<<endl;
    }

    return 0;
}
