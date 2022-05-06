#include <iostream>
#include <cstdlib>
using namespace std;

int x;

int main()
{
    cout << "Wybierz liczbe od jeden do cztery!" << endl;
    cin >> x;
    switch(x)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    cout << "Chuju bobrze";
    break;
    default: cout <<"Ty chuju bobrze";
    }
    exit(0);

    return 0;
}
