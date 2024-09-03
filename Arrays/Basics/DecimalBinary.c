/*
Write a C program to convert Decimal number 
into binary code using array
*/

#include<stdio.h>
void main()
{
    int a[16] = {0}, n, i, j;
    printf("\nEnter Decimal Number: ");
    scanf("%d", &n);
    for(i=0; n!=0; i++, n=n/2)
    {
        a[i] = n%2;
    }
    printf("\nBinary Code is: ");
    for(i=15; i>=0; i--)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter Decimal Number: 20
Binary Code is:  0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 0

Enter Decimal Number: 10
Binary Code is:  0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 0
*/