#include <iostream>

using namespace std;

int main()
{
string a="lokomotywa";
int x=a.size();
for(int i=0; i<x; i++)
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='y'||a[i]=='o'||a[i]=='i'&&i<x-1)
    {
      swap(a[i], a[i+1]);
      i++;
    }
    else if(a[i]=='a'||a[i]=='e'||a[i]=='y'||a[i]=='o'||a[i]=='i')
    {
       swap(a[i], a[0]);
    }
}
cout << a;


}
