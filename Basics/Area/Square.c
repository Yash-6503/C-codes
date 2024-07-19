//Find Area of sqauare

#include<stdio.h>
int main()
{
    float area, side;
    printf("\nEnter side of square: ");
    scanf("%f",&side);
    area = (side * side);
    printf("Area of Square = %f", area);
    return 0;
}