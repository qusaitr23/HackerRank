//HackerRank
//Algorithms [Sorting]
//Intro to Tutorial Challenges

#include <iostream>
using namespace std;

int main()
{
int a,v,n,index=0;
cin>>v>>n;

for(int i=0;i<n;i++)
    {
    cin>>a;
    if(a==v)
        {
        cout<<index<<endl;
        }
    index++;
    }
return 0;
}