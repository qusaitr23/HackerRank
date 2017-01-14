//HackerRank
//[Algorithms] Implementation
//Service Lane

#include <iostream>
#include <vector>
using namespace std;

int main()
{
long long freeway_length,testcase;
cin>>freeway_length>>testcase;

vector <long long> segment_width;
long long temp;
for(long long input_index=0;input_index<freeway_length;input_index++)
    {
    cin>>temp;
    segment_width.push_back(temp);
    }

while(testcase--)
    {
    long long entry,exit,current_vehicle,largest_vehicle=3;
    cin>>entry>>exit;
    for(long long check_index=entry;check_index<=exit;check_index++)
        {
        if(segment_width[check_index]==1) {current_vehicle=1;}
        else if(segment_width[check_index]==2) {current_vehicle=2;}
        else {current_vehicle=3;}

        if(current_vehicle<largest_vehicle) {largest_vehicle=current_vehicle;}
        }
    cout<<largest_vehicle<<endl;
    }
return 0;
}