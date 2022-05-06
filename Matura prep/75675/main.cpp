#include <iostream>

using namespace std;

int main()
{
    string napis="Ala ma kota";
    napis.erase(5,3);
    cout << napis;
    napis.insert(8," JEBAÆ DISA");
    cout << napis;
    napis.replace(4, 2," JEBjojoihj9u8ISA");
    cout << napis;
    return 0;
}
