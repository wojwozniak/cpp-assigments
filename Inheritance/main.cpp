#include <iostream>
#include "cProdukt.h"
#include "cWarzywo.h"

using namespace std;

int main() {
    cWarzywo *ziemniak = new cWarzywo("Ziemniak", 32, "kg", 14, 23, "zolte");
    ziemniak -> Pokaz();
    delete ziemniak;
    cWarzywo marchew("Marchew", 12, "kg", 12, 23, "pomaranczowe");
    marchew.Pokaz();
    cWarzywo gruszka("gruszka", 300, "g", 124, 8, "zielone");
    gruszka.Pokaz();
    system("pause");

}
