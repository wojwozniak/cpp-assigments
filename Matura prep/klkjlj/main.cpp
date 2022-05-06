#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string y;
int x, ile;

int main()
{
    cin >> ile;

    int * x;
    x = new int[ile];

    for(int i=0; i<ile; i++)
    {
        cin >> x[i];
    }
    for(int i=0; i<ile; i++)
    {
        ostringstream ss;
        ss << x;
        string str = ss.str();
        y=(x[0]+x[1]*3+x[2]*7+x[3]*9+x[4]+x[5]*3+x[6]*7+x[7]*9+x[8]+x[9]*3+x[10]);
        if(y[y.size()]=='0')
        {
            cout << "D" << endl;
        }
        else cout << "N" << endl << x[0];
    }



    return 0;
}
