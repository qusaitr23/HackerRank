//HackerRank
//Algorithms [Implementation]
//Utopian Tree

#include <iostream>
using namespace std;

int i,sp,su,n,t;
void calc()
{
i=1;
for(int j=1;j<=n;j++)
    {
    if(j%2==0)
        {
        i+=1;
        }
     else
        {
        i*=2;
        }
    }
cout<<i<<endl;
}

void testcase()
{
cin>>t;
while(t--)
    {
    cin>>n;
    calc();
    }
}

int main()
{
testcase();
return 0;
}