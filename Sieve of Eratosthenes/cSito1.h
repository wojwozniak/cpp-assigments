#include <iostream>
#include <vector>

using namespace std;

class cSito1 {
    public:
        cSito1() {
            cout << "Stworzono tablice!" << endl;
        }

        Odsiej() {
            tablica[0]=true;
            for(int i=2; i<rozmiar; i++) {
                if(czypierwsza(i)==true) {
                    for(int x=i*i; x<=rozmiar; x+=i) {
                        tablica[x-1]=true;
                    }
                }
            }
            cout << "Odsiano!" << endl;
           /* cout << "Wartosci w tablicy po odsianiu to " << endl;
            for(int i=0; i<rozmiar; i++) {
                cout << tablica[i] << endl;
            } */
            czyodsiane = true;
        }

        void Wyswietl() {
            if(czyodsiane == false) {
                cout << "Najpierw trzeba odsiac liczby!" << endl;
                cout << "Wywoluje funkcje odsiewania!" << endl;
                Odsiej();
            }
            for(int i=0; i<rozmiar; i++) {
                if(tablica[i]==false) {
                  cout << i+1 << endl;
                }
            }
        }

        bool Sprawdz(int x) {
            bool pom;
            if(czyodsiane==false) {
                pom=czypierwsza(x);
            }
            else {
                pom=tablica[x-1];
            }
            cout << "Ta liczba jest liczba ";
            if(pom==true) {
                cout << "zlozona!";
                return false;
            }
            else {
                cout << "pierwsza!";
                return true;
            }
        }

    private:
        bool tablica[100] = {0};
        int rozmiar = 100;
        bool czyodsiane = false;
        bool czypierwsza(int x) {
            for(int i=2;i*i<=x;i++) {
                if(x%i==0) { return false; }
            }
            return true;
        }


};
