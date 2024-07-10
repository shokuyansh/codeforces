#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> x_coord;
    vector<int> y_coord;
    int x;
    int y;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        x_coord.push_back(x);
        y_coord.push_back(y);

    }
    int count=0;
    
    for(int i=0;i<n;i++)
    {int left_count=0;
    int right_count=0;
    int upper_count=0;
    int lower_count=0;
        for(int j=0;j<n;j++)
        {
            if(x_coord[i]==x_coord[j]&&i!=j)
            {
                if(y_coord[i]<y_coord[j])
                {
                    upper_count++;
                }
                else
                    lower_count++;
            }
            else if(y_coord[i]==y_coord[j]&&i!=j)
            {
                if(x_coord[i]<x_coord[j])
                    right_count++;
                else
                    left_count++;
            }
        }
        if(upper_count>=1&&lower_count>=1&&left_count>=1&&right_count>=1)
            count++;
    }
    cout<<count;
}