/*
Write a C program to check whether the triangle is equilateral
, isosceles or scalene triangle.
*/

#include<stdio.h>
void main()
{
    int a, b, c;
    printf("\nEnter 3 sides of Triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c && c == a)
    {
        printf("\nTriangle is Equilateral");
    }
    else if(a == b || b == c || c == a)
    {
        printf("\nTriangle is Isosceles");
    }
    else{
        printf("\nTriangle is Scalene");
    }
}

/*
Enter 3 sides of Triangle: 5
5
5

Triangle is Equilateral
*/

/*
Enter 3 sides of Triangle: 5
4
5

Triangle is Isosceles
*/

/*
Enter 3 sides of Triangle: 1
5
2

Triangle is Scalene
*/