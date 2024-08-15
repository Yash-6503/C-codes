/*
4.
Write a program in C to take two integers as input and print whether the
 first one is divisible by the second one using if-else statement.

Input as :
Enter the first integer: 20
Enter the second integer: 5

Output as:
20 is divisible by 5
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter a & b value: ");
    scanf("%d%d",&a, &b);
    if(a %b == 0)
    {
        printf("\n%d is Divisible by %d", a, b);
    }
    else{
        printf("\n%d is not Divisible by %d", a,b);
    }
}


/*
Enter a & b value: 20
5

20 is Divisible by 5
*/

/*
Enter a & b value: 30
7

30 is not Divisible by 7
*/