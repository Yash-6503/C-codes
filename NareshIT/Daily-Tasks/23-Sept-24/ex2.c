/*
Que 2 : Write a program in C to check if a given number is even or odd using the function.
-------

-> create int main() function.
-> create bool isEvenOrOdd(int n) function.
-> in main function read one number and call isEvenOrOdd(int n) function. here isEvenOrOdd(int n) function will perform the operation and will return true or false to the main function.
-> in main function catch the boolean result and according that print the proper message.

Sample input : Input any number : 5

Sample output : The entered number is odd.
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nInput any number: ");
    scanf("%d", &n);
    printf(evenodd(n)==0 ? "The entered number is even" : "The entered number is odd");
}

int evenodd(int n)
{
    return n % 2;
}

/*
Input any number: 10
The entered number is even

Input any number: 13
The entered number is odd
*/