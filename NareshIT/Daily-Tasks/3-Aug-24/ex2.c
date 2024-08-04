/*
Write a c program to find the next multiple of 10 of a given two digit number

input :- 56

output :-60
*/

#include<stdio.h>
void main()
{
    int nextMul, n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    nextMul = (n/10+1)*10;
    printf("\nNext 10 multiple of %d is %d\n", n, nextMul);
}

/*
Enter a number: 56

Next 10 multiple of 56 is 60

Enter a number: 99

Next 10 multiple of 99 is 100

*/