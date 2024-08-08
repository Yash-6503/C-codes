// Program to find time in hours, minutes and seconds but take input as seconds from user

#include<stdio.h>
void main()
{
    int sec;
    int hours, minutes, seconds;

    printf("\nEnter seconds: ");    
    scanf("%d", &sec);

    hours = sec / 3600;

    minutes = sec % 3600 / 60;

    seconds = sec % 3600 % 60;

   printf("\n%d seconds contains %d Hour(s), %d Minute(s), %d Seconds(s)", sec, hours, minutes, seconds);
}

/* output
Enter seconds: 3800
3800 seconds contains 1 Hour(s), 3 Minute(s), 20 Seconds(s)

Enter seconds: 5000
5000 seconds contains 1 Hour(s), 23 Minute(s), 20 Seconds(s)
*/