#include <iostream>

using namespace std;

int main()
{
    int a[20], b[20], c=1, ile;
    cin >> ile;
    for(int i=0; i<ile; i++)
    {
        cin >> a[i] >> b[i];
    }


   for(int i=0; i<ile; i++)
    {
       if((a[i]%b[i]!=0)&&(b[i]%a[i]!=0))
       {
           c++;
       }
       else
       {
           cout << c << endl;
       }
    }
    return 0;
}
