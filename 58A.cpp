#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char hello[]={'h','e','l','l','o'};
    
    int counter=0;

    for(auto c:s)
    {
        if(c==hello[counter])
        {
            counter++;
        }
    }
    if(counter==5)
        cout<<"YES";
    else
        cout<<"NO";
}