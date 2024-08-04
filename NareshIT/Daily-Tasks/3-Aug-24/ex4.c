/*
Write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 

find the previous multiple of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10.

[Dont use if else or ternary operator ]
*/

#include<stdio.h>
void main()
{
    int n, prevMul, nextMul;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    prevMul = (n/10)*10;
    nextMul = (n/10+1)*10;
    n%10>=5 && printf("\nNext 10 multiple of %d is %d\n", n, nextMul) || printf("\nPrevious 10 multiple of %d is %d\n", n, prevMul);
}

/* output
Enter a number: 72

Previous 10 multiple of 72 is 70

Enter a number: 78

Next 10 multiple of 78 is 80
*/