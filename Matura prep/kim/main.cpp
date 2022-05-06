#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i <<endl;
    }
    system("cls");
    cout<< "JEBUT";
    return 0;
}
