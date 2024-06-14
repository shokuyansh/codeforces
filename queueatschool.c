#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    char string[100];
    scanf("%s",&string);
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<strlen(string);j++)
        {
            if(string[j]=='B')
            {
                if(string[j+1]=='G')
                {   
                    char tempstr=string[j];
                    string[j]=string[j+1];
                    string[j+1]=tempstr;
                    j++;
                }
            }
        }
    }
    printf("%s",string);
}