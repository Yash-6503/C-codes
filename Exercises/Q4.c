// Write a C Program to Print Prime Numbers From 1 to N

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // If divisible by any number other than 1 and itself
    }
    return 1; // Number is prime
}

int main()
{
    int n;
    printf("Enter upto which n number you wants to print the prime number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}