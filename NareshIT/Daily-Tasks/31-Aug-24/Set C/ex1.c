/*
Write a c program to find the sum of first and
last digit of any number
*/

#include<stdio.h>
void main()
{
    int n, m, r, last = 0, first = 0, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    m = n;
    while(m!=0)
    {
        r = (r * 10) + (m % 10);
        m = m / 10;
    }
    last = n % 10;
    first = r%10;
    sum = last + first;
    printf("\nSum of first & last digit (%d + %d) = %d", first, last, sum);
}

/*
Enter Number: 12345
Sum of first & last digit (1 + 5) = 6

Enter Number: 555
Sum of first & last digit (5 + 5) = 10
*/