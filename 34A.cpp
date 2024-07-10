#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int input;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);

    }
    int min_diff=9999;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int min=abs(v[i+1]-v[i]);
        if(min<min_diff)
        {   temp=i;
            min_diff=min;
        }

    }

    if(abs(v[0]-v[n-1])<min_diff)
    {
       
        cout<<n<<" "<<1;
    }
    else
        cout<<temp+1<<" "<<temp+2;
   
}