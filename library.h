// All function and structure declarations are present over here
typedef struct vertice
{
   float x1,y1;
}vertice;
typedef struct point
{
    float latitude,longitude;
}point;
double find_distance(point*p,point*);
double find_angle(int,int,int,int);
double find_area(vertice*,vertice*,vertice*);