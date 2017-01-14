//HackerRank
//Algorithms [Implementation]
//Cut the Sticks

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
int total_sticks;
cin>>total_sticks;

int temp;
vector <int> stick_length;
for(int input_index=0;input_index<total_sticks;input_index++)
    {
    cin>>temp;
    stick_length.push_back(temp);
    }

sort(stick_length.begin(),stick_length.end());

int shortest_stick, zero_counter=0;
int result_counter=total_sticks;

for(int out_index=0;out_index<total_sticks;out_index++)
    {
    int sticks_cut=result_counter-zero_counter;
    if(sticks_cut==0) {break;}

    for(int minimum_finder=0;minimum_finder<total_sticks;minimum_finder++)
        {
        if(stick_length[minimum_finder]>0) {shortest_stick=stick_length[minimum_finder]; break;}
        }

    cout<<sticks_cut<<endl;

    for(int subtract_index=0;subtract_index<total_sticks;subtract_index++)
        {
        stick_length[subtract_index]-=shortest_stick;
        if(stick_length[subtract_index]==0) {zero_counter++;}
        }
    }
return 0;
}