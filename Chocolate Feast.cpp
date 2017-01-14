//HackerRank
//Algorithms [Implementation]
//Chocolate Feast

#include <iostream>
using namespace std;

int main()
{
int t,n,c,m,w,choc;
cin>>t;

while(t--)
    {
    choc=0;
    cin>>n>>c>>m;
    choc=n/c;
    if(choc>=m)
    for(w=choc;w>=m;choc++,w=w-m+1);
    cout<<choc<<endl;
    }
return 0;
}