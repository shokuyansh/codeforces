#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int redCount=0;
    int greenCount=0;
    int blueCount=0;
    cin>>n;
   
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
            {
               while(s[i+1]=='R')
               {
                    redCount++;
                    i++;
               }
            }        
            
        else if(s[i]=='G')
            {
               while(s[i+1]=='G')
               {
                    greenCount++;
                    i++;
               }
            }     
        else if(s[i]=='B')
             {
               while(s[i+1]=='B')
               {
                    blueCount++;
                    i++;
               }
            }     
    }
    cout<<redCount+greenCount+blueCount;

}