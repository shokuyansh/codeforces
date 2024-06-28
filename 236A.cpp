#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    string name;
    cin>>name;
    set<char> uniqueLetter;
    for(char c : name)
    {
        uniqueLetter.insert(c);
    }
    if(uniqueLetter.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";



}