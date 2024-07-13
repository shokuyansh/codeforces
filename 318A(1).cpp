#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long n,k,div,ans;
    cin>>n>>k;
    if(n%2==0)
    {   div=n/2;
        if(k<=div)
        {
            ans=k*2-1;
        }
        else
            ans=(k-div)*2;
    }
    else
    {
        div=(n+1)/2;   
        if(k<=div)
        {
            ans=k*2-1;
        }
        else
            ans=(k-div)*2;
    }
        cout<<ans;
         
}