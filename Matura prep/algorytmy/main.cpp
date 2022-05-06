#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n=64;
    int k=2;
    vector <int> czynniki;
    while(n>1)
    {
        while(n%k==0)
        {
            czynniki.push_back(k);
            n/=k;
        }
        ++k;
    }
    for(int i=0; i<czynniki.size(); i++)
    {
        cout << czynniki[i] << endl;
    }
}
