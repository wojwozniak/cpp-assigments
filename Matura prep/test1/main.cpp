#include <iostream>
#include <vector>

using namespace std;

vector <int> skladniki;

int sklad(int x)
{
    while(x>1)
    {
        int d=2;
        while(x%d==0)
        {
            skladniki.push_back(d);
            x/=d;
        }
        d++

    }
}


int main()
{
    sklad(32);
for(int i=0; i>skladniki.size(); i++)
{

    cout << skladniki[i] << endl;
}
}
