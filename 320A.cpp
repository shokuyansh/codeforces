#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=-1;
	string s=to_string(n);
	int length=s.length();
	int i=0;
	while(i<length)
	{
		if(s[i]=='1' && s[i+1]=='4'&&s[i+2]=='4')
			i+=3;
		else if(s[i]=='1'&&s[i+1]=='4')
			i+=2;
		else if(s[i]=='1')
			i+=1;
		
		else
		{	flag=0;
			cout<<"NO";
			break;
		}

	}
	if(flag==-1)
		cout<<"YES";
}
