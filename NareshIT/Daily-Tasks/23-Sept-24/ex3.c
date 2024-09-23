/*
Que 3 : Write a program in C to check whether a number is a prime number or not by using the function.
-------

-> create int main() function.
-> create bool isPrime(int n) function.
-> in main function read one number and call isPrime(int n) function. here isPrime(int n) function will perform the operation and will return true or false to the main function.
-> in main function catch the boolean result and according that print the proper message.

Sample input : Input a positive number : 5

Sample output : The number 5 is a prime number.
*/

#include<stdio.h>
void main()
{
    int n, i, j, c;
    printf("\nEnter a positive number: ");
    scanf("%d", &n);
    if(isprime(n) == 2){
        printf("\nThe number %d is a Prime number", n);
    }else{
        printf("\nThe number %d is not a prime number", n);
    }
    // printf(isprime(n) == 2 ? "The number is a Prime number" : "The number is a not prime number");
}

int isprime(int n)
{
    int c, i,j;
    c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    return c;
}

/*
Enter a positive number: 5
The number 5 is a Prime number

Enter a positive number: 4
The number 4 is not a prime number
*/