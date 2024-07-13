// Write a C Program for Area And Perimeter Of Rectangle 

#include<stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("\nEnter Length of Rectangle: ");
    scanf("%d", &length);
    printf("\nEnter Breadth of Rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("\nArea of Rectangle is %d", area);
    perimeter = 2*(length+breadth);
    printf("\nPerimeter of Rectangle is %d", perimeter);
    return 0;
}