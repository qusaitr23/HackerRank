//HackerRank
//Data Structures - Arrays
//Arrays-DS

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

unsigned long long n=0;
cin>>n;
vector <unsigned long long> v(n);
for(unsigned long long i=0;i<n;i++) {cin>>v[i];}
reverse(v.begin(),v.end());
for(unsigned long long i=0;i<n;i++) {cout<<v[i]<<" ";}

return 0;
}