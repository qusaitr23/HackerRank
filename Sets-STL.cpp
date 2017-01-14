//HackerRank
//C++ [STL]
//Sets-STL

#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
long long n,x,y;
cin>>n;
set<long long> s;

for(long long i=0;i<n;i++)
    {
    cin>>x>>y;
    if(x==1)
        {
        s.insert(y);
        }
    
    else if(x==2)
        {
        s.erase(y);
        }
    else
        {
        set<long long>::iterator it=s.find(y);
        
        if(it==s.end()) // if we use *it==y,got error
            {
            cout<<"No\n";
            }
            else
            {
            cout<<"Yes\n";
            }
         }   
     }
return 0;
}