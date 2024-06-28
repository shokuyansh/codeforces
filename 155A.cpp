#include<iostream>
#include<vector>
using namespace std;
int checkifGreater(vector<int> &vec,int i)
{
    for(int j=0;j<i;j++)
    {
        if(vec[i]<=vec[j])
            return 0;
    }
    return 1;
}
int checkifSmaller(vector<int> &vec,int i)
{
    for(int j=0;j<i;j++)
    {
        if(vec[i]>=vec[j])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> points(n);
    int amazing=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>points[i];
    }
    for(int i=1;i<n;i++)
    {   //cout<<checkifGreater(points,i);
        if(checkifGreater(points,i)==1)
            amazing++;
        else if(checkifSmaller(points,i)==1)
            amazing++;
    }
    cout<<amazing;
}