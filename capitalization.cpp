#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int c=s[0];
    s[0]=toupper(c);
    cout<<s;
}