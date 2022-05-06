#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int liczba, x, a;

int main()
{
   srand(time(NULL));
    for(x=0; x>=0; x++)
    {
    Sleep(1000);
    liczba = rand()%100+a;
    cout << liczba << endl;
    a++;
    }
return 0;
}
