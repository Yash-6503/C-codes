//Find Area of circle

#include<stdio.h>
int main()
{
    float area, radius, pi = 3.14;
    printf("\nEnter Radius of Circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("\nArea of Circle = %f", area);
    return 0;
}