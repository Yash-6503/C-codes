//Find area of Triangle

#include<stdio.h>
int main()
{
    float area, height, base;
    printf("\nEnter Height of Triangle: ");
    scanf("%f", &height);
    printf("\nEnter Base of Triangle: ");
    scanf("%f", &base);
    area = (height * base)/2;
    printf("\nArea of Triangle = %f", area);
    return 0;
}