/*
Write a C program to take 2 characters from user and prints its ASCII value
also display its Sum
*/

#include<stdio.h>
void main()
{
    char a, b;
    int sum;
    printf("\nEnter 2 characters: ");
    scanf("%c %c", &a, &b);
    printf("\n%c ASCII value is %d", a, a);
    printf("\n%c ASCII value is %d", b, b);
    sum = a + b;
    printf("\nSum of %c[%d] and %c[%d] is %d\n", a, a, b, b, sum);
}

/* Output
Enter 2 characters: a
b

a ASCII value is 97
b ASCII value is 98
Sum of a[97] and b[98] is 195

Enter 2 characters: d
d

d ASCII value is 100
d ASCII value is 100
Sum of d[100] and d[100] is 200
*/