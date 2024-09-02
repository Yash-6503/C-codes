/*
Write a C Program to find prime numbers between 1 to 20
*/

#include<stdio.h>
void main()
{
    int n, i, j, count;
    // printf("\nEnter number: ");
    // scanf("%d", &n);
    for (i = 1; i <= 20; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if(i%j == 0)
            { 
                count++;
            }
        }
        if(count == 2)
        {
            printf("\n%d is a prime number", i);
        }
    }
}   