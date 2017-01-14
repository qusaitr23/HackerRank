//HackerRank
//Algorithms [Strings]
//Funny String

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
int t;
char s[10001];
cin>>t;

while(t--)
    {
    cin>>s;
    int i=0,j=strlen(s),d=1;

    for(i=0;i<j-1;i++)
        {
        if(!(abs(s[i+1]-s[i])==abs(s[j-i-1]-s[j-i-2])))
            {
            d=0;
            break;
            }
        }

        if(d==0)
        {
        cout<<"Not Funny\n";
        }
        else
        {
        cout<<"Funny\n";
        }
     }
return 0;
}