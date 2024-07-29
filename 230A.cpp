#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int kirito_strength,num_of_dragon;
    cin>>kirito_strength>>num_of_dragon;
    vector<int> dragon_Strength(num_of_dragon);
    vector<int> bonus(num_of_dragon);
    for(int i=0;i<num_of_dragon;i++)
    {
        cin>>dragon_Strength[i]>>bonus[i];
    }
   
    for(int i=0;i<num_of_dragon;i++)
    {   for(int j=0;j<num_of_dragon;j++)
        if(kirito_strength>dragon_Strength[j])
         {   kirito_strength+=bonus[j];
            dragon_Strength[j]=0;
            bonus[j]=0;
        }
    }
    bool all_elements=all_of(dragon_Strength.begin(),dragon_Strength.end(),[](int i){return i==0;});
    if(all_elements)
        cout<<"YES";
    else
        cout<<"NO";


}