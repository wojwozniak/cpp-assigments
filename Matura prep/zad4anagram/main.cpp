#include <iostream>
#include <fstream>
#include <algorithm>

void zadanie1();
void zadanie2();


using namespace std;

int main()
{
zadanie1();
zadanie2();
}

void zadanie1()
{
    ifstream read;
    read.open("anagram.txt");
    ofstream fout;
    fout.open("odp_4a.txt");
    string a, b, c, d, e;
    while(read >> a >> b >> c >> d >> e)
    {
        if(a.size()==b.size()&&b.size()==c.size()&&c.size()==d.size()&&d.size()==e.size())
        {
            out << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
    }

}

void zadanie2()
{
    ifstream read;
    read.open("anagram.txt");
    ofstream fout;
    fout.open("odp_4b.txt");
    string a, b, c, d, e, ap, bp, cp, dp, ep;
    while(read >> a >> b >> c >> d >> e)
    {
        ap=a, bp=b, cp=c, dp=d, ep=e;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        sort(e.begin(), e.end());
        if(a==b&&b==c&&c==d&&d==e)
        {
            fout << ap << " " << bp << " " << cp << " " << dp << " " << ep << endl;
        }
    }

}

