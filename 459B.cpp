#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
long long unique_combination(long long n,long long k)
{
    k=min(k,n-k);
    long long ans=1;
    for(int i=0;i<k;i++)
    {
        ans=ans*(n-i)/(i+1);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> beauty_num(n);
    for(int i=0;i<n;i++)
    {
        cin>>beauty_num[i];
    }
    sort(beauty_num.begin(),beauty_num.end());
    long long max_diff=beauty_num[n-1]-beauty_num[0];
    
    long long max_ele=*max_element(beauty_num.begin(),beauty_num.end());
    long long min_ele=*min_element(beauty_num.begin(),beauty_num.end());
    long long min_ele_count=count(beauty_num.begin(),beauty_num.end(),min_ele);
    long long max_ele_count=count(beauty_num.begin(),beauty_num.end(),max_ele);
    long long answer=((max_ele!=min_ele)?(min_ele_count*max_ele_count):unique_combination(min_ele_count,2));

    
    
    cout<<max_diff<<" "<<answer;
}