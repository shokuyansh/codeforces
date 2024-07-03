#include<iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink=k*l;
    int toasts_1=total_drink/nl;
    int toasts_2=c*d;
    
    int toasts_3=p/np;
    if(toasts_1<=toasts_2)
    {
        if(toasts_1<=toasts_3)
            cout<<toasts_1/n;
        else
            cout<<toasts_3/n;

    }
    else if(toasts_2<=toasts_1)
    {
        if(toasts_2<=toasts_3)
            cout<<toasts_2/n;
        else
            cout<<toasts_3/n;
    }
    else
        cout<<toasts_3/n;
}