#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A[5];
    A[0]=7;
    A[1]=2;
    A[2]=3;
    A[3]=17;
    A[4]=1;
    int n=5;
    for(int i=0; i<n-1; i++)
    {
        for(int y=0; y<n-1; y++)
        {
            if(A[y]>A[y+1])
            {
                swap(A[y], A[y+1]);
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        cout << A[i] << endl;
    }
}
