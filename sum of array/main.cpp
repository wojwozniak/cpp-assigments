#include <iostream>
#include <vector>

using namespace std;

vector <int> ciag;
void generujciag(int ile);
int suma(int *xw);
int liczsume(int *xw);

int main() {
    int x=0;
    int *xw=&x;
    cout << "Sume ilu wyrazow policzyc? " << endl;
    cin >> x;
    generujciag(x);
    cout << suma(xw);

}

int liczsume(int *xw) {
    *xw-=1;
    int output=ciag[*xw];
    return output;
}

int suma(int *xw) {
    int output=0;
    while(*xw>0){
        output+=liczsume(xw);
    }
    return output;
}

// Nie ma podane jaki ciag, wiec go generuje, wzor do zmiany wewnatrz push backa

void generujciag(int ile) {
    for(int n=1; n<=ile; n++) {
        ciag.push_back(2*n+1);
    }
}
