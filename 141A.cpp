#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string s;
    s=s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    if(s3==s)
        cout<<"YES";
    else
        cout<<"NO";

}