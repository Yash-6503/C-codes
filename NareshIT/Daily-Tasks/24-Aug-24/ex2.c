/*
2.
Write a C program to generate the Fibonacci sequence up to a given times using a
 while loop. The Fibonacci sequence is a series of numbers in which each number is
 the sum of the two preceding ones, usually starting with 0 and 1. The program should
prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.

Input as:
Enter how many Fibonacci series you want : 9 

Output as:
0   1  1  2 3 5 8 13 21
f1 f2 f3
*/ 

#include<stdio.h>
void main()
{
    int f1=0, f2=1, f3=0, n, i=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i<n)
    {
        f3=f1+f2;
        printf("%3d", f1);
        f1=f2;
        f2=f3;
        i++;
    }
}

/*
Enter a number: 9
  0  1  1  2  3  5  8 13 21


Enter a number: 5
  0  1  1  2  3
*/