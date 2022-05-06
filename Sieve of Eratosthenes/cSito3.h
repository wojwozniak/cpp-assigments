#include <iostream>
#include <vector>
using namespace std;

class cSito3 {
    public:
        cSito3(int rozmiar) {
            for(int i=1; i<=rozmiar; i++) {
                tablica.push_back(false);
            }
            std::cout << "Stworzono tablice o podanym rozmiarze!" << endl;
        }

        void Odsiej() {
            tablica[1]=true;
            for(int i=2; i<=tablica.size(); i++) {
                if(czypierwsza(i)==true) {
                    for(int x=i*i; x<=tablica.size(); x+=i) {
                        tablica[x]=true;
                    }
                }
            }
            cout << "Odsiano!" << endl;
          /*  cout << "Wartosci w tablicy po odsianiu to " << endl;
            for(int i=1; i<=tablica.size(); i++) {
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
            for(int i=1; i<=tablica.size(); i++) {
                if(tablica[i]==false) {
                  cout << i << endl;
                }
            }
        }

        bool Sprawdz(int x) {
            bool pom;
            if(czyodsiane==false) {
                pom=czypierwsza(x);
            }
            else {
                pom=tablica[x];
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
        ~cSito3() {
            tablica.clear();
            cout << "Wyczyszczono tablice!" << endl;
        }
    private:
        bool czyodsiane = false;
        vector <bool> tablica;
        bool czypierwsza(int x) {
            for(int i=2;i*i<=x;i++) {
                if(x%i==0) { return false; }
            }
            return true;
        }


};
