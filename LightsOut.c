#include<stdio.h>
void onoroff(int a[3][3])
{   int count[3][3]={0};
    // int output[3][3];
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]%2==0)
            {
                count[i][j]+=2;
            }
            else
            {
                count[i][j]++;
                if(i==1 && j==1)
                {
                count[1][2]++;
                count[1][0]++;
                count[2][1]++;
                count[0][1]++;
                }
                else if(i==0&&j==0)
                {
                    count[0][1]++;
                     count[1][0]++;
                }
                else if(i==0&&j==1)
                {
                    count[0][2]++;
                    count[0][0]++;
                    count[1][1]++;
                }
                else if(i==0&&j==2)
                {
                    count[0][1]++;
                    count[1][2]++;
                }
                else if(i==1 && j==0)
                {
                    count[0][0]++;
                    count[2][0]++;
                    count[1][1]++;
                }
                else if(i==1 && j==2)
                {
                    count[0][2]++;
                    count[2][2]++;
                    count[1][1]++;
                }
                else if(i==2 && j==0)
                {
                    count[2][1]++;
                    count[1][0]++;
                    
                }
                else if(i==2 && j==1)
                {
                    count[2][0]++;
                    count[2][2]++;
                    count[1][1]++;
                }
                else if(i==2 && j==2)
                {
                    count[1][2]++;
                    count[2][1]++;
                    
                }
            }
        }
    }
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(count[i][j]%2==0)
           {
                printf("1");
           }
           else
            printf("0");
        }
     printf("\n");
    }
}
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    onoroff(a);
    

}