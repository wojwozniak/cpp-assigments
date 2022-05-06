#include <iostream>

using namespace std;

int x[1000];
int ile;

int main()

{
cin >> ile;
   for(int i=0; i<ile; i++)
   {
       cin >> x[i];
   }
   for(int i=1; i<(ile); i+=2)
   {
       cout << x[i];
   }
   for(int i=0; i<(ile); i+=2)
   {
       cout << x[i];

   }
}
