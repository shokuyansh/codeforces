#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int k;
	cin>>k;
	vector<int> Growth(12);
	
	for(int i=0;i<12;i++)
	{
		cin>>Growth[i];
		
	}
	
	int minimum_month=0;
	int sum=0;
	sort(Growth.begin(),Growth.end(),greater<int>());
	for(int i=0;i<12;i++)
	{
		if(sum>=k)
			break;
		else
		{	sum+=Growth[i];
			minimum_month++;
		}
	}

	if(sum>=k)
	{
		cout<<minimum_month;
	}
	
	else
		cout<<-1;
}


