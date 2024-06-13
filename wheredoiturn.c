#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double slope(int a1, int a2, int b1, int b2) {
    if (b1 == a1) {
        // Vertical line, return a large value to simulate infinity
        return INFINITY;
    }
    return (double)(b2 - a2) / (b1 - a1);
}

float area(int a1, int a2, int b1, int b2, int c1, int c2) {
    float a = 0.5 * abs(a1 * (b2 - c2) + b1 * (c2 - a2) + c1 * (a2 - b2));
    return a;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);

    if (area(x1, y1, x2, y2, x3, y3) == 0.0) {
        printf("TOWARDS");
    } else {
        double slope1 = slope(x1, y1, x2, y2);
        double slope2 = slope(x2, y2, x3, y3);

        if (slope1 == 0 && isinf(slope2)) {
            if (x3 < x2) {
                printf("LEFT");
            } else {
                printf("RIGHT");
            }
        } else if (isinf(slope1) && slope2 == 0) {
            if (y3 < y2) {
                printf("LEFT");
            } else {
                printf("RIGHT");
            }
        } else if (fabs(slope1 * slope2 + 1) < 1e-9) {  // Check if slopes are perpendicular
            if (y3 > y2) {
                printf("LEFT");
            } else {
                printf("RIGHT");
            }
        }  
        else if(slope(x1,y1,x2,y2)*slope(x2,y2,x3,y3)==-1)
    {
        if(y3>y2)
        {
            printf("LEFT");
        }
        else
            printf("RIGHT");
    }

    }

    return 0;
}
