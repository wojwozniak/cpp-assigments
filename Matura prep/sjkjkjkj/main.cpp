#include <iostream>

using namespace std;

int n;

void wypis(int n)
{
    system("CLS");
    for (int i=0; i<n; i++)
    {
        cout << "M";
    }
    cout << endl << n << endl;
    for (int i=0; i<n; i++)
    {
        cout << "M";
    }
    cout << endl;
}

int main()
{
    cout << "-------------------------- \n" << endl;
    cout << "|\n" << endl;
    cout << "| Autor programu:\n" << endl;
    cout << "| Oliwier Lech, klasa 8a\n" << endl;
    cout << "| 18.02.2021 r. \n" << endl;
    cout << "|\n" << endl;
    cout << "--------------------------\n" << endl;
    cout << "Zadanie 2\n" << endl;
    int a, b = 0;
    cout << "Podaj a: ";
    cin >> a;
    cout << endl << "Podaj b: ";
    cin >> b;

    if (a>0 && b>0)
    {
        int obw = (2 * a) + (2 * b);
        cout << endl << "Obwod tego prostokata wynosi: " << obw << endl;
    }
    else
    {
        cout << endl << "Podany wartosci mniejsze lub rowne zero" << endl;
    }
    cout << "\n" << endl;
    cout << "-----------------------------------------------\n" << endl;
    int os1, os2 = 0;

    cout << "Zadanie 3\n" << endl;
    cout << "Podaj wiek pierwszej osoby: ";
    cin >> os1;
    cout << endl << "Podaj wiek drugiej osoby: ";
    cin >> os2;

    if (os1 > os2)
    {
        cout << endl << "Osoba pierwsza jest starsza od osoby drugiej.";
    }

    else if (os1 < os2)
    {
        cout << endl << "Osoba pierwsza jest mlodsza od osoby drugiej.";
    }
    else
    {
        cout << endl << "Obie osoby maja ten sam wiek";
    }
    cout << "Zadanie 4 i 5\n" << endl;
    cout << "Podaj n: " << endl;
    cin >> n;
    wypis(n);
}
