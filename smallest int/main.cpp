#include <iostream>
#include <vector>

using namespace std;

vector <int> ciag;
void generujciag(int ile);
int najmniejszy(int x);
int szukaj(int *m);

int main() {
    int x=0;
    int *xw=&x;
    cout << "Dla ilu wyrazow wyliczyc najmniejszy wyraz? " << endl;
    cin >> x;
    generujciag(x);
    cout << najmniejszy(x);
}

int szukaj(int *m) {
    for(int i=0; i<ciag.size()-1; i++){
        if(*m>ciag[i]) {
            *m=ciag[i];
        }
    }
}

int najmniejszy(int x) {
    int mini=INT_MAX;
    int *m=&mini;
    szukaj(m);
    return mini;
}

// Nie ma podane jaki ciag, wiec go generuje, wzor do zmiany wewnatrz push backa

void generujciag(int ile) {
    for(int n=1; n<=ile; n++) {
        ciag.push_back(2*n+1);
    }
}
