//HackerRank
//C++ [Strings]
//Strings

#include <iostream>
#include <string>
using namespace std;

string a,b,c,d;
void input()
{
cin>>a;
cin>>b;
}

void output()
{
cout<<a.size()<<" "<<b.size()<<endl;
string c=a+b;
cout<<c<<endl;
}

void swapped()
{
c=b[0];
b[0]=a[0];
a[0]=c[0];
cout<<a<<" "<<b;
}

int main()
{
input();
output();
swapped();
return 0;
}