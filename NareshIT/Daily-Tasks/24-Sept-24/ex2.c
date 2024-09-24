/*
Que 2 : Write a C program to check if a given year is a leap year or not using function.
------

-> create int main() function
-> create bool isLeapYear(int year) function. this function will take year as parameter suppied by main function and will check the year is leap year or not. if year is leap then return true otherwise false.

Sample input : Enter a year: 2024

Sample output : 2024 is a leap year.
*/

#include<stdio.h>
#include<stdbool.h>
bool isLeapYear();

void main()
{
    int year;
    printf("\nEnter year: ");
    scanf("%d", &year);

    if(isLeapYear(year))
    {
        printf("\n%d year is a Leap year", year);
    }else{
        printf("\n%d year is not Leap year", year);
    }
}

bool isLeapYear(int year)
{
    if((year%4==0 && year%100!=0) || year%400 == 0)
    {
        return true;
    }else{
        return false;
    }
}

/*
Enter year: 1999
1999 year is not Leap year

Enter year: 2000
2000 year is a Leap year
*/