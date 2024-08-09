/*
2.Write a C program to find the given number is even or odd. 
Take the input from the console by using scanf().
Sample Input
Enter a number : 12

Enter a number : 13

Sample Output
12 is an Even number.

13 is an Odd number.
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\n%d is Even", n);
    }
    else
    {
        printf("\n%d is Odd", n);
    }
}

/*  Output
Enter a number: 12
12 is Even

Enter a number: 13
13 is Odd
*/