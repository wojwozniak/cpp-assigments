#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>

using namespace std;

string jd, kutas, essa;
int skrrrt;

int main()
{
    getline(cin, jd);
    transform(jd.begin(),jd.end(),jd.begin(),::tolower);
    cout << jd << endl;
    Sleep(1000);
    system("cls");


    getline(cin, kutas);
    transform(kutas.begin(),kutas.end(),kutas.begin(),::toupper);
    cout << kutas << endl;
    Sleep(1000);
    system("cls");

    essa=jd+kutas;
    cout << essa << endl;
    skrrrt=essa.length();
    cout << skrrrt;
    getchar(), getchar();



    return 0;
}
