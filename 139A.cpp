#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
   
    int i=0;
   
    vector<int> vec;
    int input;
    for(int i=0;i<7;i++)
    {
        cin>>input;
        vec.push_back(input);
    }
    while(true)
    {   if(i==7)
            i=0;
        
        n=n-vec[i];
        i++;
        if(n<=0)
        {    
            cout<<i;
            break;
        }
    }
    


}