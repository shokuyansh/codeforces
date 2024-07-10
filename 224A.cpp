#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    double a1,a2,a3;
    cin>>a1>>a2>>a3;
    int l,b1,b2;
    l=round(sqrt((a1*a2)/a3));
    b1=round(a1/l);
    b2=round(a3/b1);
    cout<<(l*4)+(b1*4)+(b2*4);
}