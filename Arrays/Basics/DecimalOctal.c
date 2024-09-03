/*
Write a C program to convert Decmal number to Octal code
using arrays
*/

#include<stdio.h>
void main()
{
    int n, a[16]={0}, i, j;
    printf("\nEnter Decimal Number: ");
    scanf("%d", &n);
    for(i=0; n!=0; i++, n=n/8)
    {
        a[i] = n%8;
    }

    printf("\nOctal code is: ");
    for(i=15; i>=0; i--)
    {
        printf("%2d", a[i]);
    }

}

/*
Enter Decimal Number: 20
Octal code is:  0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 4

Enter Decimal Number: 10
Octal code is:  0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 2
*/