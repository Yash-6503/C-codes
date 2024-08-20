/*
1.
Write a C to take the value from the user as input the month 
number and print number of days in that month.
Using switch statement.
*/

#include<stdio.h>
void main()
{
    int month;
    mon:
    printf("\nEnter a Month (1-12): ");
    scanf("%d", &month);
    if(month <= 12 && month > 0)
    {
        switch(month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("\nMonth contains 31 Days.");
                break;

            case 2:
                printf("\nMonth contains 28 Days.");
                break;

            default:
                printf("\nMonth contains 30 Days.");
        }
    }
    else
    {
        printf("\nInvalid Month\n");
        goto mon;
    }
}

/*
Enter a Month (1-12): -10

Invalid Month

Enter a Month (1-12): 15

Invalid Month

Enter a Month (1-12): 6

Month contains 30 Days.
*/

/*
Enter a Month (1-12): 2
Month contains 28 Days.

Enter a Month (1-12): 5
Month contains 31 Days.
*/