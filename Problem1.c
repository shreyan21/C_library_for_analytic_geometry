#include<stdio.h>
#include "library.h"
// Problem statement 1
int main()
{
    double angle_at_chowk;
    int a1,b1,a2,b2;
    printf("\nEnter coefficients for road \"ABC\" equation : ");
    scanf("%d%d",&a1,&b1);
    printf("\nEnter coefficients for road \"XYZ\" equation : ");
    scanf("%d%d",&a2,&b2);

    angle_at_chowk=find_angle(a1,b1,a2,b2);
    printf("\nAngle at which these two roads met is %0.2lf degrees\n",angle_at_chowk);
    getchar();
    return 0;
}