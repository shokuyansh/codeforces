#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string t;
	cin>>t;
	string s;
	cin>>s;
	reverse(t.begin(),t.end());
	if(t==s)
		cout<<"YES";
	else
		cout<<"NO";
}
