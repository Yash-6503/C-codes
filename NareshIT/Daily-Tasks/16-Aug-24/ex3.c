/*
3.
Write a C program to enter month number between(1-12) and print 
number of days in month using if else. How to print number of days 
in a given month using if else in C programming. Logic to find 
number of days in a month in C program. 

Input as :
Enter month number (1-12): 4

Output as :
Number of days: 30
*/

#include<stdio.h>
void main()
{
    int month;
    printf("\nEnter Month: ");
    scanf("%d",&month);
    if(month <= 12)
    {
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            printf("\nNumber of days: 31");
        }
        else if(month == 2)
        {
            printf("\nNumber of days: 28");
        }
        else
        {
            printf("\nNumber of days: 30");
        }
    }
    else
    {
        printf("\nInvalid Month\nPlease enter month between 1-12\n");
    }
}


/*
Enter Month: 4
Number of days: 30

Enter Month: 2
Number of days: 28

Enter Month: 12
Number of days: 31
*/