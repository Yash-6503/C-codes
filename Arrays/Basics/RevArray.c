/*
Write a C program to reverse an array without
using a third variable
*/

#include<stdio.h>
void main()
{
    int n, a[100], i;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n/2; i++)
    {
        a[i] = a[i] + a[n-i-1];
        a[n-i-1] = a[i] - a[n-i-1];
        a[i] = a[i] - a[n-i-1];
    }
    printf("\nReverse Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%4d", a[i]);
    }
}

/*
Enter Number: 5

Enter 5 elements: 1
2
3
4
5

Reverse Array is:    5   4   3   2   1
*/

/*
Enter Number: 5

Enter 5 elements: 30
50
10
40
20

Reverse Array is:   20  40  10  50  30
*/