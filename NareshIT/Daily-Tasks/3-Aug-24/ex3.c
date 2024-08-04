/*
Write a c program to find the previous multiple of 10 of a given two digit number

input :- 56

output :-50
*/

#include<stdio.h>
void main()
{
    int n, prevMul;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    prevMul = (n/10)*10;
    printf("\nPrevious 10 multiple of %d is %d\n", n, prevMul);
}

/*output
Enter a number: 15

Previous 10 multiple of 15 is 10

Enter a number: 58

Previous 10 multiple of 58 is 50
*/