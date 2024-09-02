/*
Write a C Program to check a given number is Prime or not 
using while & for loop
*/

#include<stdio.h>
void main()
{
    int n, count=0, i;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("\n%d is a prime number", n);
    }else{
        printf("\n%d is not a prime number", n);
    }
}

/*
Enter Number: 5
5 is a prime number

Enter Number: 4
4 is not a prime number

Enter Number: 10
10 is not a prime number

Enter Number: 11
11 is a prime number
*/