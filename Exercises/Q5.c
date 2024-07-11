// Write a C Program to Check Whether a Number is Positive, Negative, or Zero

#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a Number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("\nNumber is Positive");
    }
    else
    {
        printf("\nNumber is Negative");
    }
    if(num == 0)
        printf("\nNumber is Zero");

    return 0;
}