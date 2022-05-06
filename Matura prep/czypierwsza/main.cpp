#include <iostream>

using namespace std;

bool czypierwsza(int x)
{
    if(x<2)
    {
        return false;
    }
    for(int i=2; i*i<=x; i++)
    {
        if(i%x==0)
        {
            return false;
        }
    }
    return true;
}
