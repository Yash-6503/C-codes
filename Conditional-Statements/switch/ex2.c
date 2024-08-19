/*
Finding a week-day name using switch statement
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter weekday a number (1-7): ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("\nSunday");
                break;
        case 2: printf("\nMonday");
                break;
        case 3: printf("\nTuesday");
                break;
        case 4: printf("\nWednesday");
                break;
        case 5: printf("\nThursday");
                break;
        case 6: printf("\nFriday");
                break;
        case 7: printf("\nSaturday");
                break;
        default: printf("\nInvalid weekday number");
                break;
    }
}


/*
Enter weekday a number (1-7): 1
Sunday

Enter weekday a number (1-7): 5
Thursday

Enter weekday a number (1-7): 7
Saturday

Enter weekday a number (1-7): 10
Invalid weekday number
*/