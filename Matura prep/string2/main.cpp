#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string napis = "Ala ma kota";
    transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
    cout<<napis<<endl;
    transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
    cout<<napis<<endl;
    return 0;
}
