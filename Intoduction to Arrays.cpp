//HackerRank
//C++ [Introduction]
//Introduction to Arrays

#include <iostream>
using namespace std;

int main()
{
int n,i;
cin>>n;

int*a=new int[n];
int*b=new int[n];

for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
for (i=0;i<n;i++)
    {
    b[i]=a[n-1-i];
    }
for (i=0;i<n;i++)
    {
    cout<<b[i]<<" ";
    }
return 0;
}