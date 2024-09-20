/*
Que 2 : Write a program in C to add two numbers using pointers.
-------

Sample input : first number : 5
               second number : 6

Sample output : The sum of the entered numbers is : 11 
*/

#include<stdio.h>
void main()
{
    int a, b, sum;
    int *p, *q;
    printf("\nEnter a value: ");
    scanf("%d", &a);
    printf("\nEnter b value: ");
    scanf("%d", &b);

    p=&a;
    q=&b;
    sum = *p + *q;

    printf("\nThe sum of the entered numbers is : %d", sum);
}


/*
Enter a value: 5

Enter b value: 6

The sum of the entered numbers is : 11
*/

/*
Enter a value: 10

Enter b value: 20

The sum of the entered numbers is : 30
*/