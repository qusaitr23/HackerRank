//HackerRank
//Algorithms [Warmup]
//Compare the Triplets

#include <iostream>
using namespace std;

int main()
{
unsigned long long a[3],b[3],alice=0,bob=0;
for(unsigned long long i=0;i<3;i++) {cin>>a[i];}
for(unsigned long long i=0;i<3;i++) {cin>>b[i];}

for(unsigned long long i=0;i<3;i++)
  {
  if(a[i]>b[i]) {alice++;}
  else if(a[i]<b[i]) {bob++;}
  }
cout<<alice<<" "<<bob<<"\n";
return 0;
}
