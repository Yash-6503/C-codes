/*
5.
Program to take the hours and minutes as input by the user and the show 
that whether it is AM or PM using if-else statement

Case-1:
Enter the hours (in 24-hour format): 10
Enter the minutes: 30

The time is 10:30 AM

Case-2:
Enter the hours (in 24-hour format): 19
Enter the minutes: 45

The time is 07:45 PM
*/

#include<stdio.h>
void main()
{
    int hours, minutes, convert;
    printf("\nEnter the hours (in 24-hour format): ");
    scanf("%2d", &hours);
    printf("\nEnter the minutes: ");
    scanf("%2d", &minutes);
    if(hours <= 11 && minutes < 60)
    {   
        printf("\nThe Time is %d:%d AM", hours, minutes);
    }
    else if(hours <= 23 && minutes < 60)
    {
        convert = hours - 12;
        printf("\nThe Time is %d:%d PM", convert, minutes);
    }
    else if(hours == 24 && minutes < 60)
    {
        convert = hours - 12;
        printf("\nThe Time is %d:%d AM", convert, minutes);
    }
    else
    {
        printf("\nPlease Enter valid Hours and minutes");
    }
}


/*
Enter the hours (in 24-hour format): 10

Enter the minutes: 30

The Time is 10:30 AM
*/

/*
Enter the hours (in 24-hour format): 19

Enter the minutes: 45

The Time is 7:45 PM
*/