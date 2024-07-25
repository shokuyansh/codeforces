#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int min=n-a;
    if(b+1<min)
        cout<<b+1;
    else
        cout<<min;
}