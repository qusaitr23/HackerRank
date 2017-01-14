//HackerRank
//Algorithms [Warmup]
//Staircase

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long h=0;
cin>>h;

for(unsigned long long i=1;i<=h;i++)
	{
  for (unsigned long long j=0;j<i;j++)
		{
    if(j==0)
			{
      for(unsigned long long t=0;t<h-i;t++)
				{
				cout<<" ";
				}
      }
  	cout<<"#";
    }
	cout<<endl;
	}
return 0;
}
