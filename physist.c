#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int f=0;
    
    scanf("%d",&n);
    int result[3]={0,0,0};
    for(int i=0;i<n;i++)
    {   int *a;
        a=(int *)calloc(3, sizeof(int));
       
        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
       
        for(int j=0;j<3;j++)
        {
            result[j]+=a[j];
        }
            
    }
    for(int j=0;j<3;j++)
        {
            if(result[j]!=0)
                f=1;    
        }
    if(f==0)
        printf("YES");
    else
        printf("NO");
return 0;
}
