#include <iostream>
#include <vector>
#include "cSito1.h"
#include "cSito2.h"
#include "cSito3.h"

using namespace std;




int main() {
    cSito1 sito1;
    sito1.Odsiej();
    sito1.Wyswietl();


    cSito2 sito2;
    sito2.Odsiej();
    sito2.Wyswietl();

    int a=1;
    cout << "Podaj gorna granice sita" << endl;
    cin >> a;
    cSito3 sito3(a);
    sito3.Odsiej();
    sito3.Wyswietl();
    system("pause");


}
