#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<=n;i++)
    {
        for(int s=n-i;s>0;s--)
            cout<<" "<<" ";
            cout<<0;
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        if(i!=0)
            cout<<" "<<i-1;
        for(int k=i-2;k>=0;k--)
        {
            cout<<" "<<k;
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++)
    {
        for(int s=i;s>=0;s--)
            cout<<" "<<" ";
            cout<<0;
        for(int j=1;j<=n-i-1;j++)
        {
            cout<<" "<<j;
        }
        if(n-i-2>=0)
        cout<<" "<<n-i-2;
        for(int k=n-i-3;k>=0;k--)
        {
            cout<<" "<<k;
        }
        
        cout<<endl;
    }
}