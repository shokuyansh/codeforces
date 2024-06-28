#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int l;
    int l_count0=0;
    int l_count1=0;
    int r;
    int r_count0=0;
    int r_count1=0;
    int time=0;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        cin>>r;
        if(l==0)
            l_count0++;
        else if (l==1)
        {
            l_count1++;
        }
        if(r==0)
            r_count0++;
        else if (r==1)
        {
            r_count1++;
        }
        
    }
    if(l_count0>l_count1)
    {
        time+=l_count1;
    }
    else if(l_count0<=l_count1)
    {
        time+=l_count0;
    }
    if(r_count0>r_count1)
    {
        time+=r_count1;
    }
    else if(r_count0<=r_count1)
    {
        time+=r_count0;
    }
    cout<<time;
}