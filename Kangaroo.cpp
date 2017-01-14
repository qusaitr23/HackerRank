//HackerRank
//Algorithms [Implementation]
//Kangaroo

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long x1=0,x2=0,v1=0,v2=0;
cin>>x1>>v1>>x2>>v2;
for(;;)
    {
    if((x1>x2&&v1>v2)||(x2>x1&&v2>v1)||(x1!=x2&&v1==v2)) {cout<<"NO\n"; break;}
    if((x1+=v1)==(x2+=v2)) {cout<<"YES\n"; break;}
    }
return 0;
}
