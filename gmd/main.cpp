#include <iostream>

using namespace std;

int nwd(int *aw, int *bw);
void licznwd(int *aw, int *bw);

int main() {
    int a=0,b=0;
    cout << "Podaj liczby do obliczenia nwd: " << endl;
    cin >> a;
    cin >> b;
    int *aw=&a;
    int *bw=&b;
    cout << nwd(aw,bw);
}



int nwd(int *aw, int *bw) {
    while(*aw!=*bw) {
        licznwd(aw, bw);
    }
    return *aw;
}

void licznwd(int *aw, int *bw) {
    if(*aw>*bw){
        *aw-=*bw;
    }
    else *bw-=*aw;
}
