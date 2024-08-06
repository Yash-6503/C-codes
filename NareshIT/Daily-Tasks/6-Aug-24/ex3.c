/*
Write a program to take input for seconds from the user ,
 And convert it into Hour, Minutes , Second format.
*/

#include<stdio.h>
void main()
{
    int sec;
    int hours, minutes, seconds;
    printf("\nEnter seconds: ");
    scanf("%d",&sec);

    hours = sec / 3600;

    minutes = (sec % 3600) / 60;

    seconds = (sec % 3600) % 60;

    printf("\n%d seconds contains %d hours, %d minutes and %d seconds.", sec, hours, minutes, seconds);
}

/*
Enter seconds: 3671
3671 seconds contains 1 hours, 1 minutes and 11 seconds

Enter seconds: 3600
3600 seconds contains 1 hours, 0 minutes and 0 seconds
*/