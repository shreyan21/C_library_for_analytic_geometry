// All function definitions are present over here
#include <stdio.h>
#include <math.h>
#include"library.h"
#define PI 3.14;

double find_angle(int a1, int b1, int a2, int b2)
{
    double x = atan((a2 * b1 - a1 * b2) / (a1 * a2 + b1 * b2)) * 180 / PI;
    return x;
}
double find_area(vertice *v1, vertice *v2, vertice *v3)
{

    double area;
    area = (v1->x1 * (v2->y1 - v3->y1) + v2->x1 * (v3->y1 - v1->y1) + v3->x1 * (v1->y1 - v2->y1));
    area /= 2;
    if (area < 0)
    {
        return -area;
    }
    return area;
}
double find_distance(point*p1,point*p2)
{
    double distance;
    distance=pow((p1->latitude-p1->longitude),2)+pow((p2->latitude-p2->latitude),2);
    distance/=2;
    return distance;
}