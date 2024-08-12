#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> number_of_pieces(m);
    for(int i=0;i<m;i++)
    {
        cin>>number_of_pieces[i];
    }
    sort(number_of_pieces.begin(),number_of_pieces.end());
    int min=number_of_pieces[0];
    int max=number_of_pieces[n-1];
    int min_difference=max-min;
    for(int i=1;i<=m-n;i++)
    {
        min=number_of_pieces[i];
        max=number_of_pieces[i+n-1];
        if(min_difference>(max-min))
        {
            min_difference=max-min;
        }
    }
    cout<<min_difference;
}