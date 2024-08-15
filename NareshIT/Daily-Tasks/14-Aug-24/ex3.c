/*
3.
Design a program that takes a year as input and determines whether 
it is a leap year or not. Consider the leap year rules 
(divisible by 4, but not divisible by 100 unless also divisible by 400)
 and use if-else statements to provide the appropriate output.

Input as : 
Enter year : 2020

Output as : 
It is a leap year.
*/

#include<stdio.h>
void main()
{
    int year;
    printf("\nEnter year: ");
    scanf("%d", &year);
    if(year %4 == 0 && year %100 != 0 || year %400 == 0)
    {
        printf("\nIt is a Leap year");
    }
    else
    {
        printf("\nIt is not a Leap year");
    }
}

/*
Enter year: 2000
It is a Leap year

Enter year: 2026
It is not a Leap year

Enter year: 1900
It is not a Leap year

Enter year: 2024
It is a Leap year
*/