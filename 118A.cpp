#include<iostream>
#include<string>
using namespace std;
int main()
{
	string original_string;
	cin>>original_string;
	string new_string;
	int length=original_string.length();
	for(auto ch : original_string)
		
	{	
		if(tolower(ch)=='a' ||tolower(ch)=='e'|| tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u'||tolower(ch)=='y')
		{
			continue;
		}
		else 
		{
			new_string.push_back('.');
			new_string.push_back(tolower(ch));
		}
	}
	cout<<new_string;
}	
		
