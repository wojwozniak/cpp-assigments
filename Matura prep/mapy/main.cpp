#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int main()
{
        ifstream read;
        read.open("tekst.txt");
        ofstream fout;
        fout.open("wyniki.txt", ios::app);
        cout << "zadanie73.2:" << endl;

        string pom;
        map <char,int> alfabet;

        for(char i = 'A'; i <= 'Z'; i++)
        {
            alfabet[i] = 0;
        }

        while(read >> pom)
        {
            for(int i = 0 ; i < pom.size(); i++)
            {
                alfabet[pom[i]]++;
            }
        }

        int sumaliter = 0;
        for(auto it = alfabet.begin(); it != alfabet.end(); it++)
        {
            sumaliter += it -> second;
//cout << sumaliter << " ";
        }

        for(auto it = alfabet.begin(); it != alfabet.end(); it++)
        {
            cout << it -> first << " " << it -> second << " ";
            fout << it -> first << " " << it -> second << " ";
            float procent = ((float)it -> second / sumaliter)*100;
            cout << "("<<round(procent*100)/100 <<")" << endl;
            fout << "("<<round(procent*100)/100<<")" << endl;
//cout<< fixed << setprecision(2) << 12.122322;
        }
}
