#include <stdio.h>
#include "library.h"
// Problem statement 2
int main()
{
    point p1, p2;
    printf("Enter the latitude and longitude values of Bhopal : ");
    scanf("%f%f", &p1.latitude, &p1.longitude);
    printf("Enter the latitude and longitude values of Bangalore : ");
    scanf("%f%f", &p2.latitude, &p2.longitude);
    printf("Distance between two points is %0.3lf\n", find_distance(&p1, &p2));
    fflush(stdin);
    getchar();
    return 0;
}