/*
2.
Write a C program to find the given number is a step number or not.
If the adjacent digit difference is 1 then it is a step number.
*/

#include<stdio.h>
void main()
{
    int n, r1, r2;
    printf("\nEnter number: ");
    scanf("%d", &n);
    while(n>9)
    {
        r1=n%10;
        n=n/10;
        r2=n%10;
        if(!(r1-r2==1 || r2-r1==1))
        {
            printf("\nNot a Step number");
            return;
        }
    }
    printf("\nStep number");
}

/*
Enter number: 1234
Step number

Enter number: 12245
Not a Step number

Enter number: 54321
Step number
*/