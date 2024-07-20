#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> prices(n);
	for(int i=0;i<n;i++)
	{
		cin>>prices[i];
	}
	sort(prices.begin(),prices.end());
	
	int i=0;
	int money_earned=0;
	while(i<m)
	{	if(prices[i]<0)
		{
			
			money_earned+=(prices[i]*-1);
		}
		else
			break;
	i++;
	}
	cout<<money_earned;
}

