/*
Write a C program to print sum of digits entered by user
*/

#include<stdio.h>
void main()
{
    int n, m, digit, sum=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    m = n;
    while(m!=0)
    {
        digit = m % 10;
        sum += digit;
        m = m / 10;
    }
    printf("\nSum = %d", sum);
}

/*
Enter Number: 123
Sum = 6

Enter Number: 12345
Sum = 15

Enter Number: 5555
Sum = 20
*/