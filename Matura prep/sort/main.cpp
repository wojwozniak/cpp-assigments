#include <iostream>

using namespace std;

int main()
{
    int pom=1;
    int a[10];
    for(int i=0; i<10; i++)
    {
        a[i]=rand();
        cout << a[i] << endl;
    }

    cout << endl;

    while(pom>0)
    {
        pom=0;
        for(int i=1; i<10; i++)
        {
            if(a[i-1]>a[i])
            {
                swap(a[i-1], a[i]);
                pom++;
            }
        }
    }


    for(int i=0; i<10; i++)
    {
        cout << a[i] << endl;
    }
}

