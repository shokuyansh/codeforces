#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int first_team_count=0;
	int second_team_count=0;
	string input,team1,team2;
	while(n--)
	{
		cin>>input;
		if(first_team_count==0)
		{
			first_team_count++;
			team1=input;
		}
		else if(input!=team1)
		{
			second_team_count++;
			team2=input;
		}
		else if(input==team1)
		{
			first_team_count++;
		}
	}
	if(first_team_count>second_team_count)
		cout<<team1;
	else
		cout<<team2;
}
