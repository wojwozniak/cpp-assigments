#include <iostream>

using namespace std;

int main()
{
    int n, x[100000], y[100000];
    for(int i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<n; i++)
    {
        if((x[i]%='0')&&((y[i]%)!='0'))
        {
            cout << x[i];
        }
    }
    return 0;
}
