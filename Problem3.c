#include<stdio.h>
#include"library.h"
// Problem statement 3
int main()
{
    vertice v1,v2,v3;
    printf("Enter the coordinates of first vertice : ");
    scanf("%f%f",&v1.x1,&v1.y1);
    
    printf("Enter the coordinates of second vertice : ");
    scanf("%f%f",&v2.x1,&v2.y1);

    printf("Enter the coordinates of third vertice : ");
    scanf("%f%f",&v3.x1,&v3.y1);
    printf("Area of the triangle is %0.3lf\n",find_area(&v1,&v2,&v3));
    fflush(stdin);
    getchar();
    return 0;


    
}