//HackerRank
//C++ [Introduction]
//Pointer

#include<iostream>
using namespace std;

int a,b;
int main()
{
cin>>a;
cin>>b;
int*pa=&a;
int*pb=&b;

cout<<*pa+*pb<<endl;

if(a>b) {cout<<*pa-*pb<<endl;}
else cout<<*pb-*pa<<endl;
}