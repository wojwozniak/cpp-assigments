#include <iostream>

using namespace std;

int main()
{
    string jd="212148123";
    for(int i=0; i<jd.size(); i++)
    {
        for(int j=1; j<jd.size()-i; j++)
        {
            if(jd[j-1]>jd[j])
            {
                swap(jd[j-1], jd[j]);
            }
        }
    }
cout << jd;
}
