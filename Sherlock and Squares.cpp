//HackerRank
//Algorithms [Implementation]
//Sherlock and Squares

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int t,a,b;
cin>>t;

while(t--)
    {
    cin>>a>>b;
    cout<<((int)(floor(sqrt((double)b))-ceil(sqrt((double)a))+1))<<endl;
    }
return 0;
}