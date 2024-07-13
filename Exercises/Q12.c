//Write a C program to check if the year is Leap year or not

#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter year: ");
    scanf("%d",&year);
    if(year %400 == 0)
    {
        printf("\n%d is Leap Year",year);
    }
    else if(year %100 == 0)
    {
        printf("\n%d is Not a Leap Year",year);
    }
    else if(year %4 == 0)
    {
        printf("\n%d is Leap Year",year);
    }
    else{
        printf("\n%d is Not a Leap Year",year);
    }
    return 0;
}