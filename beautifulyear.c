//271 A - BEAUTIFUL YEAR
#include<stdio.h>
int diff(int year)
{    int a[4];
    for(int i=0;i<4;i++)
    {    a[i]=year%10;
         year=year/10;
    }
    if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
    {
        return 1;
    }
return 0;
}

int main()
{
    int year;
    scanf("%d",&year);
    for(int i=year+1 ;i<=9000;i++)
    {
        if(diff(i)==1)
        {
            printf("%d",i);
            break;
        }
    }
}
