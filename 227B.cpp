#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int input;
    map<int,int> ma;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        ma[input]=i;
    }
    int m;
    cin>>m;
    long long first_count=0;
    long long second_count=0;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        first_count+=ma[y]+1;
        second_count+=n-ma[y];
    }
    
    
   
    cout<<first_count<<" "<<second_count;
}