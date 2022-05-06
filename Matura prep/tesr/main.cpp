#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a="012", b="21";
    int pom=b.size()-1;
    b.erase(pom, 1);
        if(a.find(b)!=4294967295)
        {
            cout << "k";
        }

}
