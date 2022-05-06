#include <iostream>

using namespace std;

int ile;

int main()
{

   cin >> ile;

   int *x;
   x=new int[ile];

   for (int i=0; i<ile; i++)
    {
        cin >> x[i];
    }
    for (int i=0; i<ile; i++)
    {
        cout << x[i]*x[i] << endl;
    }

    return 0;
}
