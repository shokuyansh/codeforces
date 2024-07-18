#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
        cout<<"0 0 0";
    else
    {    int a=0;
        int b=1;
        while(b+a!=n)
        {   int temp=b;
            b=a+b;
            a=temp;
        }
        if(a+b==n)
             cout<<"0 "<<a<<" "<<b;
        else
            cout<<"I'm too stupid to solve this problem";
    }
}