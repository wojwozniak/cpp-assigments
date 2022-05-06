#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    float cale=m*39.37;
    return cale;
}

float ile_jardow(float x)
{
    float jardy=x*1.0936;
    return jardy;
}

void ile_mil(float m)
{
    cout <<"Na mile: "<<m*0.0006213<<endl;
}

int main()
{
    cout << "Podaj ile metrow: " << endl;
    cin >> metry;

    cout << ile_cali(metry) << endl;
    cout << ile_jardow(metry) << endl;
    ile_mil(metry);


    return 0;
}

