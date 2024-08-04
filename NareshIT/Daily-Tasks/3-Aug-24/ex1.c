/*

1. Write a C program to calculate and print the area of a square and rectangle.

Side of square is : 5

Length and breadth of rectanngle is : 4 , 5

*/

#include<stdio.h>
void main()
{
    int side, length, breadth, areaS, areaR;
    printf("\nEnter side of Square: ");
    scanf("%d", &side);
    printf("\nEnter Length of Rectangle: ");
    scanf("%d", &length);
    printf("\nEnter Breadth of Rectangle: ");
    scanf("%d", &breadth);
    areaS = side * side;
    areaR = length * breadth;
    printf("\nArea of Square is %d", areaS);
    printf("\nArea of Rectangle is %d\n", areaR);
}

/*output
Enter side of Square: 5

Enter Length of Rectangle: 5

Enter Breadth of Rectangle: 4

Area of Square is 25
Area of Rectangle is 20
*/