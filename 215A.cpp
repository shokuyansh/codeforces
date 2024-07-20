#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> pedal(n);
	
	for( int i=0;i<n;i++)
	{
		cin>>pedal[i];
	}
	int m;
	cin>>m;
	vector<int> back_pedal(m);
	for(int i=0;i<m;i++)
	{
		cin>>back_pedal[i];
	}
	int max=0;
	int integer;
	int count=0;
	for(auto a:pedal)
	{
		for(auto b:back_pedal)
		{
			if(b%a==0)
			{
				integer=b/a;
				if(integer>max)
				{
					count=0;
					count++;
					max=integer;
				}
				else if(integer==max)
				{
					count++;
				}
			}
		}
	}
	cout<<count;
}			
