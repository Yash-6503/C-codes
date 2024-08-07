/*
Que 6 : Write a 'C' program to take the number of days
 and convert into (days:months:years)

Sample input : int days = 500

Sample Output :  1 year 4 month and 15 days.
*/

#include<stdio.h>
void main()
{
    int days;
    int year, month, day;
    printf("\nEnter days: ");
    scanf("%d", &days);

    year = days / 365;

    month = (days % 365) / 30;

    day = (days % 365) % 30;

    printf("\n%d year %d month and %d days", year, month, day);
}

/* Output
Enter days: 500
1 year 4 month and 15 days

Enter days: 600
1 year 7 month and 25 days

Enter days: 730
2 year 0 month and 0 days

Enter days: 365
1 year 0 month and 0 days
*/