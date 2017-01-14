//HackerRank
//Algorithms [Strings]
//Pangrams

#include <bits/stdc++.h>
using namespace std;

int main()
{
string alphabets="abcdefghijklmnopqrstuvwxyz";

string inputstr;
getline(cin,inputstr);
transform(inputstr.begin(),inputstr.end(),inputstr.begin(),::tolower);
sort(inputstr.begin(),inputstr.end());
inputstr.erase(remove_if(inputstr.begin(),inputstr.end(),::isspace),inputstr.end());
inputstr.erase(unique(inputstr.begin(),inputstr.end()),inputstr.end());

if(inputstr==alphabets) {cout<<"pangram";}
else {cout<<"not pangram";}

return 0;
}