#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int fingers_count=0;
    int x;
    while(temp--)
    {
        
        cin>>x;
        fingers_count+=x;
    }
    ++n;
    // cout<<fingers_count;
    int count=0;
    
    for (int i = 1; i <= 5; ++i) {
        if ( (fingers_count + i) % n != 1) {
            ++count;
        }
    }


   cout<<count;
}