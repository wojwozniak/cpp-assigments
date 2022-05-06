#include <iostream>
#include <fstream>

using namespace std;

char dzialka[50][30][30];
char odw[50][30][30];
int maxdlug=0;

int czy()
{
    int checksum=0;
    for(int i=0; i<50; i++)
    {
        for(int x=0; x<50; x++)
        {
            for(int y=0; y<30; y++)
            {
                for(int z=0; z<30; z++)
                {
                    if(dzialka[i][y][z]==odw[x][y][z]&&i!=x)
                    {
                        checksum++;
                    }
                }
            }
            cout << checksum << endl;
            if(checksum==900)
            {
               ofstream fout;
               fout.open("wynik4.txt", ios::app);
               fout << i+1 << endl << x+1 << endl;
               return 0;
            }
            checksum=0;
        }
    }
}

bool spr(int i, int x, int y)
{
    for(int n=0; n<=x; n++)
    {
        if(dzialka[i][n][y]=='X')
        {
            //cout << "1" << endl;
            return 0;
        }
    }
    for(int n=0; n<=y; n++)
    {
        if(dzialka[i][x][n]=='X')
        {
           // cout << "2" << endl;
            return 0;
        }
    }
   // cout << "k" << endl;
    return 1;
}

int maxbok()
{
    int dlugosc, x, y;
    for(int i=0; i<50; i++)
    {
        dlugosc=0, x=0, y=0;
        if(dzialka[i][0][0]=='X')
        {
            //cout << "f" << endl;
            continue;
        }
        else dlugosc++, x++, y++;
        while(spr(i, x, y)!=0)
        {
           // cout << "ww" << endl;
            dlugosc++, x++; y++;
        }
        if(dlugosc>=maxdlug)
        {
          //  cout << "doszlo" << endl;
            maxdlug=dlugosc;
            cout << maxdlug << " " << i << endl;
        }
    }
}



void zadanie1();
void zadanie2();
void zadanie3();

int main()
{
    ifstream read;
    read.open("dzialki.txt");
    ofstream fout;
    fout.open("wynik4.txt", ios::app);
    fout << "4.3: ";
    for(int i=0; i<50; i++)
    {
        for(int y=0; y<30; y++)
        {
            for(int x=0; x<30; x++)
            {
                read >> dzialka[i][y][x];
            }
        }
    }
maxbok();

}

void zadanie1()
{
    ifstream read;
    read.open("dzialki.txt");
    ofstream fout;
    fout.open("wynik4.txt");
    fout << "4.1: ";
    char a;
    int ile=0;
    float trawa=0;

    for(int i=0; i<50; i++)
    {
        trawa=0;
        for(int i=0; i<900; i++)
        {
            read >> a;
            if(a=='*')
            {
                trawa++;
            }
        }
        trawa/=900;
        if(trawa>=0.7)
        {
            ile++;
        }
    }
    fout << ile << endl;
}

void zadanie2()
{
    ifstream read;
    read.open("dzialki.txt");
    ofstream fout;
    fout.open("wynik4.txt", ios::app);
    fout << "4.2: ";
    for(int i=0; i<50; i++)
    {
        for(int y=0; y<30; y++)
        {
            for(int x=0; x<30; x++)
            {
                read >> dzialka[i][y][x];
            }
        }
    }
    for(int i=0; i<50; i++)
    {
        for(int y=0; y<30; y++)
        {
            for(int x=0; x<30; x++)
            {
                odw[i][29-y][29-x]=dzialka[i][y][x];
            }
        }
    }
    czy();
}

void zadanie3()
{

}
