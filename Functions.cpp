//HackerRank
//C++ [Introduction]
//Functions

#include<iostream>
using namespace std;

int largest(int,int,int,int);

int main()
{
int value_1;
int value_2;
int value_3;
int value_4;
int maximum;

cin>>value_1;
cin>>value_2;
cin>>value_3;
cin>>value_4;
maximum=largest(value_1,value_2,value_3, value_4);

cout<<maximum<<endl;
return 0;
}

int largest(int x,int y,int z, int a)
{
int largest=x;

if(y>largest)
largest=y;

if(z>largest)
largest=z;

if(a>largest)
largest=a;

return largest;
}