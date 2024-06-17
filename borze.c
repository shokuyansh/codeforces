#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    char result[200];
    int k=0;
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            result[k]='0';
            k++;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                result[k]='1';
                k++;
                i++;
            }
            else if(s[i+1]=='-')
            {
                result[k]='2';
                k++;
                i++;
            }
        }
    }
    result[k] = '\0';
    int i=0;
    while(result[i]!='\0')
    {
       printf("%c",result[i]);
        i++;
    }
 return 0;
    
}