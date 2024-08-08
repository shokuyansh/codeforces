#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cin>>rows>>columns;
    char input[rows][columns];
    int i(0),j(0);
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>input[i][j];
            
        }
        
    }
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(input[i][j]=='.')
            {
                if((i+j)%2==0)
                    input[i][j]='B';
                else
                    input[i][j]='W';
            }
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
                cout<<input[i][j];
        }
        cout<<endl;
    }

}