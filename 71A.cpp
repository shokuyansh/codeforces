#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string *strarray=new string[n];
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s.length()<=10)
           strarray[i]=s;
        else
        {
            int newlength=s.length()-2;
            stringstream ss;
            // string inbetween_length=to_string(newlength);
            string s1(1, s[0]);
            string s2(1, s[s.length() - 1]);
            ss<<s1<<newlength<<s2;
            strarray[i]=ss.str();

        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<strarray[i]<<endl;
    }
}