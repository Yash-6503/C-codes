/*
Que 1 : Write a program in C to find the maximum number
between two numbers using a pointer.
-------

Sample input : first number : 5
               second number : 6

Sample output : 6 is the maximum number.
*/

#include<stdio.h>
void main()
{
    int a, b;
    int *p, *q;
    printf("\nEnter a value: ");
    scanf("%d", &a);
    printf("\nEnter b value: ");
    scanf("%d", &b);

    p=&a;
    q=&b;

    if(*p > *q)
    {
        printf("\n%d is the maximum number", *p);
    }
    else if(*p == *q)
    {
        printf("\nBoth are equal numbers");
    }
    else
    {
        printf("\n%d is the maximum number", *q);
    }
}

/*
Enter a value: 5

Enter b value: 6

6 is the maximum number
*/

/*
Enter a value: 10

Enter b value: 20

20 is the maximum number
*/

/*
Enter a value: 10

Enter b value: 10

Both are equal numbers
*/