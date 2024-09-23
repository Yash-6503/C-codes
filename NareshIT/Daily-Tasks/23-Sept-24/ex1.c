/*
Que 1 : Write a program in C to find the square of any number using the function.
-------

-> create int main() function.
-> create int square(int n) function.
-> in main function read one number and call square(int n) function. here square(int n) function will perform the operation and will return the square of given number as result to the main function.
-> in main function catch the square of number which is calculate and return by square(int n) fuction and print it.

Sample input : Input any number for square : 20

Sample output : The square of 20 is : 400
*/

#include<stdio.h>
void main()
{
    int i, n;
    printf("\nInput any number for square: ");
    scanf("%d", &n);
    printf("\nThe square of %d is : %d", n, square(n));
}

int square(int n)
{
    return n * n;
}

/*
Input any number for square: 20

The square of 20 is : 400
*/