//Write a C Program to Print the numbers pyramid

#include<stdio.h>

int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}