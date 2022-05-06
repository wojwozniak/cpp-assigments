#include <iostream>

using namespace std;

int ile, i, x[1000], suma;

int main()
{
    cin >> ile;
    for(i=0; i<ile; i++)
    {
        cin >> x[i];
    }
    for(i=0; i<ile; i++)
    {
        suma+=x[i];
    }
    cout << suma;

    return 0;
}
