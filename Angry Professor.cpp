//HackerRank
//Algorithms [Implementation]
//Angry Professor

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

unsigned long long t=0;
cin>>t;

while(t--)
	{
	unsigned long long n=0,k=0,c=0;
	long long a=0;

	cin>>n>>k;
	for(unsigned long long i=0;i<n;i++)
		{
		cin>>a;
		if(a<=0) {c++;}
		}
	if(c>=k) {cout<<"NO\n";}
	else {cout<<"YES\n";}
	}
return 0;
}
