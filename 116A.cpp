#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int capacity=0;
    int maxcapacity=0;
    for(int i=0;i<n;i++)
    {
        capacity+=b[i];
        capacity-=a[i];
        if(capacity>maxcapacity)
            maxcapacity=capacity;
    }
    cout<<maxcapacity;
}