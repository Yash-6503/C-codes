/*
5.
Write a C program that takes an hour in the 24-hour format as input and
identifies the time of day as "Morning," "Afternoon," "Evening," or 
"Night." Implement this using a series of if statements. Ensure that
the program also checks for invalid input, displaying an appropriate
message if the entered hour is not within the valid range (0-23). 
Present the program with a suitable title and header for clarity.

Input as :
Enter the hour (24-hour format): 13

Output as :
It's Afternoon.
*/

#include<stdio.h>
void main()
{
    int hour;
    printf("\nEnter the hour (24-hour format): ");
    scanf("%d", &hour);
    if(hour <= 11)
    {
        printf("\nIt's Morning");
    }
    else if(hour <= 17)
    {
        printf("\nIt's Afternoon");
    }
    else if(hour <= 20)
    {
        printf("\nIt's Evening");
    }
    else if(hour <= 24)
    {
        printf("\nIt's Night");
    }
    else
    {
        printf("\nInvalid time\nEnter the hour between 24-hour format");
    }
}


/*
Enter the hour (24-hour format): 8
It's Morning

Enter the hour (24-hour format): 12
It's Afternoon

Enter the hour (24-hour format): 18
It's Evening

Enter the hour (24-hour format): 24
It's Night

Enter the hour (24-hour format): 25
Invalid time
Enter the hour between 24-hour format
*/