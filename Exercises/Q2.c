// Write a C Program to Swap Two Numbers

#include<stdio.h>

int main()
{
    int first, second, temp;
    printf("\nEnter first number: ");
    scanf("%d", &first);
    printf("\nEnter second number: ");
    scanf("%d", &second);

    printf("\nfirst number is %d",first);
    printf("\nsecond number is %d",second);
    temp = first;
    first = second;
    second = temp;

    printf("\nAfter swapping first number is: %d", first);
    printf("\nAfter swapping second number is: %d", second);
}