#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int n;
    long long input;
    vector<long long> vec;
   cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        vec.push_back(input);

    }
    long long min=vec[0];
    for(int i=1;i<n;i++)
    {
        if(vec[i]<min)
        {
            min=vec[i];
        }
    }
    int pos;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(min==vec[i])
        {
            pos=i;
            count++;
        }
    }
    if(count==1)
    {
        cout<<pos+1;
    }
    else
        cout<<"Still Rozdil";
}