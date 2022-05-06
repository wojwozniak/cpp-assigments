#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream read;
    read.open("dane.txt");
    ofstream fout;
    fout.open("zadanie4.txt");
    string a,b;
    while(read >> a)
    {
        b=a;
        reverse(a.begin(), a.end());
        if(a==b)
        {
            fout << a << endl;
        }
    }
}
