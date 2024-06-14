#include<stdio.h>

void result(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double cp=(y3-y1)*(x2-x1)-(y2-y1)*(x3-x1);
    if(cp==0)
        printf("TOWARDS");
    else if(cp>0)
        printf("LEFT");
    else if (cp<0)
        printf("RIGHT");
    
}
int main()
{
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    scanf("%lf%lf",&x3,&y3);

    result(x1,y1,x2,y2,x3,y3);
return 0;

}