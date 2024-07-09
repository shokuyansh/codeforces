#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int last;
    double max=0;
    for(int i=1;i<=n;i++)
    {
        double x;
        cin>>x;
        if(ceil(x/m)>=max)
        {   max=ceil(x/m);
            last=i;
        }

    }
    cout<<last;
}