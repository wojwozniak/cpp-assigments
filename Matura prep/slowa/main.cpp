#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream read;
    read.open("slowa.txt");
    ofstream fout;
    fout.open("wyniki6.txt");
    string a,b;
    char ap, bp;
    int ile=0;
    while(read >> a >> b)
    {
        ap=a[a.size()-1];
        if(ap="a")
        {
            ile++;
        }
        bp=b[b.size()-1];
        if(bp="a")
        {
           ile++;
        }
    }
    cout << ile;



}
