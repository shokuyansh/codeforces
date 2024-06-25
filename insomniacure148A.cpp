#include<iostream>
#include<set>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    set<int> multiples;
    for(int i=1;i*k<=d;i++)
        multiples.insert(i*k);
    for(int i=1;i*l<=d;i++)
        multiples.insert(i*l);
    for(int i=1;i*m<=d;i++)
        multiples.insert(i*m);
    for(int i=1;i*n<=d;i++)
        multiples.insert(i*n);
    cout<<multiples.size();

}