#include<iostream>
#include<string>
using namespace std;
int main()
{
    string orgy;
    cin>>orgy;
    if(orgy.length()<7)
     {   cout<<"NO";
        return 0;
     }
    bool found=false;
    for(int i=0;i<=orgy.length()-7;i++)
    {
       if(orgy[i]=='0'&&orgy.substr(i,7)=="0000000"||orgy[i]=='1'&&orgy.substr(i,7)=="1111111")
        {    cout<<"YES";
                found=true;
                break;
        }
    }
    if(!found)
        cout<<"NO";
return 0;
}