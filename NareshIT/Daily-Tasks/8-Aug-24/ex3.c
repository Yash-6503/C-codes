/*
Write a C program to take days from user and 
find years, months, weeks and days 
*/

#include<stdio.h>
void main()
{
    long int days;
    long int year, month, week, d;
    printf("\nEnter Days: ");
    scanf("%ld", &days);

    year = days/365;

    month = (days % 365) / 30;

    week = (days % 365) % 30 / 7;

    d = (days % 365) % 30;


    printf("\nYears %ld", year);
    printf("\nMonths %ld", month);
    printf("\nWeeks %ld", week);
    printf("\nDays %ld", d);
}

/* Output
Enter Days: 500

Years 1
Months 4
Weeks 2
Days 15

Enter Days: 38

Years 0
Months 1
Weeks 1
Days 8

Enter Days: 8000

Years 21
Months 11
Weeks 0
Days 5
*/

