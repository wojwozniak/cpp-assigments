#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj numer PIN: ";
    cin >> PIN;

    if(PIN=="9279")
        cout << "Poprawny PIN";
    else
        cout << "Niepoprawny PIN";

    return 0;
}
