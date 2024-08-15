/*
2.
Program to take a value from the user as input all sides of a triangle 
and check whether the triangle is valid or not. Using if-else.

Case-1
-----------

Enter the lengths of the sides of the triangle:
Side 1: 5
Side 2: 7
Side 3: 9

The triangle is valid.

Case-2
------------

Enter the lengths of the sides of the triangle:
Side 1: 3
Side 2: 4
Side 3: 9

The triangle is not valid.
*/

#include<stdio.h>
void main()
{
    int side1, side2, side3, valid;
    printf("\nEnter 3 sides of Triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    valid = side1 + side2 + side3;
    if(valid %3 == 0)
    {
        printf("\nTriangle is Valid");
    }
    else{
        printf("\nTriangle is not Valid");
    }
}

/*
Enter 3 sides of Triangle: 5
7
9

Triangle is Valid
*/

/*
Enter 3 sides of Triangle: 3
4
9

Triangle is not Valid
*/

/*
Enter 3 sides of Triangle: 10
20
30

Triangle is Valid
*/