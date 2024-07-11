// Write a C Program to Print Prime Numbers From 1 to N

#include<stdio.h>

int main()
{
    int prime, n, i;
    printf("Enter upto which n number you wants to print the prime number: ");
    scanf("%d", &prime);

    for(i=1; i<=prime; i++)
    {
        if(i %2 == 1)
        {
            printf("%d ", i);
        }
    }
}