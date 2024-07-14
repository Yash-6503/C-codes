// Write a C program random number generator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("The random number %d is %d\n", i + 1, rand() % 100);
    }
    return 0;
}
