//HackerRank
//C++ [STL]
//Vector Sort

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int x;
cin>>x;
vector <int> v;
int a;

for(int i=0;i<x;i++)
    {
    cin>>a;
    v.push_back(a);
    }

sort(v.begin(),v.end());

for(int i=0;i<x;i++)
    {
    cout<<v[i]<<" ";
    }
return 0;
}