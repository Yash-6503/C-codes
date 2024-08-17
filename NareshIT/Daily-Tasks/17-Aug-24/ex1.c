/*
1.
Write a C Program to check whether the triangle is an equilateral, 
isosceles or scalene triangle. Using the if-else statement.
Take the inputs from the user.

Case-1 :
Enter the lengths of the sides of the triangle:
Side 1: 5
Side 2: 5
Side 3: 5
The triangle is an equilateral triangle.

Case-2:
Enter the lengths of the sides of the triangle:
Side 1: 4
Side 2: 5
Side 3: 4
The triangle is an isosceles triangle.

Case-3:
Enter the lengths of the sides of the triangle:
Side 1: 3
Side 2: 4
Side 3: 5
The triangle is a scalene triangle.
*/

#include<stdio.h>
void main()
{
    int side1, side2, side3;
    printf("\nEnter 3 sides of Triangle: ");
    scanf("%d %d %d",&side1, &side2, &side3);

    if(side1 == side2 && side2 == side3 && side3 == side1)
    {
        printf("\nThe Triangle is equilateral Triangle");
    }
    else if(side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("\nThe Triangle is Isosceles Triangle");
    }
    else
    {
        printf("\nThe Triangle is Scalene Triangle");
    }
}


/*
Enter 3 sides of Triangle: 5
5
5

The Triangle is equilateral Triangle
*/

/*
Enter 3 sides of Triangle: 5
5
4

The Triangle is Isosceles Triangle
*/

/*
Enter 3 sides of Triangle: 1
4
5

The Triangle is Scalene Triangle
*/