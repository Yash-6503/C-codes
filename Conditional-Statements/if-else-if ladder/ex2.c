//Find a year is leap year or common year

#include<stdio.h>
void main()
{
    int year;
    printf("\nEnter Year: ");
    scanf("%d", &year);
    if(year%4 == 0 && year%100 !=0 ||  year%400 == 0)
    {
        printf("\nLeap year");
    }
    else
    {
        printf("\nCommon year");
    }
}

/*
Enter Year: 2000
Leap year

Enter Year: 1999
Common year

Enter Year: 2024
Leap year

Enter Year: 2025
Common year
*/
