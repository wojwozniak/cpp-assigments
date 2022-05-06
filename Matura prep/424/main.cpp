#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int f;

int main()
{
    cout << "Aby rozpoczac odliczanie wcisnij 1" << endl;
    cin >> f;
    system("cls");
    if(f==1)
    {
          for(int i=15; i>0; i--)
      {

          cout << "Zostalo " << i << " sekund!";
          Sleep(1000);
          system("cls");
      }
    }
      else
      {
          exit(0);
      }
      cout << "JEBUT!!!!";
    return 0;
}
