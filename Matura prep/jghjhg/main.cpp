#include <iostream>

using namespace std;

int main()
{
    int liczba=144;
    int *w;
    w = &liczba;
    cout << *w;
    return 0;
}
