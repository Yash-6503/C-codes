//Find area of Rectangle

#include<stdio.h>
int main()
{
    float area, length, breadth;
    printf("\nEnter Length of Rectangle: ");
    scanf("%f", &length);
    printf("\nEnter Breadth of Rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("\nArea of Rectangle = %f", area);
    return 0;
}