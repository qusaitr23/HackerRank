//HackerRank
//Algorithms [Warmup]
//Simple Array Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n=0,s=0,x=0;
cin>>n;
for(unsigned long long i=0;i<n;i++)
	{
	cin>>x;
	s+=x;
	}
cout<<s<<"\n";
return 0;
}
