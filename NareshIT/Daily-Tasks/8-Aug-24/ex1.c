/*
Write a C program to calculate Area of Square & Circle
*/

#include<stdio.h>
void main()
{
    const float pi = 3.14;
    float areaC;
    int side, radius, areaS;
    printf("\nEnter Radius of Circle: ");
    scanf("%d", &radius);
    printf("\nEnter side of Square: ");
    scanf("%d", &side);
    areaC = pi * radius * radius;
    areaS = side * side;
    printf("\nArea of Circle is %.2f", areaC);
    printf("\nArea of Square is %d", areaS);
}

/* Output
Enter Radius of Circle: 12
Enter side of Square: 5

Area of Circle is 452.16
Area of Square is 25
*/