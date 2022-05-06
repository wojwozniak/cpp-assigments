#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    float cale=m*39.37;
    return cale;
}

float ile_jardow(float x)
{x*1.036;
    return x*1.036;
}

void ile_mil(float m)
{
    cout << "Na mile: " << m*0.0006213;
}

int main()
{
    cout << "Podaj ilosc metrow: ";
    cin >> metry;

    cout << "Na cale: " << ile_cali(metry) << endl;
    cout << "Na jardy: " << ile_jardow(metry) << endl;
    ile_mil(metry);

    return 0;
}
