#include <iostream>

using namespace std;

class cWarzywo : public cProdukt {
    public:
        cWarzywo() {
            cout << "Stworzono warzywo!" << endl;
        }
        cWarzywo( string iName, double iCount, string iUnit, double iPrice, double iVat, string iKolor) {
            setter(iName, iCount, iUnit, iPrice, iVat, iKolor);
            cout << "Stworzono warzywo podajac parametry!" << endl;
        }

        void Pokaz() {
            if(mWypelnijFlag == false) {
                cout << "Najpierw wypelnij dane produktu!" << endl;
            }
            else {
            cout << "Dane produktu " << mId << ":" << endl;
            cout << "Nazwa produktu : " << mName << endl;
            cout << "Ilosc produktu: " << mCount << " " << mUnit << endl;
            cout << "Cena produktu: " << mPrice << " zl" << endl;
            cout << "Stawka VAT: " << mVat << "%" << endl;
            cout << "Kolor warzywa: " << mKolor << endl;
            }
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
                string iKolor;
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
                cout << "Podaj kolor warzywa: ";
                cin >> iKolor;
                setter(iName, iCount, iUnit, iPrice, iVat, iKolor);
            }
        }


    protected:
        void setter (string iName, double iCount, string iUnit, double iPrice, double iVat, string iKolor) {
            cProdukt::setter(iName, iCount, iUnit, iPrice, iVat);
            mKolor = iKolor;
            mWypelnijFlag = true;
        }
        string mKolor;
};
