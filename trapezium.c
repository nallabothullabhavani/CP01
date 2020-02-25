#include<stdio.h>
float main()
{
float a,b,h,area;
printf("put the value of a");
scanf("%f", &a);
printf("put the value of b");
scanf("%f", &b);
printf("put the value of h");
scanf("%f", &h);
area=0.5*(a+b)*h;
printf("area of trapezium %f \n", area);
}
