#include <iostream>
#include <algorithm>

using namespace std;

bool czyanagram(string x, string y)
{
sort(x.begin(), x.end());
sort(y.begin(), y.end());
if(x==y)
{
    return true;
}
return false;
}

int main()
{
//string a="kajak";
//cout << a << endl;
//sort(a.begin(), a.end());
//cout << a << endl;
//reverse(a.begin(), a.end());
//cout << a;
string x="kajak";
string y="aajkk";
cout << czyanagram(x, y);
}
