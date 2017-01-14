//HackerRank
//C++ [STL]
//Vector Erase

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
vector <int> v;
int c,t;
cin>>c;

while (c--)
    {
    cin>>t;
    v.push_back(t);
    }

cin>>c;
v.erase(v.begin()+c-1);

cin>>c>>t;
v.erase(v.begin()+ c-1, v.begin()+ t-1);

cout<<v.size()<<"\n";
auto x=v.end();

for (auto i=v.begin();i!=x;i++)
    {
    cout<<*i<<" ";
    }
return 0;
}