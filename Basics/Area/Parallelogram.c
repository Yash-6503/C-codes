//Find area of Parallelogram

#include<stdio.h>
int main()
{
    float area, height, base;
    printf("\nEnter base: ");
    scanf("%f",&base);
    printf("\nEnter height: ");
    scanf("%f",&height);
    area = base * height;
    printf("\nArea of Parellogram = %f", area);
    return 0;
}