/*
3.
Write a C program that takes a number as input from the user
and determine whether the number is a neon number or not.
Develop it by using while loop.

Sample Input
input 9

Sample Output
9 is neon number
*/

#include<stdio.h>
void main()
{
    int n, sqr, sum, m;
    printf("\nEnter number: ");
    scanf("%d", &n);
    sqr = n*n;
    m=sqr;
    sum = (n%10)+(n/10);
    if(sum == n)
    {
        printf("\nNeon Number");
    }
    else{
        printf("\nNot a Neon Number");
    }
}

/*
Enter number: 9
Neon Number

Enter number: 1
Neon Number

Enter number: 10
Not a Neon Numbe
*/