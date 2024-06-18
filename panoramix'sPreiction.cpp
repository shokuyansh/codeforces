#include<iostream>
using namespace std;
int arr[15];
bool isprime(int n)
{
    if(n<=1)
        return false;
    else if(n<=3)
        return true;
    else if(n%3==0||n%2==0)
        return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
void primelist()
{   
    int n=2;
    int  k=0;
    for(int i=2;i<=50;i++)
    {
        if(isprime(i))
        {
            arr[k]=i;
            k++;
        }
    }

}
int main()
{
    int n;
    int m;
    int mark;
    cin>>n>>m;

    primelist();
    for(int i=0;i<15;i++)
    {
        if(n==arr[i])
        {    mark=i;
            break;}
    }
    if(m==arr[mark+1])
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
