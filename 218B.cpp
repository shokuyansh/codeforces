#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int number_of_people_inqueue,number_of_planes;
    cin>>number_of_people_inqueue>>number_of_planes;
    vector<int> empty_seats(number_of_planes);
    vector<int> copy_vector;
    for(int i=0;i<number_of_planes;i++)
    {
        cin>>empty_seats[i];
    }
    sort(empty_seats.begin(),empty_seats.end());
    copy_vector=empty_seats;
    int max_earning,min_earning;
    max_earning=0;
    min_earning=0;
    for(int i=number_of_people_inqueue;i>0;i--)
    {
        max_earning+=empty_seats[empty_seats.size()-1];
        empty_seats[empty_seats.size()-1]--;
        sort(empty_seats.begin(),empty_seats.end());

    }
    int index=0;
    for(int i=0;i<number_of_people_inqueue;i++)
    {   
        if(copy_vector[index]!=0)
        {
            min_earning+=copy_vector[index];
            copy_vector[index]--;
            sort(empty_seats.begin(),empty_seats.end());
        }
        else
        {
            ++index;
            --i;
        }
    }
    cout<<max_earning<<" "<<min_earning;


}