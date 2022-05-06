#include <iostream>

using namespace std;

int ile;

int main()
{
    cin >> ile;

    int *x;
    x = new int[ile];

    for(int i=0; i<ile; i++)
    {
        cin >> x[i];
    }

    for(int i=1; i<ile; i++)
    {
        cout << x[i];
        i++;
    }
    for(int i=0; i<ile; i++)
    {
        cout << x[i];
        i++;
    }
    delete [] x;
    return 0;
}
