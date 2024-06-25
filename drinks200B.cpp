#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> p;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        p.push_back(input);
    }
    double result=0;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=p[i];   
    }
    result=sum/(double)n;
    cout<<result;
}