#include <iostream>

using namespace std;

int main()
{
    string napis="Ala ma kota";
    napis.replace(4,2,"nie ma");
    cout << napis;
    string nowynapis = napis.substr(4,7);
    cout <<endl<<nowynapis;

    return 0;
}
