#include <iostream>

using namespace std;

class cProdukt {
    public:
        cProdukt() {
            mAutoindex++;
            mId = cProdukt::mAutoindex;
            cout << "Stworzono produkt!" << endl;
        }

        cProdukt(string iName, double iCount, string iUnit, double iPrice, double iVat) {
            setter(iName, iCount, iUnit, iPrice, iVat);
            cout << "Stworzono produkt podajac parametry!" << endl;
        }

        virtual ~cProdukt() {
            cout << "Uruchomiono desktruktor!" << endl << endl;
        }

        void Wypelnij () {
            if(mWypelnijFlag == true) {
                cout << "Dane juz sa wypelnione!" << endl;
            }
            else {
                string iName;
                double iCount;
                string iUnit;
                double iPrice;
                double iVat;
                cout << "Podaj nazwe produktu: ";
                cin >> iName;
                cout << "Podaj ilosc produktu: ";
                cin >> iCount;
                cout << "Podaj jednostke produktu: ";
                cin >> iUnit;
                cout << "Podaj cene produktu: ";
                cin >> iPrice;
                cout << "Podaj stawke VAT (w procentach, podaj tylko liczbe): ";
                cin >> iVat;
                setter(iName, iCount, iUnit, iPrice, iVat);
            }
        }
        void Pokaz () {
            if(mWypelnijFlag == false) {
                cout << "Najpierw wypelnij dane produktu!" << endl;
            }
            else {
            cout << "Dane produktu " << mId << ":" << endl;
            cout << "Nazwa produktu : " << mName << endl;
            cout << "Ilosc produktu: " << mCount << " " << mUnit << endl;
            cout << "Cena produktu: " << mPrice << " zl" << endl;
            cout << "Stawka VAT: " << mVat << "%" << endl;
            }
        }

        void setLp () {
            cout << "Podaj nowe ID: ";
            cin >> mId;
        }
        void getLp () {
            cout << "ID tego produktu to " << mId << endl;

        }

    protected:
        void setter (string iName, double iCount, string iUnit, double iPrice, double iVat) {
            mName = iName;
            mCount = iCount;
            mUnit = iUnit;
            mPrice = iPrice;
            mVat = iVat;
            mWypelnijFlag = true;
        }
        int mId;
        string mName;
        double mCount;
        string mUnit;
        double mPrice;
        double mVat;
        bool mWypelnijFlag = false;

    private:
        int mAutoindex;

};
