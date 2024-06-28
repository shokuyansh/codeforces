#include<iostream>
using namespace std;
int main()
{
    long long new_;
    int count=-1;
    long long prev=-1;
    for(int i=0;i<4;i++)
    {
        cin>>new_;
        if(prev!=new_)
            count++;
        prev=new_;
    }
    cout<<4-count;
}