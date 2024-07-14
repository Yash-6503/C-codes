// Write a c program to find the sum of all natural numbers between 1 to n using recursion.

#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum of all natural numbers between 1 to %d is %d", n, sum(n));
    return 0;
}