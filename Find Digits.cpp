//HackerRank
//Algorithms [Implementation]
//Find Digits

#include <iostream>
using namespace std;

int main()
{
int testcase,x,num,a,b=0;
cin>>testcase;

for(int i=0;i<testcase;i++)
    {
    cin>>num;
    x=num;

    while(num)
        {
        a=num%10;
        num=num/10;

        if(a!=0&&x%a==0)
            {
            b++;
            }
        }
    cout<<b<<endl;
    b=0;
    }
return 0;
}