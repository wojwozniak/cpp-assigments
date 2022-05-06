#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

vector <string> kod;
vector <string> nazwa;

int main()
{
    ifstream read;
    read.open("tablice.txt");
    while(read >> kod, read >> nazwa)
    {}
    for(int i=0; i<kod.size(), i++)
    {
        cout << kod[i] << " " << nazwa[i] << endl;
    }
}
