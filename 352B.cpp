#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> sequence(n);
    map<int,pair<int,int>> get_element;
     vector<int> answer;
    map<int,bool> isAP;
    for(int i=0;i<n;i++)
    {
        cin>>sequence[i];
        int x=sequence[i];  
        
        if(get_element.find(x)==get_element.end()) //first occurance
        {       
            get_element[x]={i,-1};
            isAP[x]=true;
            
        }
        else
        {
            int diff=i-get_element[x].first;
            if(get_element[x].second==-1)
            {
                get_element[x].second=diff;
                
            }
            else if(diff!=get_element[x].second)
            {
                isAP[x]=false;
            }
            get_element[x].first=i;
        }
    }
        int count=0;
        for(auto &x:get_element)
        {
            if(isAP[x.first])
            {
                count++;
                answer.push_back(x.first);
                if(x.second.second==-1)
                {
                    answer.push_back(0);
                }
                else
                    answer.push_back(x.second.second);
            }
        } 
    cout<<count<<endl;
    for(int i=0;i<answer.size();i+=2)
    {
        cout<<answer[i]<<" "<<answer[i+1]<<endl;
    }

}