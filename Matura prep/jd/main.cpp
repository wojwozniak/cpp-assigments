#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczniow jest w twojej klasie?: ";
    cin >> uczniowie;
    cout << "Ile masz cukierkow?: ";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout << "Cukierkow dla kazdego ucznia: " << x;

    y = (cukierki-x*(uczniowie-1));
    cout <<endl<< "Pozostalo " << y << " cukierkow";
    return 0;
}
